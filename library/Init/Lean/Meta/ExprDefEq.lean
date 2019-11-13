/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Lean.Meta.InferType
import Init.Lean.Meta.FunInfo
import Init.Lean.Meta.LevelDefEq

namespace Lean
namespace Meta

/--
  Try to solve `a := (fun x => t) =?= b` by eta-expanding `b`.

  Remark: eta-reduction is not a good alternative even in a system without universe cumulativity like Lean.
  Example:
    ```
    (fun x : A => f ?m) =?= f
    ```
    The left-hand side of the constraint above it not eta-reduced because `?m` is a metavariable. -/
@[specialize] private def isDefEqEta
  (whnf    : Expr → MetaM Expr)
  (isDefEq : Expr → Expr → MetaM Bool)
  (a b : Expr) : MetaM Bool :=
if a.isLambda && !b.isLambda then do
  bType ← inferTypeAux whnf b;
  bType ← usingDefault whnf bType;
  match bType with
  | Expr.forallE n bi d b =>
    let b' := Expr.lam n bi d (Expr.app b (Expr.bvar 0));
    try $ isDefEq a b'
  | _ => pure false
else
  pure false

/--
  Return `true` if `e` is of the form `fun (x_1 ... x_n) => ?m x_1 ... x_n)`, and `?m` is unassigned.
  Remark: `n` may be 0. -/
def isEtaUnassignedMVar (e : Expr) : MetaM Bool :=
match e.etaExpanded? with
| some (Expr.mvar mvarId) =>
  condM (isReadOnlyOrSyntheticExprMVar mvarId)
    (pure false)
    (condM (isExprMVarAssigned mvarId)
      (pure false)
      (pure true))
| _   => pure false


/-
  First pass for `isDefEqArgs`. We unify explicit arguments, *and* easy cases
  Here, we say a case is easy if it is of the form

       ?m =?= t
       or
       t  =?= ?m

  where `?m` is unassigned.

  These easy cases are not just an optimization. When
  `?m` is a function, by assigning it to t, we make sure
  a unification constraint (in the explicit part)
  ```
  ?m t =?= f s
  ```
  is not higher-order.

  We also handle the eta-expanded cases:
  ```
  fun x₁ ... xₙ => ?m x₁ ... xₙ =?= t
  t =?= fun x₁ ... xₙ => ?m x₁ ... xₙ

  This is important because type inference often produces
  eta-expanded terms, and without this extra case, we could
  introduce counter intuitive behavior.

  Pre: `paramInfo.size <= args₁.size = args₂.size`
-/
@[specialize] private partial def isDefEqArgsFirstPass
    (isDefEq   : Expr → Expr → MetaM Bool)
    (paramInfo : Array ParamInfo) (args₁ args₂ : Array Expr) : Nat → Array Nat → MetaM (Option (Array Nat))
| i, postponed =>
  if h : i < paramInfo.size then
    let info := paramInfo.get ⟨i, h⟩;
    let a₁ := args₁.get! i;
    let a₂ := args₂.get! i;
    if info.implicit || info.instImplicit then
      condM (isEtaUnassignedMVar a₁ <||> isEtaUnassignedMVar a₂)
        (condM (isDefEq a₁ a₂)
          (isDefEqArgsFirstPass (i+1) postponed)
          (pure none))
        (isDefEqArgsFirstPass (i+1) (postponed.push i))
    else
      condM (isDefEq a₁ a₂)
        (isDefEqArgsFirstPass (i+1) postponed)
        (pure none)
  else
    pure (some postponed)

@[specialize] private partial def isDefEqArgsAux
    (isDefEq   : Expr → Expr → MetaM Bool)
    (args₁ args₂ : Array Expr) (h : args₁.size = args₂.size) : Nat → MetaM Bool
| i =>
  if h₁ : i < args₁.size then
    let a₁ := args₁.get ⟨i, h₁⟩;
    let a₂ := args₂.get ⟨i, h ▸ h₁⟩;
    condM (isDefEq a₁ a₂)
      (isDefEqArgsAux (i+1))
      (pure false)
  else
    pure true

@[specialize] private def isDefEqArgs
  (whnf              : Expr → MetaM Expr)
  (isDefEq           : Expr → Expr → MetaM Bool)
  (synthesizePending : Expr → MetaM Bool)
  (f : Expr) (args₁ args₂ : Array Expr) : MetaM Bool :=
if h : args₁.size = args₂.size then do
  finfo ← getFunInfoNArgsAux whnf f args₁.size;
  isDefEqArgsAux isDefEq args₁ args₂ h finfo.paramInfo.size;
  (some postponed) ← isDefEqArgsFirstPass isDefEq finfo.paramInfo args₁ args₂ 0 #[] | pure false;
  /- Second pass: unify implicit arguments.
     In the second pass, we make sure we are unfolding at
     least non reducible definitions (default setting). -/
  postponed.allM $ fun i => do
    let a₁   := args₁.get! i;
    let a₂   := args₂.get! i;
    let info := finfo.paramInfo.get! i;
    when info.instImplicit $ do {
       synthesizePending a₁;
       synthesizePending a₂;
       pure ()
    };
    usingAtLeastTransparency TransparencyMode.default $ isDefEq a₁ a₂
else
  pure false

/--
  Check whether the types of the free variables at `fvars` are
  definitionally equal to the types at `ds₂`.

  Pre: `fvars.size == ds₂.size`

  This method also updates the set of local instances, and invokes
  the continuation `k` with the updated set.

  We can't use `withNewLocalInstances` because the `isDeq fvarType d₂`
  may use local instances. -/
@[specialize] partial def isDefEqBindingDomain
    (whnf    : Expr → MetaM Expr)
    (isDefEq : Expr → Expr → MetaM Bool)
    (fvars : Array Expr) (ds₂ : Array Expr) : Nat → MetaM Bool → MetaM Bool
| i, k =>
  if h : i < fvars.size then do
    let fvar := fvars.get ⟨i, h⟩;
    fvarDecl ← getLocalDecl fvar.fvarId!;
    let fvarType := fvarDecl.type;
    let d₂       := ds₂.get! i;
    condM (isDefEq fvarType d₂)
      (do c? ← isClass whnf fvarType;
          match c? with
          | some className => withNewLocalInstance className fvar $ isDefEqBindingDomain (i+1) k
          | none           => isDefEqBindingDomain (i+1) k)
      (pure false)
  else
    k

/- Auxiliary function for `isDefEqBinding` for handling binders `forall/fun`.
   It accumulates the new free variables in `fvars`, and declare them at `lctx`.
   We use the domain types of `e₁` to create the new free variables.
   We store the domain types of `e₂` at `ds₂`. -/
@[specialize] private partial def isDefEqBindingAux
  (whnf    : Expr → MetaM Expr)
  (isDefEq : Expr → Expr → MetaM Bool)
  : LocalContext → Array Expr → Expr → Expr → Array Expr → MetaM Bool
| lctx, fvars, e₁, e₂, ds₂ =>
  let process (n : Name) (d₁ d₂ b₁ b₂ : Expr) : MetaM Bool := do {
    let d₁    := d₁.instantiateRev fvars;
    let d₂    := d₂.instantiateRev fvars;
    fvarId    ← mkFreshId;
    let lctx  := lctx.mkLocalDecl fvarId n d₁;
    let fvars := fvars.push (Expr.fvar fvarId);
    isDefEqBindingAux lctx fvars b₁ b₂ (ds₂.push d₂)
  };
  match e₁, e₂ with
  | Expr.forallE n _ d₁ b₁, Expr.forallE _ _ d₂ b₂ => process n d₁ d₂ b₁ b₂
  | Expr.lam     n _ d₁ b₁, Expr.lam     _ _ d₂ b₂ => process n d₁ d₂ b₁ b₂
  | _,                      _                      =>
    adaptReader (fun (ctx : Context) => { lctx := lctx, .. ctx }) $
      isDefEqBindingDomain whnf isDefEq fvars ds₂ 0 $
        isDefEq (e₁.instantiateRev fvars) (e₂.instantiateRev fvars)

@[inline] private def isDefEqBinding
  (whnf    : Expr → MetaM Expr)
  (isDefEq : Expr → Expr → MetaM Bool)
  (a b : Expr) : MetaM Bool :=
do lctx ← getLCtx;
   isDefEqBindingAux whnf isDefEq lctx #[] a b #[]

end Meta
end Lean