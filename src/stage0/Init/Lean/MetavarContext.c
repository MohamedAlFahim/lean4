// Lean compiler output
// Module: Init.Lean.MetavarContext
// Imports: Init.Lean.AbstractMetavarContext
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__67(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_level_assigned(lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_fvar(lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__6;
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__34___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__17___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__54(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_dec_eq(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__2(lean_object*, size_t, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__16___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__60___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_findDecl___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_foldlFromM___at_Lean_AbstractMetavarContext_MkBinding_collectDeps___spec__58___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__47(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__58___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__62(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__50___boxed(lean_object*, lean_object*);
uint8_t l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__21___boxed(lean_object*, lean_object*);
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__11;
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__8(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_mkLambda___spec__66___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__9(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_exprIsInhabited;
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getExprAssignment___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_getLocalDeclWithSmallestIdx(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl___spec__2___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__23(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t l_USize_shift__right(size_t, size_t);
uint8_t lean_level_has_mvar(lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExpr___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_let(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_hasAssignedLevelMVar(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__26___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__57___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__51___boxed(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__30(lean_object*, lean_object*, lean_object*);
extern lean_object* l_panicWithPos___at_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___spec__1___rarg___closed__2;
lean_object* lean_metavar_ctx_erase_delayed(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__32___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__12___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_delayed_assignment(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__11___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__36(lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__9___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_mkMetavarContext___closed__1;
lean_object* l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__50(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__30___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignedLevelMVar___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
lean_object* l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1;
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(lean_object*, size_t, lean_object*);
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_findDecl___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getDelayedAssignment___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___at_Lean_MetavarContext_instantiateMVars___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_reduceLocalContext(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__15(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_mkDecl___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__44___boxed(lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_update_succ(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__10(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___at_Lean_MetavarContext_instantiateMVars___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__8;
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__60(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl___boxed(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__17(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__23___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_instantiateMVars___at_Lean_MetavarContext_instantiateMVars___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateForall_x21___closed__1;
uint8_t l_Lean_BinderInfo_isAuxDecl(uint8_t);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__10;
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__56___boxed(lean_object*, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__3;
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_panicWithPos___at_Lean_MetavarContext_instantiateMVars___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__45(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__40(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__20___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext;
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_name_hash_usize(lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__15___boxed(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateProj_x21___closed__1;
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFVar(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__7;
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__20(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__41___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__9;
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__28___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getLevelAssignment___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignLevel___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__44(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__42(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_constName_x21___closed__1;
lean_object* l_panicWithPos___at_Lean_MetavarContext_mkLambda___spec__63(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getExprAssignment___spec__1(lean_object*, lean_object*);
lean_object* lean_expr_update_const(lean_object*, lean_object*);
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__27___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_metavar_ctx(lean_object*);
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(lean_object*, size_t, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__51(lean_object*, lean_object*);
extern lean_object* l_PersistentHashMap_empty___closed__3;
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__5;
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__28(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__42___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_mkDecl___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_assign_expr(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__24___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___spec__2(lean_object*, uint8_t, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__53(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__27(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl___closed__2;
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__26(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__22(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__1;
extern lean_object* l_Lean_MetavarDecl_Inhabited;
lean_object* l_Lean_AbstractMetavarContext_MkBinding_getInScope(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_panicWithPos___at_Lean_MetavarContext_getDecl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getDelayedAssignment___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__33___boxed(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__58(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_mkDecl___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
extern size_t l_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__5___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___rarg___closed__1;
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__59(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__46(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__18___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl___closed__1;
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__39___boxed(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__16(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getLevelAssignment___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__62___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__39(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_MetavarContext_instantiateMVars___spec__6(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__67___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExpr___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__8___boxed(lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_panicWithPos___at_Lean_MetavarContext_instantiateMVars___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_mvar(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_level_assignment(lean_object*, lean_object*);
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_delayed_assigned(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_mkLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__34(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__54___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Level_updateSucc_x21___closed__1;
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__57(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__41(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__38(lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_letName_x21___closed__1;
lean_object* l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_mkDecl___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateLevelMVars___at_Lean_MetavarContext_instantiateMVars___spec__5(lean_object*, lean_object*);
lean_object* l_panic(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Level_updateIMax_x21___closed__1;
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__10___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_updateLambda_x21___closed__1;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__1;
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__21(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl___spec__2(lean_object*, size_t, lean_object*);
extern lean_object* l_HashMap_Inhabited___closed__1;
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__45___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isDelayedAssigned___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignExpr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isLevelAssigned___boxed(lean_object*, lean_object*);
extern lean_object* l_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__52___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx_x27___rarg(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignDelayed___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_isUnaryNode___rarg(lean_object*);
extern lean_object* l_EIO_Monad___closed__1;
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__29___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_mkBinding___at_Lean_MetavarContext_mkLambda___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_mkForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___main___at_Lean_LocalContext_erase___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__24(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__29(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_AbstractMetavarContext_MkBinding_mkMVarApp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExpr___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_mk_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__14(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_find_decl(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignLevel___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_isExprAssigned___boxed(lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_hasAssignedMVar(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_assign_delayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_mkDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__56(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__35___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_mk_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_mkLambda___spec__66(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__35(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignDelayed___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__22___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__12(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__38___boxed(lean_object*, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__2;
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment___spec__2___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__32(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__2;
uint8_t l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__47___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_level_update_max(lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(lean_object*, size_t, lean_object*);
uint8_t lean_expr_has_expr_mvar(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment___spec__2(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_Expr_updateMData_x21___closed__1;
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__48(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_mkBinding___at_Lean_MetavarContext_mkLambda___spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__4;
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_instantiateMVars___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__46___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_sort(lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__48___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_hasAssignedMVar___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__53___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__18(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__52(lean_object*, lean_object*, lean_object*);
lean_object* lean_metavar_ctx_assign_level(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__36___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__33(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_MkBinding_collectDeps___at_Lean_MetavarContext_mkLambda___spec__4(lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panicWithPos___at_Lean_MetavarContext_getDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panicWithPos___at_Lean_MetavarContext_mkLambda___spec__63___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__59___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__40___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__14___boxed(lean_object*, lean_object*);
lean_object* l_panicWithPos___at_Lean_Level_updateSucc_x21___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_panicWithPos___at_Lean_AbstractMetavarContext_MkBinding_mkBinding___spec__1___rarg___closed__1;
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__3;
uint8_t lean_expr_has_level_mvar(lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_name(lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1___boxed(lean_object*, lean_object*);
lean_object* _init_l_Lean_MetavarContext_mkMetavarContext___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PersistentHashMap_empty___closed__3;
x_2 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
}
lean_object* lean_mk_metavar_ctx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_dec(x_1);
x_2 = l_Lean_MetavarContext_mkMetavarContext___closed__1;
return x_2;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_mkDecl___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_mkDecl___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_name_hash_usize(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_mkDecl___spec__3(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_mkDecl___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_mkDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_name_hash_usize(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_name_hash_usize(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* lean_metavar_ctx_mk_decl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_4);
lean_ctor_set(x_9, 2, x_5);
lean_ctor_set_uint8(x_9, sizeof(void*)*3, x_6);
x_10 = l_PersistentHashMap_insert___at_Lean_MetavarContext_mkDecl___spec__1(x_8, x_2, x_9);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_4);
lean_ctor_set(x_15, 2, x_5);
lean_ctor_set_uint8(x_15, sizeof(void*)*3, x_6);
x_16 = l_PersistentHashMap_insert___at_Lean_MetavarContext_mkDecl___spec__1(x_11, x_2, x_15);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_13);
lean_ctor_set(x_17, 3, x_14);
return x_17;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_mkDecl___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_mkDecl___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_mkDecl___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_MetavarContext_mkDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = lean_metavar_ctx_mk_decl(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_dec_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl___spec__2(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_findDecl___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_metavar_ctx_find_decl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find___at_Lean_MetavarContext_findDecl___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_findDecl___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_findDecl___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_findDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_MetavarContext_findDecl___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_panicWithPos___at_Lean_MetavarContext_getDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = l_panicWithPos___rarg___closed__1;
x_6 = lean_string_append(x_5, x_1);
x_7 = l_panicWithPos___rarg___closed__2;
x_8 = lean_string_append(x_6, x_7);
x_9 = l_Nat_repr(x_2);
x_10 = lean_string_append(x_8, x_9);
lean_dec(x_9);
x_11 = l_panicWithPos___rarg___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_Nat_repr(x_3);
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
x_15 = l_panicWithPos___rarg___closed__3;
x_16 = lean_string_append(x_14, x_15);
x_17 = lean_string_append(x_16, x_4);
x_18 = l_Lean_MetavarDecl_Inhabited;
x_19 = lean_panic_fn(x_17);
return x_19;
}
}
lean_object* _init_l_Lean_MetavarContext_getDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Init.Lean.MetavarContext");
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_getDecl___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown metavariable");
return x_1;
}
}
lean_object* l_Lean_MetavarContext_getDecl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_PersistentHashMap_find___at_Lean_MetavarContext_findDecl___spec__1(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Lean_MetavarContext_getDecl___closed__1;
x_6 = lean_unsigned_to_nat(37u);
x_7 = lean_unsigned_to_nat(15u);
x_8 = l_Lean_MetavarContext_getDecl___closed__2;
x_9 = l_panicWithPos___at_Lean_MetavarContext_getDecl___spec__1(x_5, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
return x_10;
}
}
}
lean_object* l_panicWithPos___at_Lean_MetavarContext_getDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_panicWithPos___at_Lean_MetavarContext_getDecl___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_MetavarContext_getDecl___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_MetavarContext_getDecl(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignLevel___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_name_hash_usize(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignLevel___spec__3(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignLevel___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_name_hash_usize(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_name_hash_usize(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* lean_metavar_ctx_assign_level(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignLevel___spec__1(x_5, x_2, x_3);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_11 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignLevel___spec__1(x_8, x_2, x_3);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_9);
lean_ctor_set(x_12, 3, x_10);
return x_12;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignLevel___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignLevel___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignExpr___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExpr___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_name_hash_usize(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignExpr___spec__3(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExpr___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExpr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_name_hash_usize(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_name_hash_usize(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* lean_metavar_ctx_assign_expr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 2);
x_6 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExpr___spec__1(x_5, x_2, x_3);
lean_ctor_set(x_1, 2, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_11 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignExpr___spec__1(x_9, x_2, x_3);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_11);
lean_ctor_set(x_12, 3, x_10);
return x_12;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExpr___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignExpr___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignExpr___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignDelayed___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_name_hash_usize(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_MetavarContext_assignDelayed___spec__3(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_MetavarContext_assignDelayed___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_name_hash_usize(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_name_hash_usize(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* lean_metavar_ctx_assign_delayed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_5);
x_9 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignDelayed___spec__1(x_7, x_2, x_8);
lean_ctor_set(x_1, 3, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_4);
lean_ctor_set(x_14, 2, x_5);
x_15 = l_PersistentHashMap_insert___at_Lean_MetavarContext_assignDelayed___spec__1(x_13, x_2, x_14);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_11);
lean_ctor_set(x_16, 2, x_12);
lean_ctor_set(x_16, 3, x_15);
return x_16;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_MetavarContext_assignDelayed___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_MetavarContext_assignDelayed___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_dec_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__2(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getLevelAssignment___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_metavar_ctx_get_level_assignment(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find___at_Lean_MetavarContext_getLevelAssignment___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getLevelAssignment___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getLevelAssignment___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_MetavarContext_getLevelAssignment___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_dec_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment___spec__2(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getExprAssignment___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find___at_Lean_MetavarContext_getExprAssignment___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getExprAssignment___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getExprAssignment___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getExprAssignment___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_MetavarContext_getExprAssignment___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_dec_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__2(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getDelayedAssignment___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* lean_metavar_ctx_get_delayed_assignment(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_find___at_Lean_MetavarContext_getDelayedAssignment___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_MetavarContext_getDelayedAssignment___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_MetavarContext_getDelayedAssignment___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_MetavarContext_getDelayedAssignment___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_15 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(x_13, x_14, x_3);
lean_dec(x_13);
return x_15;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3(x_17, x_18, x_3);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(x_3, x_4, x_2);
return x_5;
}
}
uint8_t lean_metavar_ctx_is_level_assigned(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isLevelAssigned___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isLevelAssigned___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_isLevelAssigned___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_metavar_ctx_is_level_assigned(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_15 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(x_13, x_14, x_3);
lean_dec(x_13);
return x_15;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3(x_17, x_18, x_3);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(x_3, x_4, x_2);
return x_5;
}
}
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isExprAssigned___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isExprAssigned___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_isExprAssigned___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_metavar_ctx_is_expr_assigned(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_15 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(x_13, x_14, x_3);
lean_dec(x_13);
return x_15;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_LocalContext_contains___spec__3(x_17, x_18, x_3);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(x_3, x_4, x_2);
return x_5;
}
}
uint8_t lean_metavar_ctx_is_delayed_assigned(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_MetavarContext_isDelayedAssigned___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_MetavarContext_isDelayedAssigned___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_isDelayedAssigned___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_metavar_ctx_is_delayed_assigned(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_4);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_1, 0);
lean_dec(x_17);
x_18 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_18);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_22 = lean_array_set(x_4, x_8, x_9);
lean_dec(x_8);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 1:
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; size_t x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_10, 0);
x_29 = lean_array_set(x_4, x_8, x_9);
x_30 = x_2 >> x_5;
x_31 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_28, x_30, x_3);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_29);
lean_free_object(x_10);
lean_dec(x_8);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_31, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_31, 0);
lean_dec(x_36);
x_37 = 0;
x_38 = lean_box(x_37);
lean_ctor_set(x_31, 1, x_38);
lean_ctor_set(x_31, 0, x_1);
return x_31;
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_31);
x_39 = 0;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_1);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_1, 0);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_31);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_31, 0);
x_46 = lean_ctor_get(x_31, 1);
lean_dec(x_46);
x_47 = l_PersistentHashMap_isUnaryNode___rarg(x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; 
lean_ctor_set(x_10, 0, x_45);
x_48 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_48);
x_49 = 1;
x_50 = lean_box(x_49);
lean_ctor_set(x_31, 1, x_50);
lean_ctor_set(x_31, 0, x_1);
return x_31;
}
else
{
lean_object* x_51; uint8_t x_52; 
lean_free_object(x_31);
lean_dec(x_45);
lean_free_object(x_10);
x_51 = lean_ctor_get(x_47, 0);
lean_inc(x_51);
lean_dec(x_47);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_array_set(x_29, x_8, x_55);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_56);
x_57 = 1;
x_58 = lean_box(x_57);
lean_ctor_set(x_51, 1, x_58);
lean_ctor_set(x_51, 0, x_1);
return x_51;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_51, 0);
x_60 = lean_ctor_get(x_51, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_51);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_array_set(x_29, x_8, x_61);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_62);
x_63 = 1;
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_1);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_31, 0);
lean_inc(x_66);
lean_dec(x_31);
x_67 = l_PersistentHashMap_isUnaryNode___rarg(x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; 
lean_ctor_set(x_10, 0, x_66);
x_68 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_68);
x_69 = 1;
x_70 = lean_box(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_1);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_66);
lean_free_object(x_10);
x_72 = lean_ctor_get(x_67, 0);
lean_inc(x_72);
lean_dec(x_67);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
x_77 = lean_array_set(x_29, x_8, x_76);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_77);
x_78 = 1;
x_79 = lean_box(x_78);
if (lean_is_scalar(x_75)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_75;
}
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_1);
x_81 = lean_ctor_get(x_31, 0);
lean_inc(x_81);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_82 = x_31;
} else {
 lean_dec_ref(x_31);
 x_82 = lean_box(0);
}
x_83 = l_PersistentHashMap_isUnaryNode___rarg(x_81);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; lean_object* x_88; 
lean_ctor_set(x_10, 0, x_81);
x_84 = lean_array_set(x_29, x_8, x_10);
lean_dec(x_8);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = 1;
x_87 = lean_box(x_86);
if (lean_is_scalar(x_82)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_82;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_82);
lean_dec(x_81);
lean_free_object(x_10);
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
lean_dec(x_83);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_92 = x_89;
} else {
 lean_dec_ref(x_89);
 x_92 = lean_box(0);
}
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_array_set(x_29, x_8, x_93);
lean_dec(x_8);
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_96 = 1;
x_97 = lean_box(x_96);
if (lean_is_scalar(x_92)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_92;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
else
{
lean_object* x_99; lean_object* x_100; size_t x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_99 = lean_ctor_get(x_10, 0);
lean_inc(x_99);
lean_dec(x_10);
x_100 = lean_array_set(x_4, x_8, x_9);
x_101 = x_2 >> x_5;
x_102 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_99, x_101, x_3);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
x_104 = lean_unbox(x_103);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_100);
lean_dec(x_8);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_105 = x_102;
} else {
 lean_dec_ref(x_102);
 x_105 = lean_box(0);
}
x_106 = 0;
x_107 = lean_box(x_106);
if (lean_is_scalar(x_105)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_105;
}
lean_ctor_set(x_108, 0, x_1);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_109 = x_1;
} else {
 lean_dec_ref(x_1);
 x_109 = lean_box(0);
}
x_110 = lean_ctor_get(x_102, 0);
lean_inc(x_110);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_111 = x_102;
} else {
 lean_dec_ref(x_102);
 x_111 = lean_box(0);
}
x_112 = l_PersistentHashMap_isUnaryNode___rarg(x_110);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_110);
x_114 = lean_array_set(x_100, x_8, x_113);
lean_dec(x_8);
if (lean_is_scalar(x_109)) {
 x_115 = lean_alloc_ctor(0, 1, 0);
} else {
 x_115 = x_109;
}
lean_ctor_set(x_115, 0, x_114);
x_116 = 1;
x_117 = lean_box(x_116);
if (lean_is_scalar(x_111)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_111;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_111);
lean_dec(x_110);
x_119 = lean_ctor_get(x_112, 0);
lean_inc(x_119);
lean_dec(x_112);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_122 = x_119;
} else {
 lean_dec_ref(x_119);
 x_122 = lean_box(0);
}
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_121);
x_124 = lean_array_set(x_100, x_8, x_123);
lean_dec(x_8);
if (lean_is_scalar(x_109)) {
 x_125 = lean_alloc_ctor(0, 1, 0);
} else {
 x_125 = x_109;
}
lean_ctor_set(x_125, 0, x_124);
x_126 = 1;
x_127 = lean_box(x_126);
if (lean_is_scalar(x_122)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_122;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
}
default: 
{
uint8_t x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_8);
lean_dec(x_4);
x_129 = 0;
x_130 = lean_box(x_129);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_1);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_1, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_1, 1);
lean_inc(x_133);
x_134 = lean_unsigned_to_nat(0u);
x_135 = l_Array_indexOfAux___main___at_Lean_LocalContext_erase___spec__3(x_132, x_3, x_134);
if (lean_obj_tag(x_135) == 0)
{
uint8_t x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_133);
lean_dec(x_132);
x_136 = 0;
x_137 = lean_box(x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_1);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
else
{
uint8_t x_139; 
x_139 = !lean_is_exclusive(x_1);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; lean_object* x_146; lean_object* x_147; 
x_140 = lean_ctor_get(x_1, 1);
lean_dec(x_140);
x_141 = lean_ctor_get(x_1, 0);
lean_dec(x_141);
x_142 = lean_ctor_get(x_135, 0);
lean_inc(x_142);
lean_dec(x_135);
x_143 = l_Array_eraseIdx_x27___rarg(x_132, x_142);
x_144 = l_Array_eraseIdx_x27___rarg(x_133, x_142);
lean_dec(x_142);
lean_ctor_set(x_1, 1, x_144);
lean_ctor_set(x_1, 0, x_143);
x_145 = 1;
x_146 = lean_box(x_145);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_1);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_1);
x_148 = lean_ctor_get(x_135, 0);
lean_inc(x_148);
lean_dec(x_135);
x_149 = l_Array_eraseIdx_x27___rarg(x_132, x_148);
x_150 = l_Array_eraseIdx_x27___rarg(x_133, x_148);
lean_dec(x_148);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = 1;
x_153 = lean_box(x_152);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
}
}
lean_object* l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_name_hash_usize(x_2);
x_7 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_4, x_6, x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_5, x_12);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
else
{
lean_object* x_14; lean_object* x_15; size_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = lean_name_hash_usize(x_2);
x_17 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_14, x_16, x_2);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_15, x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* lean_metavar_ctx_erase_delayed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(x_4, x_2);
lean_dec(x_2);
lean_ctor_set(x_1, 3, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_10 = l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(x_9, x_2);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_10);
return x_11;
}
}
}
lean_object* l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_eraseAux___main___at_Lean_MetavarContext_eraseDelayed___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_erase___at_Lean_MetavarContext_eraseDelayed___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
uint8_t l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = lean_metavar_ctx_mk_decl(x_1, x_2, x_6, x_3, x_4, x_5);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_metavar_ctx_get_level_assignment), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_metavar_ctx_assign_level), 3, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_metavar_ctx_get_expr_assignment), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_metavar_ctx_assign_expr), 3, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MetavarContext_getDecl___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_metavar_ctx_assign_delayed), 5, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_metavar_ctx_get_delayed_assignment), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_metavar_ctx_erase_delayed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__2___boxed), 5, 0);
return x_1;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_1 = l_Lean_MetavarContext_mkMetavarContext___closed__1;
x_2 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__1;
x_3 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__2;
x_4 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__3;
x_5 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__4;
x_6 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__5;
x_7 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__6;
x_8 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__7;
x_9 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__8;
x_10 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__9;
x_11 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__10;
x_12 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_2);
lean_ctor_set(x_12, 2, x_3);
lean_ctor_set(x_12, 3, x_4);
lean_ctor_set(x_12, 4, x_2);
lean_ctor_set(x_12, 5, x_5);
lean_ctor_set(x_12, 6, x_6);
lean_ctor_set(x_12, 7, x_7);
lean_ctor_set(x_12, 8, x_8);
lean_ctor_set(x_12, 9, x_9);
lean_ctor_set(x_12, 10, x_10);
lean_ctor_set(x_12, 11, x_11);
return x_12;
}
}
lean_object* _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__11;
return x_1;
}
}
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___lambda__2(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
uint8_t l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
lean_inc(x_3);
x_4 = lean_level_has_mvar(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
x_2 = x_3;
goto _start;
}
}
case 2:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
lean_inc(x_7);
x_9 = lean_level_has_mvar(x_7);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_7);
lean_inc(x_8);
x_10 = lean_level_has_mvar(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_1);
x_11 = 0;
return x_11;
}
else
{
x_2 = x_8;
goto _start;
}
}
else
{
uint8_t x_13; 
lean_inc(x_1);
x_13 = l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1(x_1, x_7);
if (x_13 == 0)
{
uint8_t x_14; 
lean_inc(x_8);
x_14 = lean_level_has_mvar(x_8);
if (x_14 == 0)
{
lean_dec(x_8);
lean_dec(x_1);
return x_13;
}
else
{
x_2 = x_8;
goto _start;
}
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_1);
x_16 = 1;
return x_16;
}
}
}
case 3:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
lean_inc(x_17);
x_19 = lean_level_has_mvar(x_17);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_17);
lean_inc(x_18);
x_20 = lean_level_has_mvar(x_18);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_18);
lean_dec(x_1);
x_21 = 0;
return x_21;
}
else
{
x_2 = x_18;
goto _start;
}
}
else
{
uint8_t x_23; 
lean_inc(x_1);
x_23 = l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1(x_1, x_17);
if (x_23 == 0)
{
uint8_t x_24; 
lean_inc(x_18);
x_24 = lean_level_has_mvar(x_18);
if (x_24 == 0)
{
lean_dec(x_18);
lean_dec(x_1);
return x_23;
}
else
{
x_2 = x_18;
goto _start;
}
}
else
{
uint8_t x_26; 
lean_dec(x_18);
lean_dec(x_1);
x_26 = 1;
return x_26;
}
}
}
case 5:
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_metavar_ctx_get_level_assignment(x_1, x_27);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = 0;
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_28);
x_30 = 1;
return x_30;
}
}
default: 
{
uint8_t x_31; 
lean_dec(x_2);
lean_dec(x_1);
x_31 = 0;
return x_31;
}
}
}
}
uint8_t l_Lean_MetavarContext_hasAssignedLevelMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_hasAssignedLevelMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_hasAssignedLevelMVar(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_1);
x_6 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___spec__2(x_1, x_2, x_5);
x_7 = l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1(x_1, x_4);
if (x_7 == 0)
{
return x_6;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_metavar_ctx_get_expr_assignment(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
case 3:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Lean_AbstractMetavarContext_hasAssignedLevelMVar___main___at_Lean_MetavarContext_hasAssignedLevelMVar___spec__1(x_1, x_7);
return x_8;
}
case 4:
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = 0;
x_11 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___spec__2(x_1, x_10, x_9);
return x_11;
}
case 5:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_expr_has_expr_mvar(x_12);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = lean_expr_has_level_mvar(x_12);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_12);
x_16 = lean_expr_has_expr_mvar(x_13);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = lean_expr_has_level_mvar(x_13);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_13);
lean_dec(x_1);
x_18 = 0;
return x_18;
}
else
{
x_2 = x_13;
goto _start;
}
}
else
{
x_2 = x_13;
goto _start;
}
}
else
{
uint8_t x_21; 
lean_inc(x_1);
x_21 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_12);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = lean_expr_has_expr_mvar(x_13);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = lean_expr_has_level_mvar(x_13);
if (x_23 == 0)
{
lean_dec(x_13);
lean_dec(x_1);
return x_21;
}
else
{
x_2 = x_13;
goto _start;
}
}
else
{
x_2 = x_13;
goto _start;
}
}
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_1);
x_26 = 1;
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_inc(x_1);
x_27 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_12);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = lean_expr_has_expr_mvar(x_13);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_13);
if (x_29 == 0)
{
lean_dec(x_13);
lean_dec(x_1);
return x_27;
}
else
{
x_2 = x_13;
goto _start;
}
}
else
{
x_2 = x_13;
goto _start;
}
}
else
{
uint8_t x_32; 
lean_dec(x_13);
lean_dec(x_1);
x_32 = 1;
return x_32;
}
}
}
case 6:
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_2, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_2, 2);
lean_inc(x_34);
lean_dec(x_2);
x_35 = lean_expr_has_expr_mvar(x_33);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = lean_expr_has_level_mvar(x_33);
if (x_36 == 0)
{
uint8_t x_37; 
lean_dec(x_33);
x_37 = lean_expr_has_expr_mvar(x_34);
if (x_37 == 0)
{
uint8_t x_38; 
x_38 = lean_expr_has_level_mvar(x_34);
if (x_38 == 0)
{
uint8_t x_39; 
lean_dec(x_34);
lean_dec(x_1);
x_39 = 0;
return x_39;
}
else
{
x_2 = x_34;
goto _start;
}
}
else
{
x_2 = x_34;
goto _start;
}
}
else
{
uint8_t x_42; 
lean_inc(x_1);
x_42 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_33);
if (x_42 == 0)
{
uint8_t x_43; 
x_43 = lean_expr_has_expr_mvar(x_34);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = lean_expr_has_level_mvar(x_34);
if (x_44 == 0)
{
lean_dec(x_34);
lean_dec(x_1);
return x_42;
}
else
{
x_2 = x_34;
goto _start;
}
}
else
{
x_2 = x_34;
goto _start;
}
}
else
{
uint8_t x_47; 
lean_dec(x_34);
lean_dec(x_1);
x_47 = 1;
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_inc(x_1);
x_48 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_33);
if (x_48 == 0)
{
uint8_t x_49; 
x_49 = lean_expr_has_expr_mvar(x_34);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = lean_expr_has_level_mvar(x_34);
if (x_50 == 0)
{
lean_dec(x_34);
lean_dec(x_1);
return x_48;
}
else
{
x_2 = x_34;
goto _start;
}
}
else
{
x_2 = x_34;
goto _start;
}
}
else
{
uint8_t x_53; 
lean_dec(x_34);
lean_dec(x_1);
x_53 = 1;
return x_53;
}
}
}
case 7:
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_2, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_2, 2);
lean_inc(x_55);
lean_dec(x_2);
x_56 = lean_expr_has_expr_mvar(x_54);
if (x_56 == 0)
{
uint8_t x_57; 
x_57 = lean_expr_has_level_mvar(x_54);
if (x_57 == 0)
{
uint8_t x_58; 
lean_dec(x_54);
x_58 = lean_expr_has_expr_mvar(x_55);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = lean_expr_has_level_mvar(x_55);
if (x_59 == 0)
{
uint8_t x_60; 
lean_dec(x_55);
lean_dec(x_1);
x_60 = 0;
return x_60;
}
else
{
x_2 = x_55;
goto _start;
}
}
else
{
x_2 = x_55;
goto _start;
}
}
else
{
uint8_t x_63; 
lean_inc(x_1);
x_63 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_54);
if (x_63 == 0)
{
uint8_t x_64; 
x_64 = lean_expr_has_expr_mvar(x_55);
if (x_64 == 0)
{
uint8_t x_65; 
x_65 = lean_expr_has_level_mvar(x_55);
if (x_65 == 0)
{
lean_dec(x_55);
lean_dec(x_1);
return x_63;
}
else
{
x_2 = x_55;
goto _start;
}
}
else
{
x_2 = x_55;
goto _start;
}
}
else
{
uint8_t x_68; 
lean_dec(x_55);
lean_dec(x_1);
x_68 = 1;
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_inc(x_1);
x_69 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_54);
if (x_69 == 0)
{
uint8_t x_70; 
x_70 = lean_expr_has_expr_mvar(x_55);
if (x_70 == 0)
{
uint8_t x_71; 
x_71 = lean_expr_has_level_mvar(x_55);
if (x_71 == 0)
{
lean_dec(x_55);
lean_dec(x_1);
return x_69;
}
else
{
x_2 = x_55;
goto _start;
}
}
else
{
x_2 = x_55;
goto _start;
}
}
else
{
uint8_t x_74; 
lean_dec(x_55);
lean_dec(x_1);
x_74 = 1;
return x_74;
}
}
}
case 8:
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; uint8_t x_99; 
x_75 = lean_ctor_get(x_2, 1);
lean_inc(x_75);
x_76 = lean_ctor_get(x_2, 2);
lean_inc(x_76);
x_77 = lean_ctor_get(x_2, 3);
lean_inc(x_77);
lean_dec(x_2);
x_99 = lean_expr_has_expr_mvar(x_75);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = lean_expr_has_level_mvar(x_75);
if (x_100 == 0)
{
uint8_t x_101; 
lean_dec(x_75);
x_101 = 0;
x_78 = x_101;
goto block_98;
}
else
{
uint8_t x_102; 
lean_inc(x_1);
x_102 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_75);
if (x_102 == 0)
{
x_78 = x_102;
goto block_98;
}
else
{
uint8_t x_103; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_1);
x_103 = 1;
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_inc(x_1);
x_104 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_75);
if (x_104 == 0)
{
x_78 = x_104;
goto block_98;
}
else
{
uint8_t x_105; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_1);
x_105 = 1;
return x_105;
}
}
block_98:
{
uint8_t x_79; 
x_79 = lean_expr_has_expr_mvar(x_76);
if (x_79 == 0)
{
uint8_t x_80; 
x_80 = lean_expr_has_level_mvar(x_76);
if (x_80 == 0)
{
lean_dec(x_76);
if (x_78 == 0)
{
uint8_t x_81; 
x_81 = lean_expr_has_expr_mvar(x_77);
if (x_81 == 0)
{
uint8_t x_82; 
x_82 = lean_expr_has_level_mvar(x_77);
if (x_82 == 0)
{
lean_dec(x_77);
lean_dec(x_1);
return x_78;
}
else
{
x_2 = x_77;
goto _start;
}
}
else
{
x_2 = x_77;
goto _start;
}
}
else
{
uint8_t x_85; 
lean_dec(x_77);
lean_dec(x_1);
x_85 = 1;
return x_85;
}
}
else
{
uint8_t x_86; 
lean_inc(x_1);
x_86 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_76);
if (x_86 == 0)
{
uint8_t x_87; 
x_87 = lean_expr_has_expr_mvar(x_77);
if (x_87 == 0)
{
uint8_t x_88; 
x_88 = lean_expr_has_level_mvar(x_77);
if (x_88 == 0)
{
lean_dec(x_77);
lean_dec(x_1);
return x_86;
}
else
{
x_2 = x_77;
goto _start;
}
}
else
{
x_2 = x_77;
goto _start;
}
}
else
{
uint8_t x_91; 
lean_dec(x_77);
lean_dec(x_1);
x_91 = 1;
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_inc(x_1);
x_92 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_76);
if (x_92 == 0)
{
uint8_t x_93; 
x_93 = lean_expr_has_expr_mvar(x_77);
if (x_93 == 0)
{
uint8_t x_94; 
x_94 = lean_expr_has_level_mvar(x_77);
if (x_94 == 0)
{
lean_dec(x_77);
lean_dec(x_1);
return x_92;
}
else
{
x_2 = x_77;
goto _start;
}
}
else
{
x_2 = x_77;
goto _start;
}
}
else
{
uint8_t x_97; 
lean_dec(x_77);
lean_dec(x_1);
x_97 = 1;
return x_97;
}
}
}
}
case 10:
{
lean_object* x_106; uint8_t x_107; 
x_106 = lean_ctor_get(x_2, 1);
lean_inc(x_106);
lean_dec(x_2);
x_107 = lean_expr_has_expr_mvar(x_106);
if (x_107 == 0)
{
uint8_t x_108; 
x_108 = lean_expr_has_level_mvar(x_106);
if (x_108 == 0)
{
uint8_t x_109; 
lean_dec(x_106);
lean_dec(x_1);
x_109 = 0;
return x_109;
}
else
{
x_2 = x_106;
goto _start;
}
}
else
{
x_2 = x_106;
goto _start;
}
}
case 11:
{
lean_object* x_112; uint8_t x_113; 
x_112 = lean_ctor_get(x_2, 2);
lean_inc(x_112);
lean_dec(x_2);
x_113 = lean_expr_has_expr_mvar(x_112);
if (x_113 == 0)
{
uint8_t x_114; 
x_114 = lean_expr_has_level_mvar(x_112);
if (x_114 == 0)
{
uint8_t x_115; 
lean_dec(x_112);
lean_dec(x_1);
x_115 = 0;
return x_115;
}
else
{
x_2 = x_112;
goto _start;
}
}
else
{
x_2 = x_112;
goto _start;
}
}
default: 
{
uint8_t x_118; 
lean_dec(x_2);
lean_dec(x_1);
x_118 = 0;
return x_118;
}
}
}
}
uint8_t l_Lean_MetavarContext_hasAssignedMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_List_foldr___main___at_Lean_MetavarContext_hasAssignedMVar___spec__2(x_1, x_4, x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_AbstractMetavarContext_hasAssignedMVar___main___at_Lean_MetavarContext_hasAssignedMVar___spec__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_MetavarContext_hasAssignedMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_MetavarContext_hasAssignedMVar(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_level_update_succ(x_1, x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = lean_level_update_succ(x_1, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
case 2:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_12, x_2);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_13, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_level_update_max(x_1, x_15, x_19);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
x_23 = lean_level_update_max(x_1, x_15, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
case 3:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_dec(x_1);
x_27 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_25, x_2);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_26, x_28);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = l_Lean_Level_updateSucc_x21___closed__1;
x_33 = lean_unsigned_to_nat(218u);
x_34 = lean_unsigned_to_nat(17u);
x_35 = l_Lean_Level_updateIMax_x21___closed__1;
x_36 = l_panicWithPos___at_Lean_Level_updateSucc_x21___spec__1(x_32, x_33, x_34, x_35);
lean_ctor_set(x_29, 0, x_36);
return x_29;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_29, 1);
lean_inc(x_37);
lean_dec(x_29);
x_38 = l_Lean_Level_updateSucc_x21___closed__1;
x_39 = lean_unsigned_to_nat(218u);
x_40 = lean_unsigned_to_nat(17u);
x_41 = l_Lean_Level_updateIMax_x21___closed__1;
x_42 = l_panicWithPos___at_Lean_Level_updateSucc_x21___spec__1(x_38, x_39, x_40, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_37);
return x_43;
}
}
case 5:
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
lean_inc(x_44);
lean_inc(x_2);
x_45 = lean_metavar_ctx_get_level_assignment(x_2, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; 
lean_dec(x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_1);
lean_ctor_set(x_46, 1, x_2);
return x_46;
}
else
{
lean_object* x_47; uint8_t x_48; 
lean_dec(x_1);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
lean_dec(x_45);
lean_inc(x_47);
x_48 = lean_level_has_mvar(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
lean_dec(x_44);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_2);
return x_49;
}
else
{
lean_object* x_50; uint8_t x_51; 
x_50 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_47, x_2);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
x_54 = lean_metavar_ctx_assign_level(x_53, x_44, x_52);
lean_ctor_set(x_50, 1, x_54);
return x_50;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_50, 0);
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_50);
lean_inc(x_55);
x_57 = lean_metavar_ctx_assign_level(x_56, x_44, x_55);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
default: 
{
lean_object* x_59; 
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_1);
lean_ctor_set(x_59, 1, x_2);
return x_59;
}
}
}
}
lean_object* l_Lean_MetavarContext_instantiateLevelMVars(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_panicWithPos___at_Lean_MetavarContext_instantiateMVars___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = l_panicWithPos___rarg___closed__1;
x_7 = lean_string_append(x_6, x_1);
x_8 = l_panicWithPos___rarg___closed__2;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_Nat_repr(x_2);
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = l_panicWithPos___rarg___closed__2;
x_13 = lean_string_append(x_11, x_12);
x_14 = l_Nat_repr(x_3);
x_15 = lean_string_append(x_13, x_14);
lean_dec(x_14);
x_16 = l_panicWithPos___rarg___closed__3;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_4);
x_19 = l_panicWithPos___at_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___spec__1___rarg___closed__2;
x_20 = lean_panic_fn(x_18);
x_21 = lean_apply_1(x_20, x_5);
return x_21;
}
}
lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___at_Lean_MetavarContext_instantiateMVars___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = l_Lean_exprIsInhabited;
x_11 = lean_array_get(x_10, x_2, x_9);
lean_inc(x_1);
x_12 = l_Lean_LocalContext_findFVar(x_1, x_11);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_13 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___rarg___closed__1;
x_14 = lean_unsigned_to_nat(197u);
x_15 = lean_unsigned_to_nat(12u);
x_16 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1;
x_17 = l_panicWithPos___at_Lean_MetavarContext_instantiateMVars___spec__4(x_13, x_14, x_15, x_16, x_5);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; uint8_t x_34; 
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 3);
lean_inc(x_20);
x_21 = lean_ctor_get_uint8(x_18, sizeof(void*)*4);
lean_dec(x_18);
x_34 = lean_expr_has_expr_mvar(x_20);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = lean_expr_has_level_mvar(x_20);
if (x_35 == 0)
{
x_22 = x_20;
x_23 = x_5;
goto block_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_5, 1);
lean_inc(x_36);
x_37 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_36, x_20);
lean_dec(x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_inc(x_20);
x_38 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_20, x_5);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
lean_dec(x_38);
x_41 = !lean_is_exclusive(x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
x_43 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_42, x_20, x_40);
lean_ctor_set(x_39, 1, x_43);
x_22 = x_40;
x_23 = x_39;
goto block_33;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_39, 0);
x_45 = lean_ctor_get(x_39, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_39);
lean_inc(x_40);
x_46 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_45, x_20, x_40);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_22 = x_40;
x_23 = x_47;
goto block_33;
}
}
else
{
lean_object* x_48; 
lean_dec(x_20);
x_48 = lean_ctor_get(x_37, 0);
lean_inc(x_48);
lean_dec(x_37);
x_22 = x_48;
x_23 = x_5;
goto block_33;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_5, 1);
lean_inc(x_49);
x_50 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_49, x_20);
lean_dec(x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_inc(x_20);
x_51 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_20, x_5);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
lean_dec(x_51);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
x_56 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_55, x_20, x_53);
lean_ctor_set(x_52, 1, x_56);
x_22 = x_53;
x_23 = x_52;
goto block_33;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_52, 0);
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_52);
lean_inc(x_53);
x_59 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_58, x_20, x_53);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_59);
x_22 = x_53;
x_23 = x_60;
goto block_33;
}
}
else
{
lean_object* x_61; 
lean_dec(x_20);
x_61 = lean_ctor_get(x_50, 0);
lean_inc(x_61);
lean_dec(x_50);
x_22 = x_61;
x_23 = x_5;
goto block_33;
}
}
block_33:
{
uint8_t x_24; 
x_24 = lean_expr_has_expr_mvar(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = lean_expr_has_level_mvar(x_22);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_expr_abstract_range(x_22, x_9, x_2);
lean_dec(x_22);
x_27 = lean_expr_mk_lambda(x_19, x_21, x_26, x_4);
x_3 = x_9;
x_4 = x_27;
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_23);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_23);
return x_32;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_115; 
x_62 = lean_ctor_get(x_18, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_18, 3);
lean_inc(x_63);
x_64 = lean_ctor_get(x_18, 4);
lean_inc(x_64);
lean_dec(x_18);
x_115 = lean_expr_has_expr_mvar(x_63);
if (x_115 == 0)
{
uint8_t x_116; 
x_116 = lean_expr_has_level_mvar(x_63);
if (x_116 == 0)
{
x_65 = x_63;
x_66 = x_5;
goto block_114;
}
else
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_5, 1);
lean_inc(x_117);
x_118 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_117, x_63);
lean_dec(x_117);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
lean_inc(x_63);
x_119 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_63, x_5);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 0);
lean_inc(x_121);
lean_dec(x_119);
x_122 = !lean_is_exclusive(x_120);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
x_124 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_123, x_63, x_121);
lean_ctor_set(x_120, 1, x_124);
x_65 = x_121;
x_66 = x_120;
goto block_114;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_125 = lean_ctor_get(x_120, 0);
x_126 = lean_ctor_get(x_120, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_120);
lean_inc(x_121);
x_127 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_126, x_63, x_121);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_127);
x_65 = x_121;
x_66 = x_128;
goto block_114;
}
}
else
{
lean_object* x_129; 
lean_dec(x_63);
x_129 = lean_ctor_get(x_118, 0);
lean_inc(x_129);
lean_dec(x_118);
x_65 = x_129;
x_66 = x_5;
goto block_114;
}
}
}
else
{
lean_object* x_130; lean_object* x_131; 
x_130 = lean_ctor_get(x_5, 1);
lean_inc(x_130);
x_131 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_130, x_63);
lean_dec(x_130);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; 
lean_inc(x_63);
x_132 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_63, x_5);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 0);
lean_inc(x_134);
lean_dec(x_132);
x_135 = !lean_is_exclusive(x_133);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; 
x_136 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
x_137 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_136, x_63, x_134);
lean_ctor_set(x_133, 1, x_137);
x_65 = x_134;
x_66 = x_133;
goto block_114;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_138 = lean_ctor_get(x_133, 0);
x_139 = lean_ctor_get(x_133, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_133);
lean_inc(x_134);
x_140 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_139, x_63, x_134);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_140);
x_65 = x_134;
x_66 = x_141;
goto block_114;
}
}
else
{
lean_object* x_142; 
lean_dec(x_63);
x_142 = lean_ctor_get(x_131, 0);
lean_inc(x_142);
lean_dec(x_131);
x_65 = x_142;
x_66 = x_5;
goto block_114;
}
}
block_114:
{
lean_object* x_67; lean_object* x_68; uint8_t x_80; 
x_80 = lean_expr_has_expr_mvar(x_65);
if (x_80 == 0)
{
uint8_t x_81; 
x_81 = lean_expr_has_level_mvar(x_65);
if (x_81 == 0)
{
uint8_t x_82; 
x_82 = lean_expr_has_expr_mvar(x_64);
if (x_82 == 0)
{
uint8_t x_83; 
x_83 = lean_expr_has_level_mvar(x_64);
if (x_83 == 0)
{
x_67 = x_64;
x_68 = x_66;
goto block_79;
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_66, 1);
lean_inc(x_84);
x_85 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_84, x_64);
lean_dec(x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
lean_inc(x_64);
x_86 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_64, x_66);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 0);
lean_inc(x_88);
lean_dec(x_86);
x_89 = !lean_is_exclusive(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
x_91 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_90, x_64, x_88);
lean_ctor_set(x_87, 1, x_91);
x_67 = x_88;
x_68 = x_87;
goto block_79;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_87, 0);
x_93 = lean_ctor_get(x_87, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_87);
lean_inc(x_88);
x_94 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_93, x_64, x_88);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_94);
x_67 = x_88;
x_68 = x_95;
goto block_79;
}
}
else
{
lean_object* x_96; 
lean_dec(x_64);
x_96 = lean_ctor_get(x_85, 0);
lean_inc(x_96);
lean_dec(x_85);
x_67 = x_96;
x_68 = x_66;
goto block_79;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_66, 1);
lean_inc(x_97);
x_98 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_97, x_64);
lean_dec(x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; 
lean_inc(x_64);
x_99 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_64, x_66);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 0);
lean_inc(x_101);
lean_dec(x_99);
x_102 = !lean_is_exclusive(x_100);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
x_104 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_103, x_64, x_101);
lean_ctor_set(x_100, 1, x_104);
x_67 = x_101;
x_68 = x_100;
goto block_79;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_105 = lean_ctor_get(x_100, 0);
x_106 = lean_ctor_get(x_100, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_100);
lean_inc(x_101);
x_107 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_106, x_64, x_101);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_107);
x_67 = x_101;
x_68 = x_108;
goto block_79;
}
}
else
{
lean_object* x_109; 
lean_dec(x_64);
x_109 = lean_ctor_get(x_98, 0);
lean_inc(x_109);
lean_dec(x_98);
x_67 = x_109;
x_68 = x_66;
goto block_79;
}
}
}
else
{
lean_object* x_110; lean_object* x_111; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_62);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_110 = lean_box(0);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_66);
return x_111;
}
}
else
{
lean_object* x_112; lean_object* x_113; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_62);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_112 = lean_box(0);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_66);
return x_113;
}
block_79:
{
uint8_t x_69; 
x_69 = lean_expr_has_expr_mvar(x_67);
if (x_69 == 0)
{
uint8_t x_70; 
x_70 = lean_expr_has_level_mvar(x_67);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_expr_abstract_range(x_65, x_9, x_2);
lean_dec(x_65);
x_72 = lean_expr_abstract_range(x_67, x_9, x_2);
lean_dec(x_67);
x_73 = lean_expr_mk_let(x_62, x_71, x_72, x_4);
x_3 = x_9;
x_4 = x_73;
x_5 = x_68;
goto _start;
}
else
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_67);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_68);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_67);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_68);
return x_78;
}
}
}
}
}
}
else
{
lean_object* x_143; lean_object* x_144; 
lean_dec(x_3);
lean_dec(x_1);
x_143 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_143, 0, x_4);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_5);
return x_144;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateLevelMVars___at_Lean_MetavarContext_instantiateMVars___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_1, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
lean_ctor_set(x_2, 0, x_7);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_5);
lean_ctor_set(x_2, 0, x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_2);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_1, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_16 = x_13;
} else {
 lean_dec_ref(x_13);
 x_16 = lean_box(0);
}
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_12);
if (lean_is_scalar(x_16)) {
 x_18 = lean_alloc_ctor(0, 2, 0);
} else {
 x_18 = x_16;
}
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
lean_object* l_List_mapM___main___at_Lean_MetavarContext_instantiateMVars___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateLevelMVars___at_Lean_MetavarContext_instantiateMVars___spec__5(x_6, x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_List_mapM___main___at_Lean_MetavarContext_instantiateMVars___spec__6(x_7, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_9);
lean_ctor_set(x_11, 0, x_1);
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_11);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_1);
x_19 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateLevelMVars___at_Lean_MetavarContext_instantiateMVars___spec__5(x_17, x_2);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_List_mapM___main___at_Lean_MetavarContext_instantiateMVars___spec__6(x_18, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_25 = x_22;
} else {
 lean_dec_ref(x_22);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_23);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_6 = l_Array_empty___closed__1;
x_7 = x_2;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_array_fget(x_2, x_1);
x_10 = lean_box(0);
lean_inc(x_9);
x_11 = x_10;
x_12 = lean_array_fset(x_2, x_1, x_11);
x_13 = lean_expr_has_expr_mvar(x_9);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_expr_has_level_mvar(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_1, x_15);
lean_inc(x_9);
x_17 = x_9;
x_18 = lean_array_fset(x_12, x_1, x_17);
lean_dec(x_1);
x_1 = x_16;
x_2 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
x_21 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_20, x_9);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_inc(x_9);
x_22 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_9, x_3);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_inc(x_9);
x_27 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_26, x_9, x_24);
lean_ctor_set(x_23, 1, x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_1, x_28);
x_30 = x_24;
x_31 = lean_array_fset(x_12, x_1, x_30);
lean_dec(x_1);
x_1 = x_29;
x_2 = x_31;
x_3 = x_23;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_24);
lean_inc(x_9);
x_35 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_34, x_9, x_24);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_1, x_37);
x_39 = x_24;
x_40 = lean_array_fset(x_12, x_1, x_39);
lean_dec(x_1);
x_1 = x_38;
x_2 = x_40;
x_3 = x_36;
goto _start;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_21, 0);
lean_inc(x_42);
lean_dec(x_21);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_add(x_1, x_43);
x_45 = x_42;
x_46 = lean_array_fset(x_12, x_1, x_45);
lean_dec(x_1);
x_1 = x_44;
x_2 = x_46;
goto _start;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_3, 1);
lean_inc(x_48);
x_49 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_48, x_9);
lean_dec(x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_inc(x_9);
x_50 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_9, x_3);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
lean_dec(x_50);
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_inc(x_9);
x_55 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_54, x_9, x_52);
lean_ctor_set(x_51, 1, x_55);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_1, x_56);
x_58 = x_52;
x_59 = lean_array_fset(x_12, x_1, x_58);
lean_dec(x_1);
x_1 = x_57;
x_2 = x_59;
x_3 = x_51;
goto _start;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_61 = lean_ctor_get(x_51, 0);
x_62 = lean_ctor_get(x_51, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_51);
lean_inc(x_52);
lean_inc(x_9);
x_63 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_62, x_9, x_52);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_add(x_1, x_65);
x_67 = x_52;
x_68 = lean_array_fset(x_12, x_1, x_67);
lean_dec(x_1);
x_1 = x_66;
x_2 = x_68;
x_3 = x_64;
goto _start;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_70 = lean_ctor_get(x_49, 0);
lean_inc(x_70);
lean_dec(x_49);
x_71 = lean_unsigned_to_nat(1u);
x_72 = lean_nat_add(x_1, x_71);
x_73 = x_70;
x_74 = lean_array_fset(x_12, x_1, x_73);
lean_dec(x_1);
x_1 = x_72;
x_2 = x_74;
goto _start;
}
}
}
}
}
lean_object* l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_instantiateMVars___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; uint8_t x_74; 
x_4 = l_Lean_Expr_isMVar(x_1);
x_74 = lean_expr_has_expr_mvar(x_1);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_1);
if (x_75 == 0)
{
x_5 = x_1;
x_6 = x_3;
goto block_73;
}
else
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_3, 1);
lean_inc(x_76);
x_77 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_76, x_1);
lean_dec(x_76);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
lean_inc(x_1);
x_78 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
lean_dec(x_78);
x_81 = !lean_is_exclusive(x_79);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
x_83 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_82, x_1, x_80);
lean_ctor_set(x_79, 1, x_83);
x_5 = x_80;
x_6 = x_79;
goto block_73;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_79, 0);
x_85 = lean_ctor_get(x_79, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_79);
lean_inc(x_80);
x_86 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_85, x_1, x_80);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
x_5 = x_80;
x_6 = x_87;
goto block_73;
}
}
else
{
lean_object* x_88; 
lean_dec(x_1);
x_88 = lean_ctor_get(x_77, 0);
lean_inc(x_88);
lean_dec(x_77);
x_5 = x_88;
x_6 = x_3;
goto block_73;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_3, 1);
lean_inc(x_89);
x_90 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_89, x_1);
lean_dec(x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
lean_inc(x_1);
x_91 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 0);
lean_inc(x_93);
lean_dec(x_91);
x_94 = !lean_is_exclusive(x_92);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
x_96 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_95, x_1, x_93);
lean_ctor_set(x_92, 1, x_96);
x_5 = x_93;
x_6 = x_92;
goto block_73;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_97 = lean_ctor_get(x_92, 0);
x_98 = lean_ctor_get(x_92, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_92);
lean_inc(x_93);
x_99 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_98, x_1, x_93);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
x_5 = x_93;
x_6 = x_100;
goto block_73;
}
}
else
{
lean_object* x_101; 
lean_dec(x_1);
x_101 = lean_ctor_get(x_90, 0);
lean_inc(x_101);
lean_dec(x_90);
x_5 = x_101;
x_6 = x_3;
goto block_73;
}
}
block_73:
{
lean_object* x_7; 
if (x_4 == 0)
{
lean_object* x_18; 
x_18 = lean_box(0);
x_7 = x_18;
goto block_17;
}
else
{
uint8_t x_19; 
x_19 = l_Lean_Expr_isLambda(x_5);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_box(0);
x_7 = x_20;
goto block_17;
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_Expr_betaRev(x_5, x_2);
lean_dec(x_5);
x_22 = lean_expr_has_expr_mvar(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = lean_expr_has_level_mvar(x_21);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_6);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
x_26 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_25, x_21);
lean_dec(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; uint8_t x_28; 
lean_inc(x_21);
x_27 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_21, x_6);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_27, 1);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
x_33 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_32, x_21, x_31);
lean_ctor_set(x_29, 1, x_33);
return x_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_27, 0);
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
lean_inc(x_34);
x_37 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_36, x_21, x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_27, 1, x_38);
return x_27;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_27, 1);
x_40 = lean_ctor_get(x_27, 0);
lean_inc(x_39);
lean_inc(x_40);
lean_dec(x_27);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_43 = x_39;
} else {
 lean_dec_ref(x_39);
 x_43 = lean_box(0);
}
lean_inc(x_40);
x_44 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_42, x_21, x_40);
if (lean_is_scalar(x_43)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_43;
}
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_40);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_21);
x_47 = lean_ctor_get(x_26, 0);
lean_inc(x_47);
lean_dec(x_26);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_6);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_6, 1);
lean_inc(x_49);
x_50 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_49, x_21);
lean_dec(x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; uint8_t x_52; 
lean_inc(x_21);
x_51 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_21, x_6);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_51, 1);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
x_57 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_56, x_21, x_55);
lean_ctor_set(x_53, 1, x_57);
return x_51;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_51, 0);
x_59 = lean_ctor_get(x_53, 0);
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_53);
lean_inc(x_58);
x_61 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_60, x_21, x_58);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
lean_ctor_set(x_51, 1, x_62);
return x_51;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_63 = lean_ctor_get(x_51, 1);
x_64 = lean_ctor_get(x_51, 0);
lean_inc(x_63);
lean_inc(x_64);
lean_dec(x_51);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_67 = x_63;
} else {
 lean_dec_ref(x_63);
 x_67 = lean_box(0);
}
lean_inc(x_64);
x_68 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_66, x_21, x_64);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_65);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_64);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_21);
x_71 = lean_ctor_get(x_50, 0);
lean_inc(x_71);
lean_dec(x_50);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_6);
return x_72;
}
}
}
}
block_17:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_7);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_8, x_2, x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_mkAppRev(x_5, x_11);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = l_Lean_mkAppRev(x_5, x_13);
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
}
case 1:
{
uint8_t x_102; lean_object* x_103; lean_object* x_104; uint8_t x_172; 
x_102 = l_Lean_Expr_isMVar(x_1);
x_172 = lean_expr_has_expr_mvar(x_1);
if (x_172 == 0)
{
uint8_t x_173; 
x_173 = lean_expr_has_level_mvar(x_1);
if (x_173 == 0)
{
x_103 = x_1;
x_104 = x_3;
goto block_171;
}
else
{
lean_object* x_174; lean_object* x_175; 
x_174 = lean_ctor_get(x_3, 1);
lean_inc(x_174);
x_175 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_174, x_1);
lean_dec(x_174);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; 
lean_inc(x_1);
x_176 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_177 = lean_ctor_get(x_176, 1);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 0);
lean_inc(x_178);
lean_dec(x_176);
x_179 = !lean_is_exclusive(x_177);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_177, 1);
lean_inc(x_178);
x_181 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_180, x_1, x_178);
lean_ctor_set(x_177, 1, x_181);
x_103 = x_178;
x_104 = x_177;
goto block_171;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_182 = lean_ctor_get(x_177, 0);
x_183 = lean_ctor_get(x_177, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_177);
lean_inc(x_178);
x_184 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_183, x_1, x_178);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_182);
lean_ctor_set(x_185, 1, x_184);
x_103 = x_178;
x_104 = x_185;
goto block_171;
}
}
else
{
lean_object* x_186; 
lean_dec(x_1);
x_186 = lean_ctor_get(x_175, 0);
lean_inc(x_186);
lean_dec(x_175);
x_103 = x_186;
x_104 = x_3;
goto block_171;
}
}
}
else
{
lean_object* x_187; lean_object* x_188; 
x_187 = lean_ctor_get(x_3, 1);
lean_inc(x_187);
x_188 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_187, x_1);
lean_dec(x_187);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
lean_inc(x_1);
x_189 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 0);
lean_inc(x_191);
lean_dec(x_189);
x_192 = !lean_is_exclusive(x_190);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; 
x_193 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
x_194 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_193, x_1, x_191);
lean_ctor_set(x_190, 1, x_194);
x_103 = x_191;
x_104 = x_190;
goto block_171;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_195 = lean_ctor_get(x_190, 0);
x_196 = lean_ctor_get(x_190, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_190);
lean_inc(x_191);
x_197 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_196, x_1, x_191);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_197);
x_103 = x_191;
x_104 = x_198;
goto block_171;
}
}
else
{
lean_object* x_199; 
lean_dec(x_1);
x_199 = lean_ctor_get(x_188, 0);
lean_inc(x_199);
lean_dec(x_188);
x_103 = x_199;
x_104 = x_3;
goto block_171;
}
}
block_171:
{
lean_object* x_105; 
if (x_102 == 0)
{
lean_object* x_116; 
x_116 = lean_box(0);
x_105 = x_116;
goto block_115;
}
else
{
uint8_t x_117; 
x_117 = l_Lean_Expr_isLambda(x_103);
if (x_117 == 0)
{
lean_object* x_118; 
x_118 = lean_box(0);
x_105 = x_118;
goto block_115;
}
else
{
lean_object* x_119; uint8_t x_120; 
x_119 = l_Lean_Expr_betaRev(x_103, x_2);
lean_dec(x_103);
x_120 = lean_expr_has_expr_mvar(x_119);
if (x_120 == 0)
{
uint8_t x_121; 
x_121 = lean_expr_has_level_mvar(x_119);
if (x_121 == 0)
{
lean_object* x_122; 
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_104);
return x_122;
}
else
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_104, 1);
lean_inc(x_123);
x_124 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_123, x_119);
lean_dec(x_123);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; uint8_t x_126; 
lean_inc(x_119);
x_125 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_119, x_104);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; uint8_t x_128; 
x_127 = lean_ctor_get(x_125, 1);
x_128 = !lean_is_exclusive(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_125, 0);
x_130 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
x_131 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_130, x_119, x_129);
lean_ctor_set(x_127, 1, x_131);
return x_125;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_132 = lean_ctor_get(x_125, 0);
x_133 = lean_ctor_get(x_127, 0);
x_134 = lean_ctor_get(x_127, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_127);
lean_inc(x_132);
x_135 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_134, x_119, x_132);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_125, 1, x_136);
return x_125;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_137 = lean_ctor_get(x_125, 1);
x_138 = lean_ctor_get(x_125, 0);
lean_inc(x_137);
lean_inc(x_138);
lean_dec(x_125);
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_141 = x_137;
} else {
 lean_dec_ref(x_137);
 x_141 = lean_box(0);
}
lean_inc(x_138);
x_142 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_140, x_119, x_138);
if (lean_is_scalar(x_141)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_141;
}
lean_ctor_set(x_143, 0, x_139);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_138);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_119);
x_145 = lean_ctor_get(x_124, 0);
lean_inc(x_145);
lean_dec(x_124);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_104);
return x_146;
}
}
}
else
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_104, 1);
lean_inc(x_147);
x_148 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_147, x_119);
lean_dec(x_147);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; uint8_t x_150; 
lean_inc(x_119);
x_149 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_119, x_104);
x_150 = !lean_is_exclusive(x_149);
if (x_150 == 0)
{
lean_object* x_151; uint8_t x_152; 
x_151 = lean_ctor_get(x_149, 1);
x_152 = !lean_is_exclusive(x_151);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_149, 0);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
x_155 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_154, x_119, x_153);
lean_ctor_set(x_151, 1, x_155);
return x_149;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_156 = lean_ctor_get(x_149, 0);
x_157 = lean_ctor_get(x_151, 0);
x_158 = lean_ctor_get(x_151, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_151);
lean_inc(x_156);
x_159 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_158, x_119, x_156);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_159);
lean_ctor_set(x_149, 1, x_160);
return x_149;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_161 = lean_ctor_get(x_149, 1);
x_162 = lean_ctor_get(x_149, 0);
lean_inc(x_161);
lean_inc(x_162);
lean_dec(x_149);
x_163 = lean_ctor_get(x_161, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_161, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 lean_ctor_release(x_161, 1);
 x_165 = x_161;
} else {
 lean_dec_ref(x_161);
 x_165 = lean_box(0);
}
lean_inc(x_162);
x_166 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_164, x_119, x_162);
if (lean_is_scalar(x_165)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_165;
}
lean_ctor_set(x_167, 0, x_163);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_162);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
else
{
lean_object* x_169; lean_object* x_170; 
lean_dec(x_119);
x_169 = lean_ctor_get(x_148, 0);
lean_inc(x_169);
lean_dec(x_148);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_104);
return x_170;
}
}
}
}
block_115:
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; 
lean_dec(x_105);
x_106 = lean_unsigned_to_nat(0u);
x_107 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_106, x_2, x_104);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_107, 0);
x_110 = l_Lean_mkAppRev(x_103, x_109);
lean_dec(x_109);
lean_ctor_set(x_107, 0, x_110);
return x_107;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_107, 0);
x_112 = lean_ctor_get(x_107, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_107);
x_113 = l_Lean_mkAppRev(x_103, x_111);
lean_dec(x_111);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
}
}
case 2:
{
uint8_t x_200; lean_object* x_201; lean_object* x_202; uint8_t x_270; 
x_200 = l_Lean_Expr_isMVar(x_1);
x_270 = lean_expr_has_expr_mvar(x_1);
if (x_270 == 0)
{
uint8_t x_271; 
x_271 = lean_expr_has_level_mvar(x_1);
if (x_271 == 0)
{
x_201 = x_1;
x_202 = x_3;
goto block_269;
}
else
{
lean_object* x_272; lean_object* x_273; 
x_272 = lean_ctor_get(x_3, 1);
lean_inc(x_272);
x_273 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_272, x_1);
lean_dec(x_272);
if (lean_obj_tag(x_273) == 0)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; uint8_t x_277; 
lean_inc(x_1);
x_274 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_275 = lean_ctor_get(x_274, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_274, 0);
lean_inc(x_276);
lean_dec(x_274);
x_277 = !lean_is_exclusive(x_275);
if (x_277 == 0)
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_275, 1);
lean_inc(x_276);
x_279 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_278, x_1, x_276);
lean_ctor_set(x_275, 1, x_279);
x_201 = x_276;
x_202 = x_275;
goto block_269;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_280 = lean_ctor_get(x_275, 0);
x_281 = lean_ctor_get(x_275, 1);
lean_inc(x_281);
lean_inc(x_280);
lean_dec(x_275);
lean_inc(x_276);
x_282 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_281, x_1, x_276);
x_283 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_283, 0, x_280);
lean_ctor_set(x_283, 1, x_282);
x_201 = x_276;
x_202 = x_283;
goto block_269;
}
}
else
{
lean_object* x_284; 
lean_dec(x_1);
x_284 = lean_ctor_get(x_273, 0);
lean_inc(x_284);
lean_dec(x_273);
x_201 = x_284;
x_202 = x_3;
goto block_269;
}
}
}
else
{
lean_object* x_285; lean_object* x_286; 
x_285 = lean_ctor_get(x_3, 1);
lean_inc(x_285);
x_286 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_285, x_1);
lean_dec(x_285);
if (lean_obj_tag(x_286) == 0)
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; uint8_t x_290; 
lean_inc(x_1);
x_287 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_288 = lean_ctor_get(x_287, 1);
lean_inc(x_288);
x_289 = lean_ctor_get(x_287, 0);
lean_inc(x_289);
lean_dec(x_287);
x_290 = !lean_is_exclusive(x_288);
if (x_290 == 0)
{
lean_object* x_291; lean_object* x_292; 
x_291 = lean_ctor_get(x_288, 1);
lean_inc(x_289);
x_292 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_291, x_1, x_289);
lean_ctor_set(x_288, 1, x_292);
x_201 = x_289;
x_202 = x_288;
goto block_269;
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_293 = lean_ctor_get(x_288, 0);
x_294 = lean_ctor_get(x_288, 1);
lean_inc(x_294);
lean_inc(x_293);
lean_dec(x_288);
lean_inc(x_289);
x_295 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_294, x_1, x_289);
x_296 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_296, 0, x_293);
lean_ctor_set(x_296, 1, x_295);
x_201 = x_289;
x_202 = x_296;
goto block_269;
}
}
else
{
lean_object* x_297; 
lean_dec(x_1);
x_297 = lean_ctor_get(x_286, 0);
lean_inc(x_297);
lean_dec(x_286);
x_201 = x_297;
x_202 = x_3;
goto block_269;
}
}
block_269:
{
lean_object* x_203; 
if (x_200 == 0)
{
lean_object* x_214; 
x_214 = lean_box(0);
x_203 = x_214;
goto block_213;
}
else
{
uint8_t x_215; 
x_215 = l_Lean_Expr_isLambda(x_201);
if (x_215 == 0)
{
lean_object* x_216; 
x_216 = lean_box(0);
x_203 = x_216;
goto block_213;
}
else
{
lean_object* x_217; uint8_t x_218; 
x_217 = l_Lean_Expr_betaRev(x_201, x_2);
lean_dec(x_201);
x_218 = lean_expr_has_expr_mvar(x_217);
if (x_218 == 0)
{
uint8_t x_219; 
x_219 = lean_expr_has_level_mvar(x_217);
if (x_219 == 0)
{
lean_object* x_220; 
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_202);
return x_220;
}
else
{
lean_object* x_221; lean_object* x_222; 
x_221 = lean_ctor_get(x_202, 1);
lean_inc(x_221);
x_222 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_221, x_217);
lean_dec(x_221);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; uint8_t x_224; 
lean_inc(x_217);
x_223 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_217, x_202);
x_224 = !lean_is_exclusive(x_223);
if (x_224 == 0)
{
lean_object* x_225; uint8_t x_226; 
x_225 = lean_ctor_get(x_223, 1);
x_226 = !lean_is_exclusive(x_225);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_227 = lean_ctor_get(x_223, 0);
x_228 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
x_229 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_228, x_217, x_227);
lean_ctor_set(x_225, 1, x_229);
return x_223;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_230 = lean_ctor_get(x_223, 0);
x_231 = lean_ctor_get(x_225, 0);
x_232 = lean_ctor_get(x_225, 1);
lean_inc(x_232);
lean_inc(x_231);
lean_dec(x_225);
lean_inc(x_230);
x_233 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_232, x_217, x_230);
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_231);
lean_ctor_set(x_234, 1, x_233);
lean_ctor_set(x_223, 1, x_234);
return x_223;
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_235 = lean_ctor_get(x_223, 1);
x_236 = lean_ctor_get(x_223, 0);
lean_inc(x_235);
lean_inc(x_236);
lean_dec(x_223);
x_237 = lean_ctor_get(x_235, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_235, 1);
lean_inc(x_238);
if (lean_is_exclusive(x_235)) {
 lean_ctor_release(x_235, 0);
 lean_ctor_release(x_235, 1);
 x_239 = x_235;
} else {
 lean_dec_ref(x_235);
 x_239 = lean_box(0);
}
lean_inc(x_236);
x_240 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_238, x_217, x_236);
if (lean_is_scalar(x_239)) {
 x_241 = lean_alloc_ctor(0, 2, 0);
} else {
 x_241 = x_239;
}
lean_ctor_set(x_241, 0, x_237);
lean_ctor_set(x_241, 1, x_240);
x_242 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_242, 0, x_236);
lean_ctor_set(x_242, 1, x_241);
return x_242;
}
}
else
{
lean_object* x_243; lean_object* x_244; 
lean_dec(x_217);
x_243 = lean_ctor_get(x_222, 0);
lean_inc(x_243);
lean_dec(x_222);
x_244 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_202);
return x_244;
}
}
}
else
{
lean_object* x_245; lean_object* x_246; 
x_245 = lean_ctor_get(x_202, 1);
lean_inc(x_245);
x_246 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_245, x_217);
lean_dec(x_245);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; uint8_t x_248; 
lean_inc(x_217);
x_247 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_217, x_202);
x_248 = !lean_is_exclusive(x_247);
if (x_248 == 0)
{
lean_object* x_249; uint8_t x_250; 
x_249 = lean_ctor_get(x_247, 1);
x_250 = !lean_is_exclusive(x_249);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_247, 0);
x_252 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
x_253 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_252, x_217, x_251);
lean_ctor_set(x_249, 1, x_253);
return x_247;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_254 = lean_ctor_get(x_247, 0);
x_255 = lean_ctor_get(x_249, 0);
x_256 = lean_ctor_get(x_249, 1);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_249);
lean_inc(x_254);
x_257 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_256, x_217, x_254);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_255);
lean_ctor_set(x_258, 1, x_257);
lean_ctor_set(x_247, 1, x_258);
return x_247;
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_259 = lean_ctor_get(x_247, 1);
x_260 = lean_ctor_get(x_247, 0);
lean_inc(x_259);
lean_inc(x_260);
lean_dec(x_247);
x_261 = lean_ctor_get(x_259, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_259, 1);
lean_inc(x_262);
if (lean_is_exclusive(x_259)) {
 lean_ctor_release(x_259, 0);
 lean_ctor_release(x_259, 1);
 x_263 = x_259;
} else {
 lean_dec_ref(x_259);
 x_263 = lean_box(0);
}
lean_inc(x_260);
x_264 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_262, x_217, x_260);
if (lean_is_scalar(x_263)) {
 x_265 = lean_alloc_ctor(0, 2, 0);
} else {
 x_265 = x_263;
}
lean_ctor_set(x_265, 0, x_261);
lean_ctor_set(x_265, 1, x_264);
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_260);
lean_ctor_set(x_266, 1, x_265);
return x_266;
}
}
else
{
lean_object* x_267; lean_object* x_268; 
lean_dec(x_217);
x_267 = lean_ctor_get(x_246, 0);
lean_inc(x_267);
lean_dec(x_246);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_202);
return x_268;
}
}
}
}
block_213:
{
lean_object* x_204; lean_object* x_205; uint8_t x_206; 
lean_dec(x_203);
x_204 = lean_unsigned_to_nat(0u);
x_205 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_204, x_2, x_202);
x_206 = !lean_is_exclusive(x_205);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; 
x_207 = lean_ctor_get(x_205, 0);
x_208 = l_Lean_mkAppRev(x_201, x_207);
lean_dec(x_207);
lean_ctor_set(x_205, 0, x_208);
return x_205;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_209 = lean_ctor_get(x_205, 0);
x_210 = lean_ctor_get(x_205, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_205);
x_211 = l_Lean_mkAppRev(x_201, x_209);
lean_dec(x_209);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_210);
return x_212;
}
}
}
}
case 3:
{
uint8_t x_298; lean_object* x_299; lean_object* x_300; uint8_t x_368; 
x_298 = l_Lean_Expr_isMVar(x_1);
x_368 = lean_expr_has_expr_mvar(x_1);
if (x_368 == 0)
{
uint8_t x_369; 
x_369 = lean_expr_has_level_mvar(x_1);
if (x_369 == 0)
{
x_299 = x_1;
x_300 = x_3;
goto block_367;
}
else
{
lean_object* x_370; lean_object* x_371; 
x_370 = lean_ctor_get(x_3, 1);
lean_inc(x_370);
x_371 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_370, x_1);
lean_dec(x_370);
if (lean_obj_tag(x_371) == 0)
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; uint8_t x_375; 
lean_inc(x_1);
x_372 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_373 = lean_ctor_get(x_372, 1);
lean_inc(x_373);
x_374 = lean_ctor_get(x_372, 0);
lean_inc(x_374);
lean_dec(x_372);
x_375 = !lean_is_exclusive(x_373);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; 
x_376 = lean_ctor_get(x_373, 1);
lean_inc(x_374);
x_377 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_376, x_1, x_374);
lean_ctor_set(x_373, 1, x_377);
x_299 = x_374;
x_300 = x_373;
goto block_367;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_378 = lean_ctor_get(x_373, 0);
x_379 = lean_ctor_get(x_373, 1);
lean_inc(x_379);
lean_inc(x_378);
lean_dec(x_373);
lean_inc(x_374);
x_380 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_379, x_1, x_374);
x_381 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_381, 0, x_378);
lean_ctor_set(x_381, 1, x_380);
x_299 = x_374;
x_300 = x_381;
goto block_367;
}
}
else
{
lean_object* x_382; 
lean_dec(x_1);
x_382 = lean_ctor_get(x_371, 0);
lean_inc(x_382);
lean_dec(x_371);
x_299 = x_382;
x_300 = x_3;
goto block_367;
}
}
}
else
{
lean_object* x_383; lean_object* x_384; 
x_383 = lean_ctor_get(x_3, 1);
lean_inc(x_383);
x_384 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_383, x_1);
lean_dec(x_383);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; uint8_t x_388; 
lean_inc(x_1);
x_385 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_386 = lean_ctor_get(x_385, 1);
lean_inc(x_386);
x_387 = lean_ctor_get(x_385, 0);
lean_inc(x_387);
lean_dec(x_385);
x_388 = !lean_is_exclusive(x_386);
if (x_388 == 0)
{
lean_object* x_389; lean_object* x_390; 
x_389 = lean_ctor_get(x_386, 1);
lean_inc(x_387);
x_390 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_389, x_1, x_387);
lean_ctor_set(x_386, 1, x_390);
x_299 = x_387;
x_300 = x_386;
goto block_367;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_391 = lean_ctor_get(x_386, 0);
x_392 = lean_ctor_get(x_386, 1);
lean_inc(x_392);
lean_inc(x_391);
lean_dec(x_386);
lean_inc(x_387);
x_393 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_392, x_1, x_387);
x_394 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_394, 0, x_391);
lean_ctor_set(x_394, 1, x_393);
x_299 = x_387;
x_300 = x_394;
goto block_367;
}
}
else
{
lean_object* x_395; 
lean_dec(x_1);
x_395 = lean_ctor_get(x_384, 0);
lean_inc(x_395);
lean_dec(x_384);
x_299 = x_395;
x_300 = x_3;
goto block_367;
}
}
block_367:
{
lean_object* x_301; 
if (x_298 == 0)
{
lean_object* x_312; 
x_312 = lean_box(0);
x_301 = x_312;
goto block_311;
}
else
{
uint8_t x_313; 
x_313 = l_Lean_Expr_isLambda(x_299);
if (x_313 == 0)
{
lean_object* x_314; 
x_314 = lean_box(0);
x_301 = x_314;
goto block_311;
}
else
{
lean_object* x_315; uint8_t x_316; 
x_315 = l_Lean_Expr_betaRev(x_299, x_2);
lean_dec(x_299);
x_316 = lean_expr_has_expr_mvar(x_315);
if (x_316 == 0)
{
uint8_t x_317; 
x_317 = lean_expr_has_level_mvar(x_315);
if (x_317 == 0)
{
lean_object* x_318; 
x_318 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_318, 0, x_315);
lean_ctor_set(x_318, 1, x_300);
return x_318;
}
else
{
lean_object* x_319; lean_object* x_320; 
x_319 = lean_ctor_get(x_300, 1);
lean_inc(x_319);
x_320 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_319, x_315);
lean_dec(x_319);
if (lean_obj_tag(x_320) == 0)
{
lean_object* x_321; uint8_t x_322; 
lean_inc(x_315);
x_321 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_315, x_300);
x_322 = !lean_is_exclusive(x_321);
if (x_322 == 0)
{
lean_object* x_323; uint8_t x_324; 
x_323 = lean_ctor_get(x_321, 1);
x_324 = !lean_is_exclusive(x_323);
if (x_324 == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_325 = lean_ctor_get(x_321, 0);
x_326 = lean_ctor_get(x_323, 1);
lean_inc(x_325);
x_327 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_326, x_315, x_325);
lean_ctor_set(x_323, 1, x_327);
return x_321;
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_328 = lean_ctor_get(x_321, 0);
x_329 = lean_ctor_get(x_323, 0);
x_330 = lean_ctor_get(x_323, 1);
lean_inc(x_330);
lean_inc(x_329);
lean_dec(x_323);
lean_inc(x_328);
x_331 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_330, x_315, x_328);
x_332 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_332, 0, x_329);
lean_ctor_set(x_332, 1, x_331);
lean_ctor_set(x_321, 1, x_332);
return x_321;
}
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_333 = lean_ctor_get(x_321, 1);
x_334 = lean_ctor_get(x_321, 0);
lean_inc(x_333);
lean_inc(x_334);
lean_dec(x_321);
x_335 = lean_ctor_get(x_333, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_333, 1);
lean_inc(x_336);
if (lean_is_exclusive(x_333)) {
 lean_ctor_release(x_333, 0);
 lean_ctor_release(x_333, 1);
 x_337 = x_333;
} else {
 lean_dec_ref(x_333);
 x_337 = lean_box(0);
}
lean_inc(x_334);
x_338 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_336, x_315, x_334);
if (lean_is_scalar(x_337)) {
 x_339 = lean_alloc_ctor(0, 2, 0);
} else {
 x_339 = x_337;
}
lean_ctor_set(x_339, 0, x_335);
lean_ctor_set(x_339, 1, x_338);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_334);
lean_ctor_set(x_340, 1, x_339);
return x_340;
}
}
else
{
lean_object* x_341; lean_object* x_342; 
lean_dec(x_315);
x_341 = lean_ctor_get(x_320, 0);
lean_inc(x_341);
lean_dec(x_320);
x_342 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_300);
return x_342;
}
}
}
else
{
lean_object* x_343; lean_object* x_344; 
x_343 = lean_ctor_get(x_300, 1);
lean_inc(x_343);
x_344 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_343, x_315);
lean_dec(x_343);
if (lean_obj_tag(x_344) == 0)
{
lean_object* x_345; uint8_t x_346; 
lean_inc(x_315);
x_345 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_315, x_300);
x_346 = !lean_is_exclusive(x_345);
if (x_346 == 0)
{
lean_object* x_347; uint8_t x_348; 
x_347 = lean_ctor_get(x_345, 1);
x_348 = !lean_is_exclusive(x_347);
if (x_348 == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; 
x_349 = lean_ctor_get(x_345, 0);
x_350 = lean_ctor_get(x_347, 1);
lean_inc(x_349);
x_351 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_350, x_315, x_349);
lean_ctor_set(x_347, 1, x_351);
return x_345;
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_352 = lean_ctor_get(x_345, 0);
x_353 = lean_ctor_get(x_347, 0);
x_354 = lean_ctor_get(x_347, 1);
lean_inc(x_354);
lean_inc(x_353);
lean_dec(x_347);
lean_inc(x_352);
x_355 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_354, x_315, x_352);
x_356 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_356, 0, x_353);
lean_ctor_set(x_356, 1, x_355);
lean_ctor_set(x_345, 1, x_356);
return x_345;
}
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; 
x_357 = lean_ctor_get(x_345, 1);
x_358 = lean_ctor_get(x_345, 0);
lean_inc(x_357);
lean_inc(x_358);
lean_dec(x_345);
x_359 = lean_ctor_get(x_357, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_357, 1);
lean_inc(x_360);
if (lean_is_exclusive(x_357)) {
 lean_ctor_release(x_357, 0);
 lean_ctor_release(x_357, 1);
 x_361 = x_357;
} else {
 lean_dec_ref(x_357);
 x_361 = lean_box(0);
}
lean_inc(x_358);
x_362 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_360, x_315, x_358);
if (lean_is_scalar(x_361)) {
 x_363 = lean_alloc_ctor(0, 2, 0);
} else {
 x_363 = x_361;
}
lean_ctor_set(x_363, 0, x_359);
lean_ctor_set(x_363, 1, x_362);
x_364 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_364, 0, x_358);
lean_ctor_set(x_364, 1, x_363);
return x_364;
}
}
else
{
lean_object* x_365; lean_object* x_366; 
lean_dec(x_315);
x_365 = lean_ctor_get(x_344, 0);
lean_inc(x_365);
lean_dec(x_344);
x_366 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_300);
return x_366;
}
}
}
}
block_311:
{
lean_object* x_302; lean_object* x_303; uint8_t x_304; 
lean_dec(x_301);
x_302 = lean_unsigned_to_nat(0u);
x_303 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_302, x_2, x_300);
x_304 = !lean_is_exclusive(x_303);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; 
x_305 = lean_ctor_get(x_303, 0);
x_306 = l_Lean_mkAppRev(x_299, x_305);
lean_dec(x_305);
lean_ctor_set(x_303, 0, x_306);
return x_303;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_307 = lean_ctor_get(x_303, 0);
x_308 = lean_ctor_get(x_303, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_303);
x_309 = l_Lean_mkAppRev(x_299, x_307);
lean_dec(x_307);
x_310 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_310, 0, x_309);
lean_ctor_set(x_310, 1, x_308);
return x_310;
}
}
}
}
case 4:
{
uint8_t x_396; lean_object* x_397; lean_object* x_398; uint8_t x_466; 
x_396 = l_Lean_Expr_isMVar(x_1);
x_466 = lean_expr_has_expr_mvar(x_1);
if (x_466 == 0)
{
uint8_t x_467; 
x_467 = lean_expr_has_level_mvar(x_1);
if (x_467 == 0)
{
x_397 = x_1;
x_398 = x_3;
goto block_465;
}
else
{
lean_object* x_468; lean_object* x_469; 
x_468 = lean_ctor_get(x_3, 1);
lean_inc(x_468);
x_469 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_468, x_1);
lean_dec(x_468);
if (lean_obj_tag(x_469) == 0)
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; uint8_t x_473; 
lean_inc(x_1);
x_470 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_471 = lean_ctor_get(x_470, 1);
lean_inc(x_471);
x_472 = lean_ctor_get(x_470, 0);
lean_inc(x_472);
lean_dec(x_470);
x_473 = !lean_is_exclusive(x_471);
if (x_473 == 0)
{
lean_object* x_474; lean_object* x_475; 
x_474 = lean_ctor_get(x_471, 1);
lean_inc(x_472);
x_475 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_474, x_1, x_472);
lean_ctor_set(x_471, 1, x_475);
x_397 = x_472;
x_398 = x_471;
goto block_465;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; 
x_476 = lean_ctor_get(x_471, 0);
x_477 = lean_ctor_get(x_471, 1);
lean_inc(x_477);
lean_inc(x_476);
lean_dec(x_471);
lean_inc(x_472);
x_478 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_477, x_1, x_472);
x_479 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_479, 0, x_476);
lean_ctor_set(x_479, 1, x_478);
x_397 = x_472;
x_398 = x_479;
goto block_465;
}
}
else
{
lean_object* x_480; 
lean_dec(x_1);
x_480 = lean_ctor_get(x_469, 0);
lean_inc(x_480);
lean_dec(x_469);
x_397 = x_480;
x_398 = x_3;
goto block_465;
}
}
}
else
{
lean_object* x_481; lean_object* x_482; 
x_481 = lean_ctor_get(x_3, 1);
lean_inc(x_481);
x_482 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_481, x_1);
lean_dec(x_481);
if (lean_obj_tag(x_482) == 0)
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; uint8_t x_486; 
lean_inc(x_1);
x_483 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_484 = lean_ctor_get(x_483, 1);
lean_inc(x_484);
x_485 = lean_ctor_get(x_483, 0);
lean_inc(x_485);
lean_dec(x_483);
x_486 = !lean_is_exclusive(x_484);
if (x_486 == 0)
{
lean_object* x_487; lean_object* x_488; 
x_487 = lean_ctor_get(x_484, 1);
lean_inc(x_485);
x_488 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_487, x_1, x_485);
lean_ctor_set(x_484, 1, x_488);
x_397 = x_485;
x_398 = x_484;
goto block_465;
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; 
x_489 = lean_ctor_get(x_484, 0);
x_490 = lean_ctor_get(x_484, 1);
lean_inc(x_490);
lean_inc(x_489);
lean_dec(x_484);
lean_inc(x_485);
x_491 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_490, x_1, x_485);
x_492 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_492, 0, x_489);
lean_ctor_set(x_492, 1, x_491);
x_397 = x_485;
x_398 = x_492;
goto block_465;
}
}
else
{
lean_object* x_493; 
lean_dec(x_1);
x_493 = lean_ctor_get(x_482, 0);
lean_inc(x_493);
lean_dec(x_482);
x_397 = x_493;
x_398 = x_3;
goto block_465;
}
}
block_465:
{
lean_object* x_399; 
if (x_396 == 0)
{
lean_object* x_410; 
x_410 = lean_box(0);
x_399 = x_410;
goto block_409;
}
else
{
uint8_t x_411; 
x_411 = l_Lean_Expr_isLambda(x_397);
if (x_411 == 0)
{
lean_object* x_412; 
x_412 = lean_box(0);
x_399 = x_412;
goto block_409;
}
else
{
lean_object* x_413; uint8_t x_414; 
x_413 = l_Lean_Expr_betaRev(x_397, x_2);
lean_dec(x_397);
x_414 = lean_expr_has_expr_mvar(x_413);
if (x_414 == 0)
{
uint8_t x_415; 
x_415 = lean_expr_has_level_mvar(x_413);
if (x_415 == 0)
{
lean_object* x_416; 
x_416 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_416, 0, x_413);
lean_ctor_set(x_416, 1, x_398);
return x_416;
}
else
{
lean_object* x_417; lean_object* x_418; 
x_417 = lean_ctor_get(x_398, 1);
lean_inc(x_417);
x_418 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_417, x_413);
lean_dec(x_417);
if (lean_obj_tag(x_418) == 0)
{
lean_object* x_419; uint8_t x_420; 
lean_inc(x_413);
x_419 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_413, x_398);
x_420 = !lean_is_exclusive(x_419);
if (x_420 == 0)
{
lean_object* x_421; uint8_t x_422; 
x_421 = lean_ctor_get(x_419, 1);
x_422 = !lean_is_exclusive(x_421);
if (x_422 == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_423 = lean_ctor_get(x_419, 0);
x_424 = lean_ctor_get(x_421, 1);
lean_inc(x_423);
x_425 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_424, x_413, x_423);
lean_ctor_set(x_421, 1, x_425);
return x_419;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; 
x_426 = lean_ctor_get(x_419, 0);
x_427 = lean_ctor_get(x_421, 0);
x_428 = lean_ctor_get(x_421, 1);
lean_inc(x_428);
lean_inc(x_427);
lean_dec(x_421);
lean_inc(x_426);
x_429 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_428, x_413, x_426);
x_430 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_430, 0, x_427);
lean_ctor_set(x_430, 1, x_429);
lean_ctor_set(x_419, 1, x_430);
return x_419;
}
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
x_431 = lean_ctor_get(x_419, 1);
x_432 = lean_ctor_get(x_419, 0);
lean_inc(x_431);
lean_inc(x_432);
lean_dec(x_419);
x_433 = lean_ctor_get(x_431, 0);
lean_inc(x_433);
x_434 = lean_ctor_get(x_431, 1);
lean_inc(x_434);
if (lean_is_exclusive(x_431)) {
 lean_ctor_release(x_431, 0);
 lean_ctor_release(x_431, 1);
 x_435 = x_431;
} else {
 lean_dec_ref(x_431);
 x_435 = lean_box(0);
}
lean_inc(x_432);
x_436 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_434, x_413, x_432);
if (lean_is_scalar(x_435)) {
 x_437 = lean_alloc_ctor(0, 2, 0);
} else {
 x_437 = x_435;
}
lean_ctor_set(x_437, 0, x_433);
lean_ctor_set(x_437, 1, x_436);
x_438 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_438, 0, x_432);
lean_ctor_set(x_438, 1, x_437);
return x_438;
}
}
else
{
lean_object* x_439; lean_object* x_440; 
lean_dec(x_413);
x_439 = lean_ctor_get(x_418, 0);
lean_inc(x_439);
lean_dec(x_418);
x_440 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_440, 0, x_439);
lean_ctor_set(x_440, 1, x_398);
return x_440;
}
}
}
else
{
lean_object* x_441; lean_object* x_442; 
x_441 = lean_ctor_get(x_398, 1);
lean_inc(x_441);
x_442 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_441, x_413);
lean_dec(x_441);
if (lean_obj_tag(x_442) == 0)
{
lean_object* x_443; uint8_t x_444; 
lean_inc(x_413);
x_443 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_413, x_398);
x_444 = !lean_is_exclusive(x_443);
if (x_444 == 0)
{
lean_object* x_445; uint8_t x_446; 
x_445 = lean_ctor_get(x_443, 1);
x_446 = !lean_is_exclusive(x_445);
if (x_446 == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_447 = lean_ctor_get(x_443, 0);
x_448 = lean_ctor_get(x_445, 1);
lean_inc(x_447);
x_449 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_448, x_413, x_447);
lean_ctor_set(x_445, 1, x_449);
return x_443;
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_450 = lean_ctor_get(x_443, 0);
x_451 = lean_ctor_get(x_445, 0);
x_452 = lean_ctor_get(x_445, 1);
lean_inc(x_452);
lean_inc(x_451);
lean_dec(x_445);
lean_inc(x_450);
x_453 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_452, x_413, x_450);
x_454 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_454, 0, x_451);
lean_ctor_set(x_454, 1, x_453);
lean_ctor_set(x_443, 1, x_454);
return x_443;
}
}
else
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; 
x_455 = lean_ctor_get(x_443, 1);
x_456 = lean_ctor_get(x_443, 0);
lean_inc(x_455);
lean_inc(x_456);
lean_dec(x_443);
x_457 = lean_ctor_get(x_455, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_455, 1);
lean_inc(x_458);
if (lean_is_exclusive(x_455)) {
 lean_ctor_release(x_455, 0);
 lean_ctor_release(x_455, 1);
 x_459 = x_455;
} else {
 lean_dec_ref(x_455);
 x_459 = lean_box(0);
}
lean_inc(x_456);
x_460 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_458, x_413, x_456);
if (lean_is_scalar(x_459)) {
 x_461 = lean_alloc_ctor(0, 2, 0);
} else {
 x_461 = x_459;
}
lean_ctor_set(x_461, 0, x_457);
lean_ctor_set(x_461, 1, x_460);
x_462 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_462, 0, x_456);
lean_ctor_set(x_462, 1, x_461);
return x_462;
}
}
else
{
lean_object* x_463; lean_object* x_464; 
lean_dec(x_413);
x_463 = lean_ctor_get(x_442, 0);
lean_inc(x_463);
lean_dec(x_442);
x_464 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_464, 0, x_463);
lean_ctor_set(x_464, 1, x_398);
return x_464;
}
}
}
}
block_409:
{
lean_object* x_400; lean_object* x_401; uint8_t x_402; 
lean_dec(x_399);
x_400 = lean_unsigned_to_nat(0u);
x_401 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_400, x_2, x_398);
x_402 = !lean_is_exclusive(x_401);
if (x_402 == 0)
{
lean_object* x_403; lean_object* x_404; 
x_403 = lean_ctor_get(x_401, 0);
x_404 = l_Lean_mkAppRev(x_397, x_403);
lean_dec(x_403);
lean_ctor_set(x_401, 0, x_404);
return x_401;
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_405 = lean_ctor_get(x_401, 0);
x_406 = lean_ctor_get(x_401, 1);
lean_inc(x_406);
lean_inc(x_405);
lean_dec(x_401);
x_407 = l_Lean_mkAppRev(x_397, x_405);
lean_dec(x_405);
x_408 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_408, 0, x_407);
lean_ctor_set(x_408, 1, x_406);
return x_408;
}
}
}
}
case 5:
{
lean_object* x_494; lean_object* x_495; lean_object* x_496; 
x_494 = lean_ctor_get(x_1, 0);
lean_inc(x_494);
x_495 = lean_ctor_get(x_1, 1);
lean_inc(x_495);
lean_dec(x_1);
x_496 = lean_array_push(x_2, x_495);
x_1 = x_494;
x_2 = x_496;
goto _start;
}
case 6:
{
uint8_t x_498; lean_object* x_499; lean_object* x_500; uint8_t x_568; 
x_498 = l_Lean_Expr_isMVar(x_1);
x_568 = lean_expr_has_expr_mvar(x_1);
if (x_568 == 0)
{
uint8_t x_569; 
x_569 = lean_expr_has_level_mvar(x_1);
if (x_569 == 0)
{
x_499 = x_1;
x_500 = x_3;
goto block_567;
}
else
{
lean_object* x_570; lean_object* x_571; 
x_570 = lean_ctor_get(x_3, 1);
lean_inc(x_570);
x_571 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_570, x_1);
lean_dec(x_570);
if (lean_obj_tag(x_571) == 0)
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; uint8_t x_575; 
lean_inc(x_1);
x_572 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_573 = lean_ctor_get(x_572, 1);
lean_inc(x_573);
x_574 = lean_ctor_get(x_572, 0);
lean_inc(x_574);
lean_dec(x_572);
x_575 = !lean_is_exclusive(x_573);
if (x_575 == 0)
{
lean_object* x_576; lean_object* x_577; 
x_576 = lean_ctor_get(x_573, 1);
lean_inc(x_574);
x_577 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_576, x_1, x_574);
lean_ctor_set(x_573, 1, x_577);
x_499 = x_574;
x_500 = x_573;
goto block_567;
}
else
{
lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; 
x_578 = lean_ctor_get(x_573, 0);
x_579 = lean_ctor_get(x_573, 1);
lean_inc(x_579);
lean_inc(x_578);
lean_dec(x_573);
lean_inc(x_574);
x_580 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_579, x_1, x_574);
x_581 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_581, 0, x_578);
lean_ctor_set(x_581, 1, x_580);
x_499 = x_574;
x_500 = x_581;
goto block_567;
}
}
else
{
lean_object* x_582; 
lean_dec(x_1);
x_582 = lean_ctor_get(x_571, 0);
lean_inc(x_582);
lean_dec(x_571);
x_499 = x_582;
x_500 = x_3;
goto block_567;
}
}
}
else
{
lean_object* x_583; lean_object* x_584; 
x_583 = lean_ctor_get(x_3, 1);
lean_inc(x_583);
x_584 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_583, x_1);
lean_dec(x_583);
if (lean_obj_tag(x_584) == 0)
{
lean_object* x_585; lean_object* x_586; lean_object* x_587; uint8_t x_588; 
lean_inc(x_1);
x_585 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_586 = lean_ctor_get(x_585, 1);
lean_inc(x_586);
x_587 = lean_ctor_get(x_585, 0);
lean_inc(x_587);
lean_dec(x_585);
x_588 = !lean_is_exclusive(x_586);
if (x_588 == 0)
{
lean_object* x_589; lean_object* x_590; 
x_589 = lean_ctor_get(x_586, 1);
lean_inc(x_587);
x_590 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_589, x_1, x_587);
lean_ctor_set(x_586, 1, x_590);
x_499 = x_587;
x_500 = x_586;
goto block_567;
}
else
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; 
x_591 = lean_ctor_get(x_586, 0);
x_592 = lean_ctor_get(x_586, 1);
lean_inc(x_592);
lean_inc(x_591);
lean_dec(x_586);
lean_inc(x_587);
x_593 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_592, x_1, x_587);
x_594 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_594, 0, x_591);
lean_ctor_set(x_594, 1, x_593);
x_499 = x_587;
x_500 = x_594;
goto block_567;
}
}
else
{
lean_object* x_595; 
lean_dec(x_1);
x_595 = lean_ctor_get(x_584, 0);
lean_inc(x_595);
lean_dec(x_584);
x_499 = x_595;
x_500 = x_3;
goto block_567;
}
}
block_567:
{
lean_object* x_501; 
if (x_498 == 0)
{
lean_object* x_512; 
x_512 = lean_box(0);
x_501 = x_512;
goto block_511;
}
else
{
uint8_t x_513; 
x_513 = l_Lean_Expr_isLambda(x_499);
if (x_513 == 0)
{
lean_object* x_514; 
x_514 = lean_box(0);
x_501 = x_514;
goto block_511;
}
else
{
lean_object* x_515; uint8_t x_516; 
x_515 = l_Lean_Expr_betaRev(x_499, x_2);
lean_dec(x_499);
x_516 = lean_expr_has_expr_mvar(x_515);
if (x_516 == 0)
{
uint8_t x_517; 
x_517 = lean_expr_has_level_mvar(x_515);
if (x_517 == 0)
{
lean_object* x_518; 
x_518 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_518, 0, x_515);
lean_ctor_set(x_518, 1, x_500);
return x_518;
}
else
{
lean_object* x_519; lean_object* x_520; 
x_519 = lean_ctor_get(x_500, 1);
lean_inc(x_519);
x_520 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_519, x_515);
lean_dec(x_519);
if (lean_obj_tag(x_520) == 0)
{
lean_object* x_521; uint8_t x_522; 
lean_inc(x_515);
x_521 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_515, x_500);
x_522 = !lean_is_exclusive(x_521);
if (x_522 == 0)
{
lean_object* x_523; uint8_t x_524; 
x_523 = lean_ctor_get(x_521, 1);
x_524 = !lean_is_exclusive(x_523);
if (x_524 == 0)
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_525 = lean_ctor_get(x_521, 0);
x_526 = lean_ctor_get(x_523, 1);
lean_inc(x_525);
x_527 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_526, x_515, x_525);
lean_ctor_set(x_523, 1, x_527);
return x_521;
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; 
x_528 = lean_ctor_get(x_521, 0);
x_529 = lean_ctor_get(x_523, 0);
x_530 = lean_ctor_get(x_523, 1);
lean_inc(x_530);
lean_inc(x_529);
lean_dec(x_523);
lean_inc(x_528);
x_531 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_530, x_515, x_528);
x_532 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_532, 0, x_529);
lean_ctor_set(x_532, 1, x_531);
lean_ctor_set(x_521, 1, x_532);
return x_521;
}
}
else
{
lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; 
x_533 = lean_ctor_get(x_521, 1);
x_534 = lean_ctor_get(x_521, 0);
lean_inc(x_533);
lean_inc(x_534);
lean_dec(x_521);
x_535 = lean_ctor_get(x_533, 0);
lean_inc(x_535);
x_536 = lean_ctor_get(x_533, 1);
lean_inc(x_536);
if (lean_is_exclusive(x_533)) {
 lean_ctor_release(x_533, 0);
 lean_ctor_release(x_533, 1);
 x_537 = x_533;
} else {
 lean_dec_ref(x_533);
 x_537 = lean_box(0);
}
lean_inc(x_534);
x_538 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_536, x_515, x_534);
if (lean_is_scalar(x_537)) {
 x_539 = lean_alloc_ctor(0, 2, 0);
} else {
 x_539 = x_537;
}
lean_ctor_set(x_539, 0, x_535);
lean_ctor_set(x_539, 1, x_538);
x_540 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_540, 0, x_534);
lean_ctor_set(x_540, 1, x_539);
return x_540;
}
}
else
{
lean_object* x_541; lean_object* x_542; 
lean_dec(x_515);
x_541 = lean_ctor_get(x_520, 0);
lean_inc(x_541);
lean_dec(x_520);
x_542 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_542, 0, x_541);
lean_ctor_set(x_542, 1, x_500);
return x_542;
}
}
}
else
{
lean_object* x_543; lean_object* x_544; 
x_543 = lean_ctor_get(x_500, 1);
lean_inc(x_543);
x_544 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_543, x_515);
lean_dec(x_543);
if (lean_obj_tag(x_544) == 0)
{
lean_object* x_545; uint8_t x_546; 
lean_inc(x_515);
x_545 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_515, x_500);
x_546 = !lean_is_exclusive(x_545);
if (x_546 == 0)
{
lean_object* x_547; uint8_t x_548; 
x_547 = lean_ctor_get(x_545, 1);
x_548 = !lean_is_exclusive(x_547);
if (x_548 == 0)
{
lean_object* x_549; lean_object* x_550; lean_object* x_551; 
x_549 = lean_ctor_get(x_545, 0);
x_550 = lean_ctor_get(x_547, 1);
lean_inc(x_549);
x_551 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_550, x_515, x_549);
lean_ctor_set(x_547, 1, x_551);
return x_545;
}
else
{
lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; 
x_552 = lean_ctor_get(x_545, 0);
x_553 = lean_ctor_get(x_547, 0);
x_554 = lean_ctor_get(x_547, 1);
lean_inc(x_554);
lean_inc(x_553);
lean_dec(x_547);
lean_inc(x_552);
x_555 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_554, x_515, x_552);
x_556 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_556, 0, x_553);
lean_ctor_set(x_556, 1, x_555);
lean_ctor_set(x_545, 1, x_556);
return x_545;
}
}
else
{
lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; 
x_557 = lean_ctor_get(x_545, 1);
x_558 = lean_ctor_get(x_545, 0);
lean_inc(x_557);
lean_inc(x_558);
lean_dec(x_545);
x_559 = lean_ctor_get(x_557, 0);
lean_inc(x_559);
x_560 = lean_ctor_get(x_557, 1);
lean_inc(x_560);
if (lean_is_exclusive(x_557)) {
 lean_ctor_release(x_557, 0);
 lean_ctor_release(x_557, 1);
 x_561 = x_557;
} else {
 lean_dec_ref(x_557);
 x_561 = lean_box(0);
}
lean_inc(x_558);
x_562 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_560, x_515, x_558);
if (lean_is_scalar(x_561)) {
 x_563 = lean_alloc_ctor(0, 2, 0);
} else {
 x_563 = x_561;
}
lean_ctor_set(x_563, 0, x_559);
lean_ctor_set(x_563, 1, x_562);
x_564 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_564, 0, x_558);
lean_ctor_set(x_564, 1, x_563);
return x_564;
}
}
else
{
lean_object* x_565; lean_object* x_566; 
lean_dec(x_515);
x_565 = lean_ctor_get(x_544, 0);
lean_inc(x_565);
lean_dec(x_544);
x_566 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_566, 0, x_565);
lean_ctor_set(x_566, 1, x_500);
return x_566;
}
}
}
}
block_511:
{
lean_object* x_502; lean_object* x_503; uint8_t x_504; 
lean_dec(x_501);
x_502 = lean_unsigned_to_nat(0u);
x_503 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_502, x_2, x_500);
x_504 = !lean_is_exclusive(x_503);
if (x_504 == 0)
{
lean_object* x_505; lean_object* x_506; 
x_505 = lean_ctor_get(x_503, 0);
x_506 = l_Lean_mkAppRev(x_499, x_505);
lean_dec(x_505);
lean_ctor_set(x_503, 0, x_506);
return x_503;
}
else
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
x_507 = lean_ctor_get(x_503, 0);
x_508 = lean_ctor_get(x_503, 1);
lean_inc(x_508);
lean_inc(x_507);
lean_dec(x_503);
x_509 = l_Lean_mkAppRev(x_499, x_507);
lean_dec(x_507);
x_510 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_510, 0, x_509);
lean_ctor_set(x_510, 1, x_508);
return x_510;
}
}
}
}
case 7:
{
uint8_t x_596; lean_object* x_597; lean_object* x_598; uint8_t x_666; 
x_596 = l_Lean_Expr_isMVar(x_1);
x_666 = lean_expr_has_expr_mvar(x_1);
if (x_666 == 0)
{
uint8_t x_667; 
x_667 = lean_expr_has_level_mvar(x_1);
if (x_667 == 0)
{
x_597 = x_1;
x_598 = x_3;
goto block_665;
}
else
{
lean_object* x_668; lean_object* x_669; 
x_668 = lean_ctor_get(x_3, 1);
lean_inc(x_668);
x_669 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_668, x_1);
lean_dec(x_668);
if (lean_obj_tag(x_669) == 0)
{
lean_object* x_670; lean_object* x_671; lean_object* x_672; uint8_t x_673; 
lean_inc(x_1);
x_670 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_671 = lean_ctor_get(x_670, 1);
lean_inc(x_671);
x_672 = lean_ctor_get(x_670, 0);
lean_inc(x_672);
lean_dec(x_670);
x_673 = !lean_is_exclusive(x_671);
if (x_673 == 0)
{
lean_object* x_674; lean_object* x_675; 
x_674 = lean_ctor_get(x_671, 1);
lean_inc(x_672);
x_675 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_674, x_1, x_672);
lean_ctor_set(x_671, 1, x_675);
x_597 = x_672;
x_598 = x_671;
goto block_665;
}
else
{
lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; 
x_676 = lean_ctor_get(x_671, 0);
x_677 = lean_ctor_get(x_671, 1);
lean_inc(x_677);
lean_inc(x_676);
lean_dec(x_671);
lean_inc(x_672);
x_678 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_677, x_1, x_672);
x_679 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_679, 0, x_676);
lean_ctor_set(x_679, 1, x_678);
x_597 = x_672;
x_598 = x_679;
goto block_665;
}
}
else
{
lean_object* x_680; 
lean_dec(x_1);
x_680 = lean_ctor_get(x_669, 0);
lean_inc(x_680);
lean_dec(x_669);
x_597 = x_680;
x_598 = x_3;
goto block_665;
}
}
}
else
{
lean_object* x_681; lean_object* x_682; 
x_681 = lean_ctor_get(x_3, 1);
lean_inc(x_681);
x_682 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_681, x_1);
lean_dec(x_681);
if (lean_obj_tag(x_682) == 0)
{
lean_object* x_683; lean_object* x_684; lean_object* x_685; uint8_t x_686; 
lean_inc(x_1);
x_683 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_684 = lean_ctor_get(x_683, 1);
lean_inc(x_684);
x_685 = lean_ctor_get(x_683, 0);
lean_inc(x_685);
lean_dec(x_683);
x_686 = !lean_is_exclusive(x_684);
if (x_686 == 0)
{
lean_object* x_687; lean_object* x_688; 
x_687 = lean_ctor_get(x_684, 1);
lean_inc(x_685);
x_688 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_687, x_1, x_685);
lean_ctor_set(x_684, 1, x_688);
x_597 = x_685;
x_598 = x_684;
goto block_665;
}
else
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; 
x_689 = lean_ctor_get(x_684, 0);
x_690 = lean_ctor_get(x_684, 1);
lean_inc(x_690);
lean_inc(x_689);
lean_dec(x_684);
lean_inc(x_685);
x_691 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_690, x_1, x_685);
x_692 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_692, 0, x_689);
lean_ctor_set(x_692, 1, x_691);
x_597 = x_685;
x_598 = x_692;
goto block_665;
}
}
else
{
lean_object* x_693; 
lean_dec(x_1);
x_693 = lean_ctor_get(x_682, 0);
lean_inc(x_693);
lean_dec(x_682);
x_597 = x_693;
x_598 = x_3;
goto block_665;
}
}
block_665:
{
lean_object* x_599; 
if (x_596 == 0)
{
lean_object* x_610; 
x_610 = lean_box(0);
x_599 = x_610;
goto block_609;
}
else
{
uint8_t x_611; 
x_611 = l_Lean_Expr_isLambda(x_597);
if (x_611 == 0)
{
lean_object* x_612; 
x_612 = lean_box(0);
x_599 = x_612;
goto block_609;
}
else
{
lean_object* x_613; uint8_t x_614; 
x_613 = l_Lean_Expr_betaRev(x_597, x_2);
lean_dec(x_597);
x_614 = lean_expr_has_expr_mvar(x_613);
if (x_614 == 0)
{
uint8_t x_615; 
x_615 = lean_expr_has_level_mvar(x_613);
if (x_615 == 0)
{
lean_object* x_616; 
x_616 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_616, 0, x_613);
lean_ctor_set(x_616, 1, x_598);
return x_616;
}
else
{
lean_object* x_617; lean_object* x_618; 
x_617 = lean_ctor_get(x_598, 1);
lean_inc(x_617);
x_618 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_617, x_613);
lean_dec(x_617);
if (lean_obj_tag(x_618) == 0)
{
lean_object* x_619; uint8_t x_620; 
lean_inc(x_613);
x_619 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_613, x_598);
x_620 = !lean_is_exclusive(x_619);
if (x_620 == 0)
{
lean_object* x_621; uint8_t x_622; 
x_621 = lean_ctor_get(x_619, 1);
x_622 = !lean_is_exclusive(x_621);
if (x_622 == 0)
{
lean_object* x_623; lean_object* x_624; lean_object* x_625; 
x_623 = lean_ctor_get(x_619, 0);
x_624 = lean_ctor_get(x_621, 1);
lean_inc(x_623);
x_625 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_624, x_613, x_623);
lean_ctor_set(x_621, 1, x_625);
return x_619;
}
else
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; 
x_626 = lean_ctor_get(x_619, 0);
x_627 = lean_ctor_get(x_621, 0);
x_628 = lean_ctor_get(x_621, 1);
lean_inc(x_628);
lean_inc(x_627);
lean_dec(x_621);
lean_inc(x_626);
x_629 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_628, x_613, x_626);
x_630 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_630, 0, x_627);
lean_ctor_set(x_630, 1, x_629);
lean_ctor_set(x_619, 1, x_630);
return x_619;
}
}
else
{
lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; 
x_631 = lean_ctor_get(x_619, 1);
x_632 = lean_ctor_get(x_619, 0);
lean_inc(x_631);
lean_inc(x_632);
lean_dec(x_619);
x_633 = lean_ctor_get(x_631, 0);
lean_inc(x_633);
x_634 = lean_ctor_get(x_631, 1);
lean_inc(x_634);
if (lean_is_exclusive(x_631)) {
 lean_ctor_release(x_631, 0);
 lean_ctor_release(x_631, 1);
 x_635 = x_631;
} else {
 lean_dec_ref(x_631);
 x_635 = lean_box(0);
}
lean_inc(x_632);
x_636 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_634, x_613, x_632);
if (lean_is_scalar(x_635)) {
 x_637 = lean_alloc_ctor(0, 2, 0);
} else {
 x_637 = x_635;
}
lean_ctor_set(x_637, 0, x_633);
lean_ctor_set(x_637, 1, x_636);
x_638 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_638, 0, x_632);
lean_ctor_set(x_638, 1, x_637);
return x_638;
}
}
else
{
lean_object* x_639; lean_object* x_640; 
lean_dec(x_613);
x_639 = lean_ctor_get(x_618, 0);
lean_inc(x_639);
lean_dec(x_618);
x_640 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_640, 0, x_639);
lean_ctor_set(x_640, 1, x_598);
return x_640;
}
}
}
else
{
lean_object* x_641; lean_object* x_642; 
x_641 = lean_ctor_get(x_598, 1);
lean_inc(x_641);
x_642 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_641, x_613);
lean_dec(x_641);
if (lean_obj_tag(x_642) == 0)
{
lean_object* x_643; uint8_t x_644; 
lean_inc(x_613);
x_643 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_613, x_598);
x_644 = !lean_is_exclusive(x_643);
if (x_644 == 0)
{
lean_object* x_645; uint8_t x_646; 
x_645 = lean_ctor_get(x_643, 1);
x_646 = !lean_is_exclusive(x_645);
if (x_646 == 0)
{
lean_object* x_647; lean_object* x_648; lean_object* x_649; 
x_647 = lean_ctor_get(x_643, 0);
x_648 = lean_ctor_get(x_645, 1);
lean_inc(x_647);
x_649 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_648, x_613, x_647);
lean_ctor_set(x_645, 1, x_649);
return x_643;
}
else
{
lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; 
x_650 = lean_ctor_get(x_643, 0);
x_651 = lean_ctor_get(x_645, 0);
x_652 = lean_ctor_get(x_645, 1);
lean_inc(x_652);
lean_inc(x_651);
lean_dec(x_645);
lean_inc(x_650);
x_653 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_652, x_613, x_650);
x_654 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_654, 0, x_651);
lean_ctor_set(x_654, 1, x_653);
lean_ctor_set(x_643, 1, x_654);
return x_643;
}
}
else
{
lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; 
x_655 = lean_ctor_get(x_643, 1);
x_656 = lean_ctor_get(x_643, 0);
lean_inc(x_655);
lean_inc(x_656);
lean_dec(x_643);
x_657 = lean_ctor_get(x_655, 0);
lean_inc(x_657);
x_658 = lean_ctor_get(x_655, 1);
lean_inc(x_658);
if (lean_is_exclusive(x_655)) {
 lean_ctor_release(x_655, 0);
 lean_ctor_release(x_655, 1);
 x_659 = x_655;
} else {
 lean_dec_ref(x_655);
 x_659 = lean_box(0);
}
lean_inc(x_656);
x_660 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_658, x_613, x_656);
if (lean_is_scalar(x_659)) {
 x_661 = lean_alloc_ctor(0, 2, 0);
} else {
 x_661 = x_659;
}
lean_ctor_set(x_661, 0, x_657);
lean_ctor_set(x_661, 1, x_660);
x_662 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_662, 0, x_656);
lean_ctor_set(x_662, 1, x_661);
return x_662;
}
}
else
{
lean_object* x_663; lean_object* x_664; 
lean_dec(x_613);
x_663 = lean_ctor_get(x_642, 0);
lean_inc(x_663);
lean_dec(x_642);
x_664 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_664, 0, x_663);
lean_ctor_set(x_664, 1, x_598);
return x_664;
}
}
}
}
block_609:
{
lean_object* x_600; lean_object* x_601; uint8_t x_602; 
lean_dec(x_599);
x_600 = lean_unsigned_to_nat(0u);
x_601 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_600, x_2, x_598);
x_602 = !lean_is_exclusive(x_601);
if (x_602 == 0)
{
lean_object* x_603; lean_object* x_604; 
x_603 = lean_ctor_get(x_601, 0);
x_604 = l_Lean_mkAppRev(x_597, x_603);
lean_dec(x_603);
lean_ctor_set(x_601, 0, x_604);
return x_601;
}
else
{
lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; 
x_605 = lean_ctor_get(x_601, 0);
x_606 = lean_ctor_get(x_601, 1);
lean_inc(x_606);
lean_inc(x_605);
lean_dec(x_601);
x_607 = l_Lean_mkAppRev(x_597, x_605);
lean_dec(x_605);
x_608 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_608, 0, x_607);
lean_ctor_set(x_608, 1, x_606);
return x_608;
}
}
}
}
case 8:
{
uint8_t x_694; lean_object* x_695; lean_object* x_696; uint8_t x_764; 
x_694 = l_Lean_Expr_isMVar(x_1);
x_764 = lean_expr_has_expr_mvar(x_1);
if (x_764 == 0)
{
uint8_t x_765; 
x_765 = lean_expr_has_level_mvar(x_1);
if (x_765 == 0)
{
x_695 = x_1;
x_696 = x_3;
goto block_763;
}
else
{
lean_object* x_766; lean_object* x_767; 
x_766 = lean_ctor_get(x_3, 1);
lean_inc(x_766);
x_767 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_766, x_1);
lean_dec(x_766);
if (lean_obj_tag(x_767) == 0)
{
lean_object* x_768; lean_object* x_769; lean_object* x_770; uint8_t x_771; 
lean_inc(x_1);
x_768 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_769 = lean_ctor_get(x_768, 1);
lean_inc(x_769);
x_770 = lean_ctor_get(x_768, 0);
lean_inc(x_770);
lean_dec(x_768);
x_771 = !lean_is_exclusive(x_769);
if (x_771 == 0)
{
lean_object* x_772; lean_object* x_773; 
x_772 = lean_ctor_get(x_769, 1);
lean_inc(x_770);
x_773 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_772, x_1, x_770);
lean_ctor_set(x_769, 1, x_773);
x_695 = x_770;
x_696 = x_769;
goto block_763;
}
else
{
lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; 
x_774 = lean_ctor_get(x_769, 0);
x_775 = lean_ctor_get(x_769, 1);
lean_inc(x_775);
lean_inc(x_774);
lean_dec(x_769);
lean_inc(x_770);
x_776 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_775, x_1, x_770);
x_777 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_777, 0, x_774);
lean_ctor_set(x_777, 1, x_776);
x_695 = x_770;
x_696 = x_777;
goto block_763;
}
}
else
{
lean_object* x_778; 
lean_dec(x_1);
x_778 = lean_ctor_get(x_767, 0);
lean_inc(x_778);
lean_dec(x_767);
x_695 = x_778;
x_696 = x_3;
goto block_763;
}
}
}
else
{
lean_object* x_779; lean_object* x_780; 
x_779 = lean_ctor_get(x_3, 1);
lean_inc(x_779);
x_780 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_779, x_1);
lean_dec(x_779);
if (lean_obj_tag(x_780) == 0)
{
lean_object* x_781; lean_object* x_782; lean_object* x_783; uint8_t x_784; 
lean_inc(x_1);
x_781 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_782 = lean_ctor_get(x_781, 1);
lean_inc(x_782);
x_783 = lean_ctor_get(x_781, 0);
lean_inc(x_783);
lean_dec(x_781);
x_784 = !lean_is_exclusive(x_782);
if (x_784 == 0)
{
lean_object* x_785; lean_object* x_786; 
x_785 = lean_ctor_get(x_782, 1);
lean_inc(x_783);
x_786 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_785, x_1, x_783);
lean_ctor_set(x_782, 1, x_786);
x_695 = x_783;
x_696 = x_782;
goto block_763;
}
else
{
lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; 
x_787 = lean_ctor_get(x_782, 0);
x_788 = lean_ctor_get(x_782, 1);
lean_inc(x_788);
lean_inc(x_787);
lean_dec(x_782);
lean_inc(x_783);
x_789 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_788, x_1, x_783);
x_790 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_790, 0, x_787);
lean_ctor_set(x_790, 1, x_789);
x_695 = x_783;
x_696 = x_790;
goto block_763;
}
}
else
{
lean_object* x_791; 
lean_dec(x_1);
x_791 = lean_ctor_get(x_780, 0);
lean_inc(x_791);
lean_dec(x_780);
x_695 = x_791;
x_696 = x_3;
goto block_763;
}
}
block_763:
{
lean_object* x_697; 
if (x_694 == 0)
{
lean_object* x_708; 
x_708 = lean_box(0);
x_697 = x_708;
goto block_707;
}
else
{
uint8_t x_709; 
x_709 = l_Lean_Expr_isLambda(x_695);
if (x_709 == 0)
{
lean_object* x_710; 
x_710 = lean_box(0);
x_697 = x_710;
goto block_707;
}
else
{
lean_object* x_711; uint8_t x_712; 
x_711 = l_Lean_Expr_betaRev(x_695, x_2);
lean_dec(x_695);
x_712 = lean_expr_has_expr_mvar(x_711);
if (x_712 == 0)
{
uint8_t x_713; 
x_713 = lean_expr_has_level_mvar(x_711);
if (x_713 == 0)
{
lean_object* x_714; 
x_714 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_714, 0, x_711);
lean_ctor_set(x_714, 1, x_696);
return x_714;
}
else
{
lean_object* x_715; lean_object* x_716; 
x_715 = lean_ctor_get(x_696, 1);
lean_inc(x_715);
x_716 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_715, x_711);
lean_dec(x_715);
if (lean_obj_tag(x_716) == 0)
{
lean_object* x_717; uint8_t x_718; 
lean_inc(x_711);
x_717 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_711, x_696);
x_718 = !lean_is_exclusive(x_717);
if (x_718 == 0)
{
lean_object* x_719; uint8_t x_720; 
x_719 = lean_ctor_get(x_717, 1);
x_720 = !lean_is_exclusive(x_719);
if (x_720 == 0)
{
lean_object* x_721; lean_object* x_722; lean_object* x_723; 
x_721 = lean_ctor_get(x_717, 0);
x_722 = lean_ctor_get(x_719, 1);
lean_inc(x_721);
x_723 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_722, x_711, x_721);
lean_ctor_set(x_719, 1, x_723);
return x_717;
}
else
{
lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; 
x_724 = lean_ctor_get(x_717, 0);
x_725 = lean_ctor_get(x_719, 0);
x_726 = lean_ctor_get(x_719, 1);
lean_inc(x_726);
lean_inc(x_725);
lean_dec(x_719);
lean_inc(x_724);
x_727 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_726, x_711, x_724);
x_728 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_728, 0, x_725);
lean_ctor_set(x_728, 1, x_727);
lean_ctor_set(x_717, 1, x_728);
return x_717;
}
}
else
{
lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; 
x_729 = lean_ctor_get(x_717, 1);
x_730 = lean_ctor_get(x_717, 0);
lean_inc(x_729);
lean_inc(x_730);
lean_dec(x_717);
x_731 = lean_ctor_get(x_729, 0);
lean_inc(x_731);
x_732 = lean_ctor_get(x_729, 1);
lean_inc(x_732);
if (lean_is_exclusive(x_729)) {
 lean_ctor_release(x_729, 0);
 lean_ctor_release(x_729, 1);
 x_733 = x_729;
} else {
 lean_dec_ref(x_729);
 x_733 = lean_box(0);
}
lean_inc(x_730);
x_734 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_732, x_711, x_730);
if (lean_is_scalar(x_733)) {
 x_735 = lean_alloc_ctor(0, 2, 0);
} else {
 x_735 = x_733;
}
lean_ctor_set(x_735, 0, x_731);
lean_ctor_set(x_735, 1, x_734);
x_736 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_736, 0, x_730);
lean_ctor_set(x_736, 1, x_735);
return x_736;
}
}
else
{
lean_object* x_737; lean_object* x_738; 
lean_dec(x_711);
x_737 = lean_ctor_get(x_716, 0);
lean_inc(x_737);
lean_dec(x_716);
x_738 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_738, 0, x_737);
lean_ctor_set(x_738, 1, x_696);
return x_738;
}
}
}
else
{
lean_object* x_739; lean_object* x_740; 
x_739 = lean_ctor_get(x_696, 1);
lean_inc(x_739);
x_740 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_739, x_711);
lean_dec(x_739);
if (lean_obj_tag(x_740) == 0)
{
lean_object* x_741; uint8_t x_742; 
lean_inc(x_711);
x_741 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_711, x_696);
x_742 = !lean_is_exclusive(x_741);
if (x_742 == 0)
{
lean_object* x_743; uint8_t x_744; 
x_743 = lean_ctor_get(x_741, 1);
x_744 = !lean_is_exclusive(x_743);
if (x_744 == 0)
{
lean_object* x_745; lean_object* x_746; lean_object* x_747; 
x_745 = lean_ctor_get(x_741, 0);
x_746 = lean_ctor_get(x_743, 1);
lean_inc(x_745);
x_747 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_746, x_711, x_745);
lean_ctor_set(x_743, 1, x_747);
return x_741;
}
else
{
lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; 
x_748 = lean_ctor_get(x_741, 0);
x_749 = lean_ctor_get(x_743, 0);
x_750 = lean_ctor_get(x_743, 1);
lean_inc(x_750);
lean_inc(x_749);
lean_dec(x_743);
lean_inc(x_748);
x_751 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_750, x_711, x_748);
x_752 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_752, 0, x_749);
lean_ctor_set(x_752, 1, x_751);
lean_ctor_set(x_741, 1, x_752);
return x_741;
}
}
else
{
lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; 
x_753 = lean_ctor_get(x_741, 1);
x_754 = lean_ctor_get(x_741, 0);
lean_inc(x_753);
lean_inc(x_754);
lean_dec(x_741);
x_755 = lean_ctor_get(x_753, 0);
lean_inc(x_755);
x_756 = lean_ctor_get(x_753, 1);
lean_inc(x_756);
if (lean_is_exclusive(x_753)) {
 lean_ctor_release(x_753, 0);
 lean_ctor_release(x_753, 1);
 x_757 = x_753;
} else {
 lean_dec_ref(x_753);
 x_757 = lean_box(0);
}
lean_inc(x_754);
x_758 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_756, x_711, x_754);
if (lean_is_scalar(x_757)) {
 x_759 = lean_alloc_ctor(0, 2, 0);
} else {
 x_759 = x_757;
}
lean_ctor_set(x_759, 0, x_755);
lean_ctor_set(x_759, 1, x_758);
x_760 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_760, 0, x_754);
lean_ctor_set(x_760, 1, x_759);
return x_760;
}
}
else
{
lean_object* x_761; lean_object* x_762; 
lean_dec(x_711);
x_761 = lean_ctor_get(x_740, 0);
lean_inc(x_761);
lean_dec(x_740);
x_762 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_762, 0, x_761);
lean_ctor_set(x_762, 1, x_696);
return x_762;
}
}
}
}
block_707:
{
lean_object* x_698; lean_object* x_699; uint8_t x_700; 
lean_dec(x_697);
x_698 = lean_unsigned_to_nat(0u);
x_699 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_698, x_2, x_696);
x_700 = !lean_is_exclusive(x_699);
if (x_700 == 0)
{
lean_object* x_701; lean_object* x_702; 
x_701 = lean_ctor_get(x_699, 0);
x_702 = l_Lean_mkAppRev(x_695, x_701);
lean_dec(x_701);
lean_ctor_set(x_699, 0, x_702);
return x_699;
}
else
{
lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; 
x_703 = lean_ctor_get(x_699, 0);
x_704 = lean_ctor_get(x_699, 1);
lean_inc(x_704);
lean_inc(x_703);
lean_dec(x_699);
x_705 = l_Lean_mkAppRev(x_695, x_703);
lean_dec(x_703);
x_706 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_706, 0, x_705);
lean_ctor_set(x_706, 1, x_704);
return x_706;
}
}
}
}
case 9:
{
uint8_t x_792; lean_object* x_793; lean_object* x_794; uint8_t x_862; 
x_792 = l_Lean_Expr_isMVar(x_1);
x_862 = lean_expr_has_expr_mvar(x_1);
if (x_862 == 0)
{
uint8_t x_863; 
x_863 = lean_expr_has_level_mvar(x_1);
if (x_863 == 0)
{
x_793 = x_1;
x_794 = x_3;
goto block_861;
}
else
{
lean_object* x_864; lean_object* x_865; 
x_864 = lean_ctor_get(x_3, 1);
lean_inc(x_864);
x_865 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_864, x_1);
lean_dec(x_864);
if (lean_obj_tag(x_865) == 0)
{
lean_object* x_866; lean_object* x_867; lean_object* x_868; uint8_t x_869; 
lean_inc(x_1);
x_866 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_867 = lean_ctor_get(x_866, 1);
lean_inc(x_867);
x_868 = lean_ctor_get(x_866, 0);
lean_inc(x_868);
lean_dec(x_866);
x_869 = !lean_is_exclusive(x_867);
if (x_869 == 0)
{
lean_object* x_870; lean_object* x_871; 
x_870 = lean_ctor_get(x_867, 1);
lean_inc(x_868);
x_871 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_870, x_1, x_868);
lean_ctor_set(x_867, 1, x_871);
x_793 = x_868;
x_794 = x_867;
goto block_861;
}
else
{
lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; 
x_872 = lean_ctor_get(x_867, 0);
x_873 = lean_ctor_get(x_867, 1);
lean_inc(x_873);
lean_inc(x_872);
lean_dec(x_867);
lean_inc(x_868);
x_874 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_873, x_1, x_868);
x_875 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_875, 0, x_872);
lean_ctor_set(x_875, 1, x_874);
x_793 = x_868;
x_794 = x_875;
goto block_861;
}
}
else
{
lean_object* x_876; 
lean_dec(x_1);
x_876 = lean_ctor_get(x_865, 0);
lean_inc(x_876);
lean_dec(x_865);
x_793 = x_876;
x_794 = x_3;
goto block_861;
}
}
}
else
{
lean_object* x_877; lean_object* x_878; 
x_877 = lean_ctor_get(x_3, 1);
lean_inc(x_877);
x_878 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_877, x_1);
lean_dec(x_877);
if (lean_obj_tag(x_878) == 0)
{
lean_object* x_879; lean_object* x_880; lean_object* x_881; uint8_t x_882; 
lean_inc(x_1);
x_879 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_880 = lean_ctor_get(x_879, 1);
lean_inc(x_880);
x_881 = lean_ctor_get(x_879, 0);
lean_inc(x_881);
lean_dec(x_879);
x_882 = !lean_is_exclusive(x_880);
if (x_882 == 0)
{
lean_object* x_883; lean_object* x_884; 
x_883 = lean_ctor_get(x_880, 1);
lean_inc(x_881);
x_884 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_883, x_1, x_881);
lean_ctor_set(x_880, 1, x_884);
x_793 = x_881;
x_794 = x_880;
goto block_861;
}
else
{
lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; 
x_885 = lean_ctor_get(x_880, 0);
x_886 = lean_ctor_get(x_880, 1);
lean_inc(x_886);
lean_inc(x_885);
lean_dec(x_880);
lean_inc(x_881);
x_887 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_886, x_1, x_881);
x_888 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_888, 0, x_885);
lean_ctor_set(x_888, 1, x_887);
x_793 = x_881;
x_794 = x_888;
goto block_861;
}
}
else
{
lean_object* x_889; 
lean_dec(x_1);
x_889 = lean_ctor_get(x_878, 0);
lean_inc(x_889);
lean_dec(x_878);
x_793 = x_889;
x_794 = x_3;
goto block_861;
}
}
block_861:
{
lean_object* x_795; 
if (x_792 == 0)
{
lean_object* x_806; 
x_806 = lean_box(0);
x_795 = x_806;
goto block_805;
}
else
{
uint8_t x_807; 
x_807 = l_Lean_Expr_isLambda(x_793);
if (x_807 == 0)
{
lean_object* x_808; 
x_808 = lean_box(0);
x_795 = x_808;
goto block_805;
}
else
{
lean_object* x_809; uint8_t x_810; 
x_809 = l_Lean_Expr_betaRev(x_793, x_2);
lean_dec(x_793);
x_810 = lean_expr_has_expr_mvar(x_809);
if (x_810 == 0)
{
uint8_t x_811; 
x_811 = lean_expr_has_level_mvar(x_809);
if (x_811 == 0)
{
lean_object* x_812; 
x_812 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_812, 0, x_809);
lean_ctor_set(x_812, 1, x_794);
return x_812;
}
else
{
lean_object* x_813; lean_object* x_814; 
x_813 = lean_ctor_get(x_794, 1);
lean_inc(x_813);
x_814 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_813, x_809);
lean_dec(x_813);
if (lean_obj_tag(x_814) == 0)
{
lean_object* x_815; uint8_t x_816; 
lean_inc(x_809);
x_815 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_809, x_794);
x_816 = !lean_is_exclusive(x_815);
if (x_816 == 0)
{
lean_object* x_817; uint8_t x_818; 
x_817 = lean_ctor_get(x_815, 1);
x_818 = !lean_is_exclusive(x_817);
if (x_818 == 0)
{
lean_object* x_819; lean_object* x_820; lean_object* x_821; 
x_819 = lean_ctor_get(x_815, 0);
x_820 = lean_ctor_get(x_817, 1);
lean_inc(x_819);
x_821 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_820, x_809, x_819);
lean_ctor_set(x_817, 1, x_821);
return x_815;
}
else
{
lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; 
x_822 = lean_ctor_get(x_815, 0);
x_823 = lean_ctor_get(x_817, 0);
x_824 = lean_ctor_get(x_817, 1);
lean_inc(x_824);
lean_inc(x_823);
lean_dec(x_817);
lean_inc(x_822);
x_825 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_824, x_809, x_822);
x_826 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_826, 0, x_823);
lean_ctor_set(x_826, 1, x_825);
lean_ctor_set(x_815, 1, x_826);
return x_815;
}
}
else
{
lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; 
x_827 = lean_ctor_get(x_815, 1);
x_828 = lean_ctor_get(x_815, 0);
lean_inc(x_827);
lean_inc(x_828);
lean_dec(x_815);
x_829 = lean_ctor_get(x_827, 0);
lean_inc(x_829);
x_830 = lean_ctor_get(x_827, 1);
lean_inc(x_830);
if (lean_is_exclusive(x_827)) {
 lean_ctor_release(x_827, 0);
 lean_ctor_release(x_827, 1);
 x_831 = x_827;
} else {
 lean_dec_ref(x_827);
 x_831 = lean_box(0);
}
lean_inc(x_828);
x_832 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_830, x_809, x_828);
if (lean_is_scalar(x_831)) {
 x_833 = lean_alloc_ctor(0, 2, 0);
} else {
 x_833 = x_831;
}
lean_ctor_set(x_833, 0, x_829);
lean_ctor_set(x_833, 1, x_832);
x_834 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_834, 0, x_828);
lean_ctor_set(x_834, 1, x_833);
return x_834;
}
}
else
{
lean_object* x_835; lean_object* x_836; 
lean_dec(x_809);
x_835 = lean_ctor_get(x_814, 0);
lean_inc(x_835);
lean_dec(x_814);
x_836 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_836, 0, x_835);
lean_ctor_set(x_836, 1, x_794);
return x_836;
}
}
}
else
{
lean_object* x_837; lean_object* x_838; 
x_837 = lean_ctor_get(x_794, 1);
lean_inc(x_837);
x_838 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_837, x_809);
lean_dec(x_837);
if (lean_obj_tag(x_838) == 0)
{
lean_object* x_839; uint8_t x_840; 
lean_inc(x_809);
x_839 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_809, x_794);
x_840 = !lean_is_exclusive(x_839);
if (x_840 == 0)
{
lean_object* x_841; uint8_t x_842; 
x_841 = lean_ctor_get(x_839, 1);
x_842 = !lean_is_exclusive(x_841);
if (x_842 == 0)
{
lean_object* x_843; lean_object* x_844; lean_object* x_845; 
x_843 = lean_ctor_get(x_839, 0);
x_844 = lean_ctor_get(x_841, 1);
lean_inc(x_843);
x_845 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_844, x_809, x_843);
lean_ctor_set(x_841, 1, x_845);
return x_839;
}
else
{
lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; 
x_846 = lean_ctor_get(x_839, 0);
x_847 = lean_ctor_get(x_841, 0);
x_848 = lean_ctor_get(x_841, 1);
lean_inc(x_848);
lean_inc(x_847);
lean_dec(x_841);
lean_inc(x_846);
x_849 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_848, x_809, x_846);
x_850 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_850, 0, x_847);
lean_ctor_set(x_850, 1, x_849);
lean_ctor_set(x_839, 1, x_850);
return x_839;
}
}
else
{
lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; 
x_851 = lean_ctor_get(x_839, 1);
x_852 = lean_ctor_get(x_839, 0);
lean_inc(x_851);
lean_inc(x_852);
lean_dec(x_839);
x_853 = lean_ctor_get(x_851, 0);
lean_inc(x_853);
x_854 = lean_ctor_get(x_851, 1);
lean_inc(x_854);
if (lean_is_exclusive(x_851)) {
 lean_ctor_release(x_851, 0);
 lean_ctor_release(x_851, 1);
 x_855 = x_851;
} else {
 lean_dec_ref(x_851);
 x_855 = lean_box(0);
}
lean_inc(x_852);
x_856 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_854, x_809, x_852);
if (lean_is_scalar(x_855)) {
 x_857 = lean_alloc_ctor(0, 2, 0);
} else {
 x_857 = x_855;
}
lean_ctor_set(x_857, 0, x_853);
lean_ctor_set(x_857, 1, x_856);
x_858 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_858, 0, x_852);
lean_ctor_set(x_858, 1, x_857);
return x_858;
}
}
else
{
lean_object* x_859; lean_object* x_860; 
lean_dec(x_809);
x_859 = lean_ctor_get(x_838, 0);
lean_inc(x_859);
lean_dec(x_838);
x_860 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_860, 0, x_859);
lean_ctor_set(x_860, 1, x_794);
return x_860;
}
}
}
}
block_805:
{
lean_object* x_796; lean_object* x_797; uint8_t x_798; 
lean_dec(x_795);
x_796 = lean_unsigned_to_nat(0u);
x_797 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_796, x_2, x_794);
x_798 = !lean_is_exclusive(x_797);
if (x_798 == 0)
{
lean_object* x_799; lean_object* x_800; 
x_799 = lean_ctor_get(x_797, 0);
x_800 = l_Lean_mkAppRev(x_793, x_799);
lean_dec(x_799);
lean_ctor_set(x_797, 0, x_800);
return x_797;
}
else
{
lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; 
x_801 = lean_ctor_get(x_797, 0);
x_802 = lean_ctor_get(x_797, 1);
lean_inc(x_802);
lean_inc(x_801);
lean_dec(x_797);
x_803 = l_Lean_mkAppRev(x_793, x_801);
lean_dec(x_801);
x_804 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_804, 0, x_803);
lean_ctor_set(x_804, 1, x_802);
return x_804;
}
}
}
}
case 10:
{
uint8_t x_890; lean_object* x_891; lean_object* x_892; uint8_t x_960; 
x_890 = l_Lean_Expr_isMVar(x_1);
x_960 = lean_expr_has_expr_mvar(x_1);
if (x_960 == 0)
{
uint8_t x_961; 
x_961 = lean_expr_has_level_mvar(x_1);
if (x_961 == 0)
{
x_891 = x_1;
x_892 = x_3;
goto block_959;
}
else
{
lean_object* x_962; lean_object* x_963; 
x_962 = lean_ctor_get(x_3, 1);
lean_inc(x_962);
x_963 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_962, x_1);
lean_dec(x_962);
if (lean_obj_tag(x_963) == 0)
{
lean_object* x_964; lean_object* x_965; lean_object* x_966; uint8_t x_967; 
lean_inc(x_1);
x_964 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_965 = lean_ctor_get(x_964, 1);
lean_inc(x_965);
x_966 = lean_ctor_get(x_964, 0);
lean_inc(x_966);
lean_dec(x_964);
x_967 = !lean_is_exclusive(x_965);
if (x_967 == 0)
{
lean_object* x_968; lean_object* x_969; 
x_968 = lean_ctor_get(x_965, 1);
lean_inc(x_966);
x_969 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_968, x_1, x_966);
lean_ctor_set(x_965, 1, x_969);
x_891 = x_966;
x_892 = x_965;
goto block_959;
}
else
{
lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; 
x_970 = lean_ctor_get(x_965, 0);
x_971 = lean_ctor_get(x_965, 1);
lean_inc(x_971);
lean_inc(x_970);
lean_dec(x_965);
lean_inc(x_966);
x_972 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_971, x_1, x_966);
x_973 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_973, 0, x_970);
lean_ctor_set(x_973, 1, x_972);
x_891 = x_966;
x_892 = x_973;
goto block_959;
}
}
else
{
lean_object* x_974; 
lean_dec(x_1);
x_974 = lean_ctor_get(x_963, 0);
lean_inc(x_974);
lean_dec(x_963);
x_891 = x_974;
x_892 = x_3;
goto block_959;
}
}
}
else
{
lean_object* x_975; lean_object* x_976; 
x_975 = lean_ctor_get(x_3, 1);
lean_inc(x_975);
x_976 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_975, x_1);
lean_dec(x_975);
if (lean_obj_tag(x_976) == 0)
{
lean_object* x_977; lean_object* x_978; lean_object* x_979; uint8_t x_980; 
lean_inc(x_1);
x_977 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_978 = lean_ctor_get(x_977, 1);
lean_inc(x_978);
x_979 = lean_ctor_get(x_977, 0);
lean_inc(x_979);
lean_dec(x_977);
x_980 = !lean_is_exclusive(x_978);
if (x_980 == 0)
{
lean_object* x_981; lean_object* x_982; 
x_981 = lean_ctor_get(x_978, 1);
lean_inc(x_979);
x_982 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_981, x_1, x_979);
lean_ctor_set(x_978, 1, x_982);
x_891 = x_979;
x_892 = x_978;
goto block_959;
}
else
{
lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; 
x_983 = lean_ctor_get(x_978, 0);
x_984 = lean_ctor_get(x_978, 1);
lean_inc(x_984);
lean_inc(x_983);
lean_dec(x_978);
lean_inc(x_979);
x_985 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_984, x_1, x_979);
x_986 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_986, 0, x_983);
lean_ctor_set(x_986, 1, x_985);
x_891 = x_979;
x_892 = x_986;
goto block_959;
}
}
else
{
lean_object* x_987; 
lean_dec(x_1);
x_987 = lean_ctor_get(x_976, 0);
lean_inc(x_987);
lean_dec(x_976);
x_891 = x_987;
x_892 = x_3;
goto block_959;
}
}
block_959:
{
lean_object* x_893; 
if (x_890 == 0)
{
lean_object* x_904; 
x_904 = lean_box(0);
x_893 = x_904;
goto block_903;
}
else
{
uint8_t x_905; 
x_905 = l_Lean_Expr_isLambda(x_891);
if (x_905 == 0)
{
lean_object* x_906; 
x_906 = lean_box(0);
x_893 = x_906;
goto block_903;
}
else
{
lean_object* x_907; uint8_t x_908; 
x_907 = l_Lean_Expr_betaRev(x_891, x_2);
lean_dec(x_891);
x_908 = lean_expr_has_expr_mvar(x_907);
if (x_908 == 0)
{
uint8_t x_909; 
x_909 = lean_expr_has_level_mvar(x_907);
if (x_909 == 0)
{
lean_object* x_910; 
x_910 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_910, 0, x_907);
lean_ctor_set(x_910, 1, x_892);
return x_910;
}
else
{
lean_object* x_911; lean_object* x_912; 
x_911 = lean_ctor_get(x_892, 1);
lean_inc(x_911);
x_912 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_911, x_907);
lean_dec(x_911);
if (lean_obj_tag(x_912) == 0)
{
lean_object* x_913; uint8_t x_914; 
lean_inc(x_907);
x_913 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_907, x_892);
x_914 = !lean_is_exclusive(x_913);
if (x_914 == 0)
{
lean_object* x_915; uint8_t x_916; 
x_915 = lean_ctor_get(x_913, 1);
x_916 = !lean_is_exclusive(x_915);
if (x_916 == 0)
{
lean_object* x_917; lean_object* x_918; lean_object* x_919; 
x_917 = lean_ctor_get(x_913, 0);
x_918 = lean_ctor_get(x_915, 1);
lean_inc(x_917);
x_919 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_918, x_907, x_917);
lean_ctor_set(x_915, 1, x_919);
return x_913;
}
else
{
lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; 
x_920 = lean_ctor_get(x_913, 0);
x_921 = lean_ctor_get(x_915, 0);
x_922 = lean_ctor_get(x_915, 1);
lean_inc(x_922);
lean_inc(x_921);
lean_dec(x_915);
lean_inc(x_920);
x_923 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_922, x_907, x_920);
x_924 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_924, 0, x_921);
lean_ctor_set(x_924, 1, x_923);
lean_ctor_set(x_913, 1, x_924);
return x_913;
}
}
else
{
lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; 
x_925 = lean_ctor_get(x_913, 1);
x_926 = lean_ctor_get(x_913, 0);
lean_inc(x_925);
lean_inc(x_926);
lean_dec(x_913);
x_927 = lean_ctor_get(x_925, 0);
lean_inc(x_927);
x_928 = lean_ctor_get(x_925, 1);
lean_inc(x_928);
if (lean_is_exclusive(x_925)) {
 lean_ctor_release(x_925, 0);
 lean_ctor_release(x_925, 1);
 x_929 = x_925;
} else {
 lean_dec_ref(x_925);
 x_929 = lean_box(0);
}
lean_inc(x_926);
x_930 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_928, x_907, x_926);
if (lean_is_scalar(x_929)) {
 x_931 = lean_alloc_ctor(0, 2, 0);
} else {
 x_931 = x_929;
}
lean_ctor_set(x_931, 0, x_927);
lean_ctor_set(x_931, 1, x_930);
x_932 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_932, 0, x_926);
lean_ctor_set(x_932, 1, x_931);
return x_932;
}
}
else
{
lean_object* x_933; lean_object* x_934; 
lean_dec(x_907);
x_933 = lean_ctor_get(x_912, 0);
lean_inc(x_933);
lean_dec(x_912);
x_934 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_934, 0, x_933);
lean_ctor_set(x_934, 1, x_892);
return x_934;
}
}
}
else
{
lean_object* x_935; lean_object* x_936; 
x_935 = lean_ctor_get(x_892, 1);
lean_inc(x_935);
x_936 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_935, x_907);
lean_dec(x_935);
if (lean_obj_tag(x_936) == 0)
{
lean_object* x_937; uint8_t x_938; 
lean_inc(x_907);
x_937 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_907, x_892);
x_938 = !lean_is_exclusive(x_937);
if (x_938 == 0)
{
lean_object* x_939; uint8_t x_940; 
x_939 = lean_ctor_get(x_937, 1);
x_940 = !lean_is_exclusive(x_939);
if (x_940 == 0)
{
lean_object* x_941; lean_object* x_942; lean_object* x_943; 
x_941 = lean_ctor_get(x_937, 0);
x_942 = lean_ctor_get(x_939, 1);
lean_inc(x_941);
x_943 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_942, x_907, x_941);
lean_ctor_set(x_939, 1, x_943);
return x_937;
}
else
{
lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; lean_object* x_948; 
x_944 = lean_ctor_get(x_937, 0);
x_945 = lean_ctor_get(x_939, 0);
x_946 = lean_ctor_get(x_939, 1);
lean_inc(x_946);
lean_inc(x_945);
lean_dec(x_939);
lean_inc(x_944);
x_947 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_946, x_907, x_944);
x_948 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_948, 0, x_945);
lean_ctor_set(x_948, 1, x_947);
lean_ctor_set(x_937, 1, x_948);
return x_937;
}
}
else
{
lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; 
x_949 = lean_ctor_get(x_937, 1);
x_950 = lean_ctor_get(x_937, 0);
lean_inc(x_949);
lean_inc(x_950);
lean_dec(x_937);
x_951 = lean_ctor_get(x_949, 0);
lean_inc(x_951);
x_952 = lean_ctor_get(x_949, 1);
lean_inc(x_952);
if (lean_is_exclusive(x_949)) {
 lean_ctor_release(x_949, 0);
 lean_ctor_release(x_949, 1);
 x_953 = x_949;
} else {
 lean_dec_ref(x_949);
 x_953 = lean_box(0);
}
lean_inc(x_950);
x_954 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_952, x_907, x_950);
if (lean_is_scalar(x_953)) {
 x_955 = lean_alloc_ctor(0, 2, 0);
} else {
 x_955 = x_953;
}
lean_ctor_set(x_955, 0, x_951);
lean_ctor_set(x_955, 1, x_954);
x_956 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_956, 0, x_950);
lean_ctor_set(x_956, 1, x_955);
return x_956;
}
}
else
{
lean_object* x_957; lean_object* x_958; 
lean_dec(x_907);
x_957 = lean_ctor_get(x_936, 0);
lean_inc(x_957);
lean_dec(x_936);
x_958 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_958, 0, x_957);
lean_ctor_set(x_958, 1, x_892);
return x_958;
}
}
}
}
block_903:
{
lean_object* x_894; lean_object* x_895; uint8_t x_896; 
lean_dec(x_893);
x_894 = lean_unsigned_to_nat(0u);
x_895 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_894, x_2, x_892);
x_896 = !lean_is_exclusive(x_895);
if (x_896 == 0)
{
lean_object* x_897; lean_object* x_898; 
x_897 = lean_ctor_get(x_895, 0);
x_898 = l_Lean_mkAppRev(x_891, x_897);
lean_dec(x_897);
lean_ctor_set(x_895, 0, x_898);
return x_895;
}
else
{
lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; 
x_899 = lean_ctor_get(x_895, 0);
x_900 = lean_ctor_get(x_895, 1);
lean_inc(x_900);
lean_inc(x_899);
lean_dec(x_895);
x_901 = l_Lean_mkAppRev(x_891, x_899);
lean_dec(x_899);
x_902 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_902, 0, x_901);
lean_ctor_set(x_902, 1, x_900);
return x_902;
}
}
}
}
default: 
{
uint8_t x_988; lean_object* x_989; lean_object* x_990; uint8_t x_1058; 
x_988 = l_Lean_Expr_isMVar(x_1);
x_1058 = lean_expr_has_expr_mvar(x_1);
if (x_1058 == 0)
{
uint8_t x_1059; 
x_1059 = lean_expr_has_level_mvar(x_1);
if (x_1059 == 0)
{
x_989 = x_1;
x_990 = x_3;
goto block_1057;
}
else
{
lean_object* x_1060; lean_object* x_1061; 
x_1060 = lean_ctor_get(x_3, 1);
lean_inc(x_1060);
x_1061 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_1060, x_1);
lean_dec(x_1060);
if (lean_obj_tag(x_1061) == 0)
{
lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; uint8_t x_1065; 
lean_inc(x_1);
x_1062 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_1063 = lean_ctor_get(x_1062, 1);
lean_inc(x_1063);
x_1064 = lean_ctor_get(x_1062, 0);
lean_inc(x_1064);
lean_dec(x_1062);
x_1065 = !lean_is_exclusive(x_1063);
if (x_1065 == 0)
{
lean_object* x_1066; lean_object* x_1067; 
x_1066 = lean_ctor_get(x_1063, 1);
lean_inc(x_1064);
x_1067 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1066, x_1, x_1064);
lean_ctor_set(x_1063, 1, x_1067);
x_989 = x_1064;
x_990 = x_1063;
goto block_1057;
}
else
{
lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; 
x_1068 = lean_ctor_get(x_1063, 0);
x_1069 = lean_ctor_get(x_1063, 1);
lean_inc(x_1069);
lean_inc(x_1068);
lean_dec(x_1063);
lean_inc(x_1064);
x_1070 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1069, x_1, x_1064);
x_1071 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1071, 0, x_1068);
lean_ctor_set(x_1071, 1, x_1070);
x_989 = x_1064;
x_990 = x_1071;
goto block_1057;
}
}
else
{
lean_object* x_1072; 
lean_dec(x_1);
x_1072 = lean_ctor_get(x_1061, 0);
lean_inc(x_1072);
lean_dec(x_1061);
x_989 = x_1072;
x_990 = x_3;
goto block_1057;
}
}
}
else
{
lean_object* x_1073; lean_object* x_1074; 
x_1073 = lean_ctor_get(x_3, 1);
lean_inc(x_1073);
x_1074 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_1073, x_1);
lean_dec(x_1073);
if (lean_obj_tag(x_1074) == 0)
{
lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; uint8_t x_1078; 
lean_inc(x_1);
x_1075 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_3);
x_1076 = lean_ctor_get(x_1075, 1);
lean_inc(x_1076);
x_1077 = lean_ctor_get(x_1075, 0);
lean_inc(x_1077);
lean_dec(x_1075);
x_1078 = !lean_is_exclusive(x_1076);
if (x_1078 == 0)
{
lean_object* x_1079; lean_object* x_1080; 
x_1079 = lean_ctor_get(x_1076, 1);
lean_inc(x_1077);
x_1080 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1079, x_1, x_1077);
lean_ctor_set(x_1076, 1, x_1080);
x_989 = x_1077;
x_990 = x_1076;
goto block_1057;
}
else
{
lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; 
x_1081 = lean_ctor_get(x_1076, 0);
x_1082 = lean_ctor_get(x_1076, 1);
lean_inc(x_1082);
lean_inc(x_1081);
lean_dec(x_1076);
lean_inc(x_1077);
x_1083 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1082, x_1, x_1077);
x_1084 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1084, 0, x_1081);
lean_ctor_set(x_1084, 1, x_1083);
x_989 = x_1077;
x_990 = x_1084;
goto block_1057;
}
}
else
{
lean_object* x_1085; 
lean_dec(x_1);
x_1085 = lean_ctor_get(x_1074, 0);
lean_inc(x_1085);
lean_dec(x_1074);
x_989 = x_1085;
x_990 = x_3;
goto block_1057;
}
}
block_1057:
{
lean_object* x_991; 
if (x_988 == 0)
{
lean_object* x_1002; 
x_1002 = lean_box(0);
x_991 = x_1002;
goto block_1001;
}
else
{
uint8_t x_1003; 
x_1003 = l_Lean_Expr_isLambda(x_989);
if (x_1003 == 0)
{
lean_object* x_1004; 
x_1004 = lean_box(0);
x_991 = x_1004;
goto block_1001;
}
else
{
lean_object* x_1005; uint8_t x_1006; 
x_1005 = l_Lean_Expr_betaRev(x_989, x_2);
lean_dec(x_989);
x_1006 = lean_expr_has_expr_mvar(x_1005);
if (x_1006 == 0)
{
uint8_t x_1007; 
x_1007 = lean_expr_has_level_mvar(x_1005);
if (x_1007 == 0)
{
lean_object* x_1008; 
x_1008 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1008, 0, x_1005);
lean_ctor_set(x_1008, 1, x_990);
return x_1008;
}
else
{
lean_object* x_1009; lean_object* x_1010; 
x_1009 = lean_ctor_get(x_990, 1);
lean_inc(x_1009);
x_1010 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_1009, x_1005);
lean_dec(x_1009);
if (lean_obj_tag(x_1010) == 0)
{
lean_object* x_1011; uint8_t x_1012; 
lean_inc(x_1005);
x_1011 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1005, x_990);
x_1012 = !lean_is_exclusive(x_1011);
if (x_1012 == 0)
{
lean_object* x_1013; uint8_t x_1014; 
x_1013 = lean_ctor_get(x_1011, 1);
x_1014 = !lean_is_exclusive(x_1013);
if (x_1014 == 0)
{
lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; 
x_1015 = lean_ctor_get(x_1011, 0);
x_1016 = lean_ctor_get(x_1013, 1);
lean_inc(x_1015);
x_1017 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1016, x_1005, x_1015);
lean_ctor_set(x_1013, 1, x_1017);
return x_1011;
}
else
{
lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; 
x_1018 = lean_ctor_get(x_1011, 0);
x_1019 = lean_ctor_get(x_1013, 0);
x_1020 = lean_ctor_get(x_1013, 1);
lean_inc(x_1020);
lean_inc(x_1019);
lean_dec(x_1013);
lean_inc(x_1018);
x_1021 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1020, x_1005, x_1018);
x_1022 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1022, 0, x_1019);
lean_ctor_set(x_1022, 1, x_1021);
lean_ctor_set(x_1011, 1, x_1022);
return x_1011;
}
}
else
{
lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; 
x_1023 = lean_ctor_get(x_1011, 1);
x_1024 = lean_ctor_get(x_1011, 0);
lean_inc(x_1023);
lean_inc(x_1024);
lean_dec(x_1011);
x_1025 = lean_ctor_get(x_1023, 0);
lean_inc(x_1025);
x_1026 = lean_ctor_get(x_1023, 1);
lean_inc(x_1026);
if (lean_is_exclusive(x_1023)) {
 lean_ctor_release(x_1023, 0);
 lean_ctor_release(x_1023, 1);
 x_1027 = x_1023;
} else {
 lean_dec_ref(x_1023);
 x_1027 = lean_box(0);
}
lean_inc(x_1024);
x_1028 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1026, x_1005, x_1024);
if (lean_is_scalar(x_1027)) {
 x_1029 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1029 = x_1027;
}
lean_ctor_set(x_1029, 0, x_1025);
lean_ctor_set(x_1029, 1, x_1028);
x_1030 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1030, 0, x_1024);
lean_ctor_set(x_1030, 1, x_1029);
return x_1030;
}
}
else
{
lean_object* x_1031; lean_object* x_1032; 
lean_dec(x_1005);
x_1031 = lean_ctor_get(x_1010, 0);
lean_inc(x_1031);
lean_dec(x_1010);
x_1032 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1032, 0, x_1031);
lean_ctor_set(x_1032, 1, x_990);
return x_1032;
}
}
}
else
{
lean_object* x_1033; lean_object* x_1034; 
x_1033 = lean_ctor_get(x_990, 1);
lean_inc(x_1033);
x_1034 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_1033, x_1005);
lean_dec(x_1033);
if (lean_obj_tag(x_1034) == 0)
{
lean_object* x_1035; uint8_t x_1036; 
lean_inc(x_1005);
x_1035 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1005, x_990);
x_1036 = !lean_is_exclusive(x_1035);
if (x_1036 == 0)
{
lean_object* x_1037; uint8_t x_1038; 
x_1037 = lean_ctor_get(x_1035, 1);
x_1038 = !lean_is_exclusive(x_1037);
if (x_1038 == 0)
{
lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; 
x_1039 = lean_ctor_get(x_1035, 0);
x_1040 = lean_ctor_get(x_1037, 1);
lean_inc(x_1039);
x_1041 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1040, x_1005, x_1039);
lean_ctor_set(x_1037, 1, x_1041);
return x_1035;
}
else
{
lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; 
x_1042 = lean_ctor_get(x_1035, 0);
x_1043 = lean_ctor_get(x_1037, 0);
x_1044 = lean_ctor_get(x_1037, 1);
lean_inc(x_1044);
lean_inc(x_1043);
lean_dec(x_1037);
lean_inc(x_1042);
x_1045 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1044, x_1005, x_1042);
x_1046 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1046, 0, x_1043);
lean_ctor_set(x_1046, 1, x_1045);
lean_ctor_set(x_1035, 1, x_1046);
return x_1035;
}
}
else
{
lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; 
x_1047 = lean_ctor_get(x_1035, 1);
x_1048 = lean_ctor_get(x_1035, 0);
lean_inc(x_1047);
lean_inc(x_1048);
lean_dec(x_1035);
x_1049 = lean_ctor_get(x_1047, 0);
lean_inc(x_1049);
x_1050 = lean_ctor_get(x_1047, 1);
lean_inc(x_1050);
if (lean_is_exclusive(x_1047)) {
 lean_ctor_release(x_1047, 0);
 lean_ctor_release(x_1047, 1);
 x_1051 = x_1047;
} else {
 lean_dec_ref(x_1047);
 x_1051 = lean_box(0);
}
lean_inc(x_1048);
x_1052 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_1050, x_1005, x_1048);
if (lean_is_scalar(x_1051)) {
 x_1053 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1053 = x_1051;
}
lean_ctor_set(x_1053, 0, x_1049);
lean_ctor_set(x_1053, 1, x_1052);
x_1054 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1054, 0, x_1048);
lean_ctor_set(x_1054, 1, x_1053);
return x_1054;
}
}
else
{
lean_object* x_1055; lean_object* x_1056; 
lean_dec(x_1005);
x_1055 = lean_ctor_get(x_1034, 0);
lean_inc(x_1055);
lean_dec(x_1034);
x_1056 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1056, 0, x_1055);
lean_ctor_set(x_1056, 1, x_990);
return x_1056;
}
}
}
}
block_1001:
{
lean_object* x_992; lean_object* x_993; uint8_t x_994; 
lean_dec(x_991);
x_992 = lean_unsigned_to_nat(0u);
x_993 = l_Array_umapMAux___main___at_Lean_MetavarContext_instantiateMVars___spec__7(x_992, x_2, x_990);
x_994 = !lean_is_exclusive(x_993);
if (x_994 == 0)
{
lean_object* x_995; lean_object* x_996; 
x_995 = lean_ctor_get(x_993, 0);
x_996 = l_Lean_mkAppRev(x_989, x_995);
lean_dec(x_995);
lean_ctor_set(x_993, 0, x_996);
return x_993;
}
else
{
lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; 
x_997 = lean_ctor_get(x_993, 0);
x_998 = lean_ctor_get(x_993, 1);
lean_inc(x_998);
lean_inc(x_997);
lean_dec(x_993);
x_999 = l_Lean_mkAppRev(x_989, x_997);
lean_dec(x_997);
x_1000 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1000, 0, x_999);
lean_ctor_set(x_1000, 1, x_998);
return x_1000;
}
}
}
}
}
}
}
lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_15; lean_object* x_16; lean_object* x_26; lean_object* x_27; 
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_48; lean_object* x_49; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_48 = lean_ctor_get(x_2, 1);
lean_inc(x_48);
x_49 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_48, x_1);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_2, 0);
lean_inc(x_50);
lean_inc(x_37);
lean_inc(x_50);
x_51 = lean_metavar_ctx_get_expr_assignment(x_50, x_37);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; 
lean_inc(x_37);
x_52 = lean_metavar_ctx_get_delayed_assignment(x_50, x_37);
if (lean_obj_tag(x_52) == 0)
{
lean_dec(x_48);
lean_dec(x_37);
lean_inc(x_1);
x_3 = x_1;
x_4 = x_2;
goto block_14;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_99; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_53, 2);
lean_inc(x_56);
lean_dec(x_53);
x_99 = lean_expr_has_expr_mvar(x_56);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = lean_expr_has_level_mvar(x_56);
if (x_100 == 0)
{
lean_dec(x_48);
x_57 = x_56;
x_58 = x_2;
goto block_98;
}
else
{
lean_object* x_101; 
x_101 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_48, x_56);
lean_dec(x_48);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
lean_inc(x_56);
x_102 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_56, x_2);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 0);
lean_inc(x_104);
lean_dec(x_102);
x_105 = !lean_is_exclusive(x_103);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
x_107 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_106, x_56, x_104);
lean_ctor_set(x_103, 1, x_107);
x_57 = x_104;
x_58 = x_103;
goto block_98;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_108 = lean_ctor_get(x_103, 0);
x_109 = lean_ctor_get(x_103, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_103);
lean_inc(x_104);
x_110 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_109, x_56, x_104);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_110);
x_57 = x_104;
x_58 = x_111;
goto block_98;
}
}
else
{
lean_object* x_112; 
lean_dec(x_56);
x_112 = lean_ctor_get(x_101, 0);
lean_inc(x_112);
lean_dec(x_101);
x_57 = x_112;
x_58 = x_2;
goto block_98;
}
}
}
else
{
lean_object* x_113; 
x_113 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_48, x_56);
lean_dec(x_48);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
lean_inc(x_56);
x_114 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_56, x_2);
x_115 = lean_ctor_get(x_114, 1);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 0);
lean_inc(x_116);
lean_dec(x_114);
x_117 = !lean_is_exclusive(x_115);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; 
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_116);
x_119 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_118, x_56, x_116);
lean_ctor_set(x_115, 1, x_119);
x_57 = x_116;
x_58 = x_115;
goto block_98;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_120 = lean_ctor_get(x_115, 0);
x_121 = lean_ctor_get(x_115, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_115);
lean_inc(x_116);
x_122 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_121, x_56, x_116);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_122);
x_57 = x_116;
x_58 = x_123;
goto block_98;
}
}
else
{
lean_object* x_124; 
lean_dec(x_56);
x_124 = lean_ctor_get(x_113, 0);
lean_inc(x_124);
lean_dec(x_113);
x_57 = x_124;
x_58 = x_2;
goto block_98;
}
}
block_98:
{
uint8_t x_59; 
x_59 = lean_expr_has_expr_mvar(x_57);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = lean_expr_has_level_mvar(x_57);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_array_get_size(x_55);
x_62 = lean_expr_abstract(x_57, x_55);
lean_inc(x_54);
x_63 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___at_Lean_MetavarContext_instantiateMVars___spec__3(x_54, x_55, x_61, x_62, x_58);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_65, 0);
x_68 = lean_metavar_ctx_assign_delayed(x_67, x_37, x_54, x_55, x_57);
lean_ctor_set(x_65, 0, x_68);
lean_inc(x_1);
x_3 = x_1;
x_4 = x_65;
goto block_14;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_65, 0);
x_70 = lean_ctor_get(x_65, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_65);
x_71 = lean_metavar_ctx_assign_delayed(x_69, x_37, x_54, x_55, x_57);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
lean_inc(x_1);
x_3 = x_1;
x_4 = x_72;
goto block_14;
}
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
lean_dec(x_57);
lean_dec(x_55);
lean_dec(x_54);
x_73 = lean_ctor_get(x_63, 1);
lean_inc(x_73);
lean_dec(x_63);
x_74 = lean_ctor_get(x_64, 0);
lean_inc(x_74);
lean_dec(x_64);
x_75 = !lean_is_exclusive(x_73);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_73, 0);
lean_inc(x_37);
x_77 = lean_metavar_ctx_erase_delayed(x_76, x_37);
lean_inc(x_74);
x_78 = lean_metavar_ctx_assign_expr(x_77, x_37, x_74);
lean_ctor_set(x_73, 0, x_78);
x_3 = x_74;
x_4 = x_73;
goto block_14;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_79 = lean_ctor_get(x_73, 0);
x_80 = lean_ctor_get(x_73, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_73);
lean_inc(x_37);
x_81 = lean_metavar_ctx_erase_delayed(x_79, x_37);
lean_inc(x_74);
x_82 = lean_metavar_ctx_assign_expr(x_81, x_37, x_74);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_80);
x_3 = x_74;
x_4 = x_83;
goto block_14;
}
}
}
else
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_58);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_58, 0);
x_86 = lean_metavar_ctx_assign_delayed(x_85, x_37, x_54, x_55, x_57);
lean_ctor_set(x_58, 0, x_86);
lean_inc(x_1);
x_3 = x_1;
x_4 = x_58;
goto block_14;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_87 = lean_ctor_get(x_58, 0);
x_88 = lean_ctor_get(x_58, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_58);
x_89 = lean_metavar_ctx_assign_delayed(x_87, x_37, x_54, x_55, x_57);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
lean_inc(x_1);
x_3 = x_1;
x_4 = x_90;
goto block_14;
}
}
}
else
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_58);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_58, 0);
x_93 = lean_metavar_ctx_assign_delayed(x_92, x_37, x_54, x_55, x_57);
lean_ctor_set(x_58, 0, x_93);
lean_inc(x_1);
x_3 = x_1;
x_4 = x_58;
goto block_14;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_58, 0);
x_95 = lean_ctor_get(x_58, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_58);
x_96 = lean_metavar_ctx_assign_delayed(x_94, x_37, x_54, x_55, x_57);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
lean_inc(x_1);
x_3 = x_1;
x_4 = x_97;
goto block_14;
}
}
}
}
}
else
{
lean_object* x_125; uint8_t x_126; 
lean_dec(x_50);
x_125 = lean_ctor_get(x_51, 0);
lean_inc(x_125);
lean_dec(x_51);
x_126 = lean_expr_has_expr_mvar(x_125);
if (x_126 == 0)
{
uint8_t x_127; 
x_127 = lean_expr_has_level_mvar(x_125);
if (x_127 == 0)
{
lean_dec(x_48);
x_38 = x_125;
x_39 = x_2;
goto block_47;
}
else
{
lean_object* x_128; 
x_128 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_48, x_125);
lean_dec(x_48);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; 
lean_inc(x_125);
x_129 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_125, x_2);
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
lean_dec(x_129);
x_132 = !lean_is_exclusive(x_130);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
x_134 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_133, x_125, x_131);
lean_ctor_set(x_130, 1, x_134);
x_38 = x_131;
x_39 = x_130;
goto block_47;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_130, 0);
x_136 = lean_ctor_get(x_130, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_130);
lean_inc(x_131);
x_137 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_136, x_125, x_131);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_137);
x_38 = x_131;
x_39 = x_138;
goto block_47;
}
}
else
{
lean_object* x_139; 
lean_dec(x_125);
x_139 = lean_ctor_get(x_128, 0);
lean_inc(x_139);
lean_dec(x_128);
x_38 = x_139;
x_39 = x_2;
goto block_47;
}
}
}
else
{
lean_object* x_140; 
x_140 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_48, x_125);
lean_dec(x_48);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; 
lean_inc(x_125);
x_141 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_125, x_2);
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 0);
lean_inc(x_143);
lean_dec(x_141);
x_144 = !lean_is_exclusive(x_142);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_ctor_get(x_142, 1);
lean_inc(x_143);
x_146 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_145, x_125, x_143);
lean_ctor_set(x_142, 1, x_146);
x_38 = x_143;
x_39 = x_142;
goto block_47;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_147 = lean_ctor_get(x_142, 0);
x_148 = lean_ctor_get(x_142, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_142);
lean_inc(x_143);
x_149 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_148, x_125, x_143);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_149);
x_38 = x_143;
x_39 = x_150;
goto block_47;
}
}
else
{
lean_object* x_151; 
lean_dec(x_125);
x_151 = lean_ctor_get(x_140, 0);
lean_inc(x_151);
lean_dec(x_140);
x_38 = x_151;
x_39 = x_2;
goto block_47;
}
}
}
}
else
{
lean_object* x_152; lean_object* x_153; 
lean_dec(x_48);
lean_dec(x_37);
lean_dec(x_1);
x_152 = lean_ctor_get(x_49, 0);
lean_inc(x_152);
lean_dec(x_49);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_2);
return x_153;
}
block_47:
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_38);
x_42 = lean_metavar_ctx_assign_expr(x_41, x_37, x_38);
lean_ctor_set(x_39, 0, x_42);
x_3 = x_38;
x_4 = x_39;
goto block_14;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_39, 0);
x_44 = lean_ctor_get(x_39, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_39);
lean_inc(x_38);
x_45 = lean_metavar_ctx_assign_expr(x_43, x_37, x_38);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_3 = x_38;
x_4 = x_46;
goto block_14;
}
}
}
case 3:
{
lean_object* x_154; uint8_t x_155; 
x_154 = lean_ctor_get(x_1, 0);
lean_inc(x_154);
x_155 = !lean_is_exclusive(x_2);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_156 = lean_ctor_get(x_2, 0);
x_157 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_154, x_156);
x_158 = !lean_is_exclusive(x_157);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_157, 0);
x_160 = lean_ctor_get(x_157, 1);
lean_ctor_set(x_2, 0, x_160);
x_161 = lean_expr_update_sort(x_1, x_159);
lean_ctor_set(x_157, 1, x_2);
lean_ctor_set(x_157, 0, x_161);
return x_157;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_162 = lean_ctor_get(x_157, 0);
x_163 = lean_ctor_get(x_157, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_157);
lean_ctor_set(x_2, 0, x_163);
x_164 = lean_expr_update_sort(x_1, x_162);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_2);
return x_165;
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_166 = lean_ctor_get(x_2, 0);
x_167 = lean_ctor_get(x_2, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_2);
x_168 = l_Lean_AbstractMetavarContext_instantiateLevelMVars___main___at_Lean_MetavarContext_instantiateLevelMVars___spec__1(x_154, x_166);
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_171 = x_168;
} else {
 lean_dec_ref(x_168);
 x_171 = lean_box(0);
}
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_167);
x_173 = lean_expr_update_sort(x_1, x_169);
if (lean_is_scalar(x_171)) {
 x_174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_174 = x_171;
}
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
case 4:
{
lean_object* x_175; lean_object* x_176; uint8_t x_177; 
x_175 = lean_ctor_get(x_1, 1);
lean_inc(x_175);
x_176 = l_List_mapM___main___at_Lean_MetavarContext_instantiateMVars___spec__6(x_175, x_2);
x_177 = !lean_is_exclusive(x_176);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; 
x_178 = lean_ctor_get(x_176, 0);
x_179 = lean_expr_update_const(x_1, x_178);
lean_ctor_set(x_176, 0, x_179);
return x_176;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_180 = lean_ctor_get(x_176, 0);
x_181 = lean_ctor_get(x_176, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_176);
x_182 = lean_expr_update_const(x_1, x_180);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_181);
return x_183;
}
}
case 5:
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_184 = lean_unsigned_to_nat(0u);
x_185 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_184);
x_186 = lean_mk_empty_array_with_capacity(x_185);
lean_dec(x_185);
x_187 = l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_instantiateMVars___spec__8(x_1, x_186, x_2);
return x_187;
}
case 6:
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_233; 
x_188 = lean_ctor_get(x_1, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_1, 2);
lean_inc(x_189);
x_233 = lean_expr_has_expr_mvar(x_188);
if (x_233 == 0)
{
uint8_t x_234; 
x_234 = lean_expr_has_level_mvar(x_188);
if (x_234 == 0)
{
x_190 = x_188;
x_191 = x_2;
goto block_232;
}
else
{
lean_object* x_235; lean_object* x_236; 
x_235 = lean_ctor_get(x_2, 1);
lean_inc(x_235);
x_236 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_235, x_188);
lean_dec(x_235);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; uint8_t x_240; 
lean_inc(x_188);
x_237 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_188, x_2);
x_238 = lean_ctor_get(x_237, 1);
lean_inc(x_238);
x_239 = lean_ctor_get(x_237, 0);
lean_inc(x_239);
lean_dec(x_237);
x_240 = !lean_is_exclusive(x_238);
if (x_240 == 0)
{
lean_object* x_241; lean_object* x_242; 
x_241 = lean_ctor_get(x_238, 1);
lean_inc(x_239);
x_242 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_241, x_188, x_239);
lean_ctor_set(x_238, 1, x_242);
x_190 = x_239;
x_191 = x_238;
goto block_232;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_243 = lean_ctor_get(x_238, 0);
x_244 = lean_ctor_get(x_238, 1);
lean_inc(x_244);
lean_inc(x_243);
lean_dec(x_238);
lean_inc(x_239);
x_245 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_244, x_188, x_239);
x_246 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_246, 0, x_243);
lean_ctor_set(x_246, 1, x_245);
x_190 = x_239;
x_191 = x_246;
goto block_232;
}
}
else
{
lean_object* x_247; 
lean_dec(x_188);
x_247 = lean_ctor_get(x_236, 0);
lean_inc(x_247);
lean_dec(x_236);
x_190 = x_247;
x_191 = x_2;
goto block_232;
}
}
}
else
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_ctor_get(x_2, 1);
lean_inc(x_248);
x_249 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_248, x_188);
lean_dec(x_248);
if (lean_obj_tag(x_249) == 0)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; uint8_t x_253; 
lean_inc(x_188);
x_250 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_188, x_2);
x_251 = lean_ctor_get(x_250, 1);
lean_inc(x_251);
x_252 = lean_ctor_get(x_250, 0);
lean_inc(x_252);
lean_dec(x_250);
x_253 = !lean_is_exclusive(x_251);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; 
x_254 = lean_ctor_get(x_251, 1);
lean_inc(x_252);
x_255 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_254, x_188, x_252);
lean_ctor_set(x_251, 1, x_255);
x_190 = x_252;
x_191 = x_251;
goto block_232;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_256 = lean_ctor_get(x_251, 0);
x_257 = lean_ctor_get(x_251, 1);
lean_inc(x_257);
lean_inc(x_256);
lean_dec(x_251);
lean_inc(x_252);
x_258 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_257, x_188, x_252);
x_259 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_259, 0, x_256);
lean_ctor_set(x_259, 1, x_258);
x_190 = x_252;
x_191 = x_259;
goto block_232;
}
}
else
{
lean_object* x_260; 
lean_dec(x_188);
x_260 = lean_ctor_get(x_249, 0);
lean_inc(x_260);
lean_dec(x_249);
x_190 = x_260;
x_191 = x_2;
goto block_232;
}
}
block_232:
{
lean_object* x_192; lean_object* x_193; uint8_t x_204; 
x_204 = lean_expr_has_expr_mvar(x_189);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_level_mvar(x_189);
if (x_205 == 0)
{
x_192 = x_189;
x_193 = x_191;
goto block_203;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = lean_ctor_get(x_191, 1);
lean_inc(x_206);
x_207 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_206, x_189);
lean_dec(x_206);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; 
lean_inc(x_189);
x_208 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_189, x_191);
x_209 = lean_ctor_get(x_208, 1);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 0);
lean_inc(x_210);
lean_dec(x_208);
x_211 = !lean_is_exclusive(x_209);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; 
x_212 = lean_ctor_get(x_209, 1);
lean_inc(x_210);
x_213 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_212, x_189, x_210);
lean_ctor_set(x_209, 1, x_213);
x_192 = x_210;
x_193 = x_209;
goto block_203;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_214 = lean_ctor_get(x_209, 0);
x_215 = lean_ctor_get(x_209, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_209);
lean_inc(x_210);
x_216 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_215, x_189, x_210);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_214);
lean_ctor_set(x_217, 1, x_216);
x_192 = x_210;
x_193 = x_217;
goto block_203;
}
}
else
{
lean_object* x_218; 
lean_dec(x_189);
x_218 = lean_ctor_get(x_207, 0);
lean_inc(x_218);
lean_dec(x_207);
x_192 = x_218;
x_193 = x_191;
goto block_203;
}
}
}
else
{
lean_object* x_219; lean_object* x_220; 
x_219 = lean_ctor_get(x_191, 1);
lean_inc(x_219);
x_220 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_219, x_189);
lean_dec(x_219);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; 
lean_inc(x_189);
x_221 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_189, x_191);
x_222 = lean_ctor_get(x_221, 1);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 0);
lean_inc(x_223);
lean_dec(x_221);
x_224 = !lean_is_exclusive(x_222);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; 
x_225 = lean_ctor_get(x_222, 1);
lean_inc(x_223);
x_226 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_225, x_189, x_223);
lean_ctor_set(x_222, 1, x_226);
x_192 = x_223;
x_193 = x_222;
goto block_203;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_227 = lean_ctor_get(x_222, 0);
x_228 = lean_ctor_get(x_222, 1);
lean_inc(x_228);
lean_inc(x_227);
lean_dec(x_222);
lean_inc(x_223);
x_229 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_228, x_189, x_223);
x_230 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_230, 0, x_227);
lean_ctor_set(x_230, 1, x_229);
x_192 = x_223;
x_193 = x_230;
goto block_203;
}
}
else
{
lean_object* x_231; 
lean_dec(x_189);
x_231 = lean_ctor_get(x_220, 0);
lean_inc(x_231);
lean_dec(x_220);
x_192 = x_231;
x_193 = x_191;
goto block_203;
}
}
block_203:
{
if (lean_obj_tag(x_1) == 6)
{
uint8_t x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_195 = lean_expr_update_lambda(x_1, x_194, x_190, x_192);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_193);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_192);
lean_dec(x_190);
lean_dec(x_1);
x_197 = l_Lean_Expr_constName_x21___closed__1;
x_198 = lean_unsigned_to_nat(475u);
x_199 = lean_unsigned_to_nat(18u);
x_200 = l_Lean_Expr_updateLambda_x21___closed__1;
x_201 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_197, x_198, x_199, x_200);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_193);
return x_202;
}
}
}
}
case 7:
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_306; 
x_261 = lean_ctor_get(x_1, 1);
lean_inc(x_261);
x_262 = lean_ctor_get(x_1, 2);
lean_inc(x_262);
x_306 = lean_expr_has_expr_mvar(x_261);
if (x_306 == 0)
{
uint8_t x_307; 
x_307 = lean_expr_has_level_mvar(x_261);
if (x_307 == 0)
{
x_263 = x_261;
x_264 = x_2;
goto block_305;
}
else
{
lean_object* x_308; lean_object* x_309; 
x_308 = lean_ctor_get(x_2, 1);
lean_inc(x_308);
x_309 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_308, x_261);
lean_dec(x_308);
if (lean_obj_tag(x_309) == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; 
lean_inc(x_261);
x_310 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_261, x_2);
x_311 = lean_ctor_get(x_310, 1);
lean_inc(x_311);
x_312 = lean_ctor_get(x_310, 0);
lean_inc(x_312);
lean_dec(x_310);
x_313 = !lean_is_exclusive(x_311);
if (x_313 == 0)
{
lean_object* x_314; lean_object* x_315; 
x_314 = lean_ctor_get(x_311, 1);
lean_inc(x_312);
x_315 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_314, x_261, x_312);
lean_ctor_set(x_311, 1, x_315);
x_263 = x_312;
x_264 = x_311;
goto block_305;
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_316 = lean_ctor_get(x_311, 0);
x_317 = lean_ctor_get(x_311, 1);
lean_inc(x_317);
lean_inc(x_316);
lean_dec(x_311);
lean_inc(x_312);
x_318 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_317, x_261, x_312);
x_319 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_319, 0, x_316);
lean_ctor_set(x_319, 1, x_318);
x_263 = x_312;
x_264 = x_319;
goto block_305;
}
}
else
{
lean_object* x_320; 
lean_dec(x_261);
x_320 = lean_ctor_get(x_309, 0);
lean_inc(x_320);
lean_dec(x_309);
x_263 = x_320;
x_264 = x_2;
goto block_305;
}
}
}
else
{
lean_object* x_321; lean_object* x_322; 
x_321 = lean_ctor_get(x_2, 1);
lean_inc(x_321);
x_322 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_321, x_261);
lean_dec(x_321);
if (lean_obj_tag(x_322) == 0)
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; uint8_t x_326; 
lean_inc(x_261);
x_323 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_261, x_2);
x_324 = lean_ctor_get(x_323, 1);
lean_inc(x_324);
x_325 = lean_ctor_get(x_323, 0);
lean_inc(x_325);
lean_dec(x_323);
x_326 = !lean_is_exclusive(x_324);
if (x_326 == 0)
{
lean_object* x_327; lean_object* x_328; 
x_327 = lean_ctor_get(x_324, 1);
lean_inc(x_325);
x_328 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_327, x_261, x_325);
lean_ctor_set(x_324, 1, x_328);
x_263 = x_325;
x_264 = x_324;
goto block_305;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_329 = lean_ctor_get(x_324, 0);
x_330 = lean_ctor_get(x_324, 1);
lean_inc(x_330);
lean_inc(x_329);
lean_dec(x_324);
lean_inc(x_325);
x_331 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_330, x_261, x_325);
x_332 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_332, 0, x_329);
lean_ctor_set(x_332, 1, x_331);
x_263 = x_325;
x_264 = x_332;
goto block_305;
}
}
else
{
lean_object* x_333; 
lean_dec(x_261);
x_333 = lean_ctor_get(x_322, 0);
lean_inc(x_333);
lean_dec(x_322);
x_263 = x_333;
x_264 = x_2;
goto block_305;
}
}
block_305:
{
lean_object* x_265; lean_object* x_266; uint8_t x_277; 
x_277 = lean_expr_has_expr_mvar(x_262);
if (x_277 == 0)
{
uint8_t x_278; 
x_278 = lean_expr_has_level_mvar(x_262);
if (x_278 == 0)
{
x_265 = x_262;
x_266 = x_264;
goto block_276;
}
else
{
lean_object* x_279; lean_object* x_280; 
x_279 = lean_ctor_get(x_264, 1);
lean_inc(x_279);
x_280 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_279, x_262);
lean_dec(x_279);
if (lean_obj_tag(x_280) == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; 
lean_inc(x_262);
x_281 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_262, x_264);
x_282 = lean_ctor_get(x_281, 1);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 0);
lean_inc(x_283);
lean_dec(x_281);
x_284 = !lean_is_exclusive(x_282);
if (x_284 == 0)
{
lean_object* x_285; lean_object* x_286; 
x_285 = lean_ctor_get(x_282, 1);
lean_inc(x_283);
x_286 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_285, x_262, x_283);
lean_ctor_set(x_282, 1, x_286);
x_265 = x_283;
x_266 = x_282;
goto block_276;
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_287 = lean_ctor_get(x_282, 0);
x_288 = lean_ctor_get(x_282, 1);
lean_inc(x_288);
lean_inc(x_287);
lean_dec(x_282);
lean_inc(x_283);
x_289 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_288, x_262, x_283);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_287);
lean_ctor_set(x_290, 1, x_289);
x_265 = x_283;
x_266 = x_290;
goto block_276;
}
}
else
{
lean_object* x_291; 
lean_dec(x_262);
x_291 = lean_ctor_get(x_280, 0);
lean_inc(x_291);
lean_dec(x_280);
x_265 = x_291;
x_266 = x_264;
goto block_276;
}
}
}
else
{
lean_object* x_292; lean_object* x_293; 
x_292 = lean_ctor_get(x_264, 1);
lean_inc(x_292);
x_293 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_292, x_262);
lean_dec(x_292);
if (lean_obj_tag(x_293) == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; uint8_t x_297; 
lean_inc(x_262);
x_294 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_262, x_264);
x_295 = lean_ctor_get(x_294, 1);
lean_inc(x_295);
x_296 = lean_ctor_get(x_294, 0);
lean_inc(x_296);
lean_dec(x_294);
x_297 = !lean_is_exclusive(x_295);
if (x_297 == 0)
{
lean_object* x_298; lean_object* x_299; 
x_298 = lean_ctor_get(x_295, 1);
lean_inc(x_296);
x_299 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_298, x_262, x_296);
lean_ctor_set(x_295, 1, x_299);
x_265 = x_296;
x_266 = x_295;
goto block_276;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_300 = lean_ctor_get(x_295, 0);
x_301 = lean_ctor_get(x_295, 1);
lean_inc(x_301);
lean_inc(x_300);
lean_dec(x_295);
lean_inc(x_296);
x_302 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_301, x_262, x_296);
x_303 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_303, 0, x_300);
lean_ctor_set(x_303, 1, x_302);
x_265 = x_296;
x_266 = x_303;
goto block_276;
}
}
else
{
lean_object* x_304; 
lean_dec(x_262);
x_304 = lean_ctor_get(x_293, 0);
lean_inc(x_304);
lean_dec(x_293);
x_265 = x_304;
x_266 = x_264;
goto block_276;
}
}
block_276:
{
if (lean_obj_tag(x_1) == 7)
{
uint8_t x_267; lean_object* x_268; lean_object* x_269; 
x_267 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_268 = lean_expr_update_forall(x_1, x_267, x_263, x_265);
x_269 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_266);
return x_269;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_265);
lean_dec(x_263);
lean_dec(x_1);
x_270 = l_Lean_Expr_constName_x21___closed__1;
x_271 = lean_unsigned_to_nat(461u);
x_272 = lean_unsigned_to_nat(22u);
x_273 = l_Lean_Expr_updateForall_x21___closed__1;
x_274 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_270, x_271, x_272, x_273);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_274);
lean_ctor_set(x_275, 1, x_266);
return x_275;
}
}
}
}
case 8:
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_410; 
x_334 = lean_ctor_get(x_1, 1);
lean_inc(x_334);
x_335 = lean_ctor_get(x_1, 2);
lean_inc(x_335);
x_336 = lean_ctor_get(x_1, 3);
lean_inc(x_336);
x_410 = lean_expr_has_expr_mvar(x_334);
if (x_410 == 0)
{
uint8_t x_411; 
x_411 = lean_expr_has_level_mvar(x_334);
if (x_411 == 0)
{
x_337 = x_334;
x_338 = x_2;
goto block_409;
}
else
{
lean_object* x_412; lean_object* x_413; 
x_412 = lean_ctor_get(x_2, 1);
lean_inc(x_412);
x_413 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_412, x_334);
lean_dec(x_412);
if (lean_obj_tag(x_413) == 0)
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; uint8_t x_417; 
lean_inc(x_334);
x_414 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_334, x_2);
x_415 = lean_ctor_get(x_414, 1);
lean_inc(x_415);
x_416 = lean_ctor_get(x_414, 0);
lean_inc(x_416);
lean_dec(x_414);
x_417 = !lean_is_exclusive(x_415);
if (x_417 == 0)
{
lean_object* x_418; lean_object* x_419; 
x_418 = lean_ctor_get(x_415, 1);
lean_inc(x_416);
x_419 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_418, x_334, x_416);
lean_ctor_set(x_415, 1, x_419);
x_337 = x_416;
x_338 = x_415;
goto block_409;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
x_420 = lean_ctor_get(x_415, 0);
x_421 = lean_ctor_get(x_415, 1);
lean_inc(x_421);
lean_inc(x_420);
lean_dec(x_415);
lean_inc(x_416);
x_422 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_421, x_334, x_416);
x_423 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_423, 0, x_420);
lean_ctor_set(x_423, 1, x_422);
x_337 = x_416;
x_338 = x_423;
goto block_409;
}
}
else
{
lean_object* x_424; 
lean_dec(x_334);
x_424 = lean_ctor_get(x_413, 0);
lean_inc(x_424);
lean_dec(x_413);
x_337 = x_424;
x_338 = x_2;
goto block_409;
}
}
}
else
{
lean_object* x_425; lean_object* x_426; 
x_425 = lean_ctor_get(x_2, 1);
lean_inc(x_425);
x_426 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_425, x_334);
lean_dec(x_425);
if (lean_obj_tag(x_426) == 0)
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; uint8_t x_430; 
lean_inc(x_334);
x_427 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_334, x_2);
x_428 = lean_ctor_get(x_427, 1);
lean_inc(x_428);
x_429 = lean_ctor_get(x_427, 0);
lean_inc(x_429);
lean_dec(x_427);
x_430 = !lean_is_exclusive(x_428);
if (x_430 == 0)
{
lean_object* x_431; lean_object* x_432; 
x_431 = lean_ctor_get(x_428, 1);
lean_inc(x_429);
x_432 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_431, x_334, x_429);
lean_ctor_set(x_428, 1, x_432);
x_337 = x_429;
x_338 = x_428;
goto block_409;
}
else
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; 
x_433 = lean_ctor_get(x_428, 0);
x_434 = lean_ctor_get(x_428, 1);
lean_inc(x_434);
lean_inc(x_433);
lean_dec(x_428);
lean_inc(x_429);
x_435 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_434, x_334, x_429);
x_436 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_436, 0, x_433);
lean_ctor_set(x_436, 1, x_435);
x_337 = x_429;
x_338 = x_436;
goto block_409;
}
}
else
{
lean_object* x_437; 
lean_dec(x_334);
x_437 = lean_ctor_get(x_426, 0);
lean_inc(x_437);
lean_dec(x_426);
x_337 = x_437;
x_338 = x_2;
goto block_409;
}
}
block_409:
{
lean_object* x_339; lean_object* x_340; uint8_t x_381; 
x_381 = lean_expr_has_expr_mvar(x_335);
if (x_381 == 0)
{
uint8_t x_382; 
x_382 = lean_expr_has_level_mvar(x_335);
if (x_382 == 0)
{
x_339 = x_335;
x_340 = x_338;
goto block_380;
}
else
{
lean_object* x_383; lean_object* x_384; 
x_383 = lean_ctor_get(x_338, 1);
lean_inc(x_383);
x_384 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_383, x_335);
lean_dec(x_383);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; uint8_t x_388; 
lean_inc(x_335);
x_385 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_335, x_338);
x_386 = lean_ctor_get(x_385, 1);
lean_inc(x_386);
x_387 = lean_ctor_get(x_385, 0);
lean_inc(x_387);
lean_dec(x_385);
x_388 = !lean_is_exclusive(x_386);
if (x_388 == 0)
{
lean_object* x_389; lean_object* x_390; 
x_389 = lean_ctor_get(x_386, 1);
lean_inc(x_387);
x_390 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_389, x_335, x_387);
lean_ctor_set(x_386, 1, x_390);
x_339 = x_387;
x_340 = x_386;
goto block_380;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_391 = lean_ctor_get(x_386, 0);
x_392 = lean_ctor_get(x_386, 1);
lean_inc(x_392);
lean_inc(x_391);
lean_dec(x_386);
lean_inc(x_387);
x_393 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_392, x_335, x_387);
x_394 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_394, 0, x_391);
lean_ctor_set(x_394, 1, x_393);
x_339 = x_387;
x_340 = x_394;
goto block_380;
}
}
else
{
lean_object* x_395; 
lean_dec(x_335);
x_395 = lean_ctor_get(x_384, 0);
lean_inc(x_395);
lean_dec(x_384);
x_339 = x_395;
x_340 = x_338;
goto block_380;
}
}
}
else
{
lean_object* x_396; lean_object* x_397; 
x_396 = lean_ctor_get(x_338, 1);
lean_inc(x_396);
x_397 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_396, x_335);
lean_dec(x_396);
if (lean_obj_tag(x_397) == 0)
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; uint8_t x_401; 
lean_inc(x_335);
x_398 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_335, x_338);
x_399 = lean_ctor_get(x_398, 1);
lean_inc(x_399);
x_400 = lean_ctor_get(x_398, 0);
lean_inc(x_400);
lean_dec(x_398);
x_401 = !lean_is_exclusive(x_399);
if (x_401 == 0)
{
lean_object* x_402; lean_object* x_403; 
x_402 = lean_ctor_get(x_399, 1);
lean_inc(x_400);
x_403 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_402, x_335, x_400);
lean_ctor_set(x_399, 1, x_403);
x_339 = x_400;
x_340 = x_399;
goto block_380;
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
x_404 = lean_ctor_get(x_399, 0);
x_405 = lean_ctor_get(x_399, 1);
lean_inc(x_405);
lean_inc(x_404);
lean_dec(x_399);
lean_inc(x_400);
x_406 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_405, x_335, x_400);
x_407 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_407, 0, x_404);
lean_ctor_set(x_407, 1, x_406);
x_339 = x_400;
x_340 = x_407;
goto block_380;
}
}
else
{
lean_object* x_408; 
lean_dec(x_335);
x_408 = lean_ctor_get(x_397, 0);
lean_inc(x_408);
lean_dec(x_397);
x_339 = x_408;
x_340 = x_338;
goto block_380;
}
}
block_380:
{
lean_object* x_341; lean_object* x_342; uint8_t x_352; 
x_352 = lean_expr_has_expr_mvar(x_336);
if (x_352 == 0)
{
uint8_t x_353; 
x_353 = lean_expr_has_level_mvar(x_336);
if (x_353 == 0)
{
x_341 = x_336;
x_342 = x_340;
goto block_351;
}
else
{
lean_object* x_354; lean_object* x_355; 
x_354 = lean_ctor_get(x_340, 1);
lean_inc(x_354);
x_355 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_354, x_336);
lean_dec(x_354);
if (lean_obj_tag(x_355) == 0)
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; uint8_t x_359; 
lean_inc(x_336);
x_356 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_336, x_340);
x_357 = lean_ctor_get(x_356, 1);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 0);
lean_inc(x_358);
lean_dec(x_356);
x_359 = !lean_is_exclusive(x_357);
if (x_359 == 0)
{
lean_object* x_360; lean_object* x_361; 
x_360 = lean_ctor_get(x_357, 1);
lean_inc(x_358);
x_361 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_360, x_336, x_358);
lean_ctor_set(x_357, 1, x_361);
x_341 = x_358;
x_342 = x_357;
goto block_351;
}
else
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; 
x_362 = lean_ctor_get(x_357, 0);
x_363 = lean_ctor_get(x_357, 1);
lean_inc(x_363);
lean_inc(x_362);
lean_dec(x_357);
lean_inc(x_358);
x_364 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_363, x_336, x_358);
x_365 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_365, 0, x_362);
lean_ctor_set(x_365, 1, x_364);
x_341 = x_358;
x_342 = x_365;
goto block_351;
}
}
else
{
lean_object* x_366; 
lean_dec(x_336);
x_366 = lean_ctor_get(x_355, 0);
lean_inc(x_366);
lean_dec(x_355);
x_341 = x_366;
x_342 = x_340;
goto block_351;
}
}
}
else
{
lean_object* x_367; lean_object* x_368; 
x_367 = lean_ctor_get(x_340, 1);
lean_inc(x_367);
x_368 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_367, x_336);
lean_dec(x_367);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; 
lean_inc(x_336);
x_369 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_336, x_340);
x_370 = lean_ctor_get(x_369, 1);
lean_inc(x_370);
x_371 = lean_ctor_get(x_369, 0);
lean_inc(x_371);
lean_dec(x_369);
x_372 = !lean_is_exclusive(x_370);
if (x_372 == 0)
{
lean_object* x_373; lean_object* x_374; 
x_373 = lean_ctor_get(x_370, 1);
lean_inc(x_371);
x_374 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_373, x_336, x_371);
lean_ctor_set(x_370, 1, x_374);
x_341 = x_371;
x_342 = x_370;
goto block_351;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
x_375 = lean_ctor_get(x_370, 0);
x_376 = lean_ctor_get(x_370, 1);
lean_inc(x_376);
lean_inc(x_375);
lean_dec(x_370);
lean_inc(x_371);
x_377 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_376, x_336, x_371);
x_378 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_378, 0, x_375);
lean_ctor_set(x_378, 1, x_377);
x_341 = x_371;
x_342 = x_378;
goto block_351;
}
}
else
{
lean_object* x_379; 
lean_dec(x_336);
x_379 = lean_ctor_get(x_368, 0);
lean_inc(x_379);
lean_dec(x_368);
x_341 = x_379;
x_342 = x_340;
goto block_351;
}
}
block_351:
{
if (lean_obj_tag(x_1) == 8)
{
lean_object* x_343; lean_object* x_344; 
x_343 = lean_expr_update_let(x_1, x_337, x_339, x_341);
x_344 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_344, 0, x_343);
lean_ctor_set(x_344, 1, x_342);
return x_344;
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
lean_dec(x_341);
lean_dec(x_339);
lean_dec(x_337);
lean_dec(x_1);
x_345 = l_Lean_Expr_constName_x21___closed__1;
x_346 = lean_unsigned_to_nat(484u);
x_347 = lean_unsigned_to_nat(18u);
x_348 = l_Lean_Expr_letName_x21___closed__1;
x_349 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_345, x_346, x_347, x_348);
x_350 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_342);
return x_350;
}
}
}
}
}
case 10:
{
lean_object* x_438; uint8_t x_439; 
x_438 = lean_ctor_get(x_1, 1);
lean_inc(x_438);
x_439 = lean_expr_has_expr_mvar(x_438);
if (x_439 == 0)
{
uint8_t x_440; 
x_440 = lean_expr_has_level_mvar(x_438);
if (x_440 == 0)
{
x_15 = x_438;
x_16 = x_2;
goto block_25;
}
else
{
lean_object* x_441; lean_object* x_442; 
x_441 = lean_ctor_get(x_2, 1);
lean_inc(x_441);
x_442 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_441, x_438);
lean_dec(x_441);
if (lean_obj_tag(x_442) == 0)
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; uint8_t x_446; 
lean_inc(x_438);
x_443 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_438, x_2);
x_444 = lean_ctor_get(x_443, 1);
lean_inc(x_444);
x_445 = lean_ctor_get(x_443, 0);
lean_inc(x_445);
lean_dec(x_443);
x_446 = !lean_is_exclusive(x_444);
if (x_446 == 0)
{
lean_object* x_447; lean_object* x_448; 
x_447 = lean_ctor_get(x_444, 1);
lean_inc(x_445);
x_448 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_447, x_438, x_445);
lean_ctor_set(x_444, 1, x_448);
x_15 = x_445;
x_16 = x_444;
goto block_25;
}
else
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; 
x_449 = lean_ctor_get(x_444, 0);
x_450 = lean_ctor_get(x_444, 1);
lean_inc(x_450);
lean_inc(x_449);
lean_dec(x_444);
lean_inc(x_445);
x_451 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_450, x_438, x_445);
x_452 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_452, 0, x_449);
lean_ctor_set(x_452, 1, x_451);
x_15 = x_445;
x_16 = x_452;
goto block_25;
}
}
else
{
lean_object* x_453; 
lean_dec(x_438);
x_453 = lean_ctor_get(x_442, 0);
lean_inc(x_453);
lean_dec(x_442);
x_15 = x_453;
x_16 = x_2;
goto block_25;
}
}
}
else
{
lean_object* x_454; lean_object* x_455; 
x_454 = lean_ctor_get(x_2, 1);
lean_inc(x_454);
x_455 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_454, x_438);
lean_dec(x_454);
if (lean_obj_tag(x_455) == 0)
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; uint8_t x_459; 
lean_inc(x_438);
x_456 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_438, x_2);
x_457 = lean_ctor_get(x_456, 1);
lean_inc(x_457);
x_458 = lean_ctor_get(x_456, 0);
lean_inc(x_458);
lean_dec(x_456);
x_459 = !lean_is_exclusive(x_457);
if (x_459 == 0)
{
lean_object* x_460; lean_object* x_461; 
x_460 = lean_ctor_get(x_457, 1);
lean_inc(x_458);
x_461 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_460, x_438, x_458);
lean_ctor_set(x_457, 1, x_461);
x_15 = x_458;
x_16 = x_457;
goto block_25;
}
else
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_462 = lean_ctor_get(x_457, 0);
x_463 = lean_ctor_get(x_457, 1);
lean_inc(x_463);
lean_inc(x_462);
lean_dec(x_457);
lean_inc(x_458);
x_464 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_463, x_438, x_458);
x_465 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_465, 0, x_462);
lean_ctor_set(x_465, 1, x_464);
x_15 = x_458;
x_16 = x_465;
goto block_25;
}
}
else
{
lean_object* x_466; 
lean_dec(x_438);
x_466 = lean_ctor_get(x_455, 0);
lean_inc(x_466);
lean_dec(x_455);
x_15 = x_466;
x_16 = x_2;
goto block_25;
}
}
}
case 11:
{
lean_object* x_467; uint8_t x_468; 
x_467 = lean_ctor_get(x_1, 2);
lean_inc(x_467);
x_468 = lean_expr_has_expr_mvar(x_467);
if (x_468 == 0)
{
uint8_t x_469; 
x_469 = lean_expr_has_level_mvar(x_467);
if (x_469 == 0)
{
x_26 = x_467;
x_27 = x_2;
goto block_36;
}
else
{
lean_object* x_470; lean_object* x_471; 
x_470 = lean_ctor_get(x_2, 1);
lean_inc(x_470);
x_471 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_470, x_467);
lean_dec(x_470);
if (lean_obj_tag(x_471) == 0)
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; 
lean_inc(x_467);
x_472 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_467, x_2);
x_473 = lean_ctor_get(x_472, 1);
lean_inc(x_473);
x_474 = lean_ctor_get(x_472, 0);
lean_inc(x_474);
lean_dec(x_472);
x_475 = !lean_is_exclusive(x_473);
if (x_475 == 0)
{
lean_object* x_476; lean_object* x_477; 
x_476 = lean_ctor_get(x_473, 1);
lean_inc(x_474);
x_477 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_476, x_467, x_474);
lean_ctor_set(x_473, 1, x_477);
x_26 = x_474;
x_27 = x_473;
goto block_36;
}
else
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; 
x_478 = lean_ctor_get(x_473, 0);
x_479 = lean_ctor_get(x_473, 1);
lean_inc(x_479);
lean_inc(x_478);
lean_dec(x_473);
lean_inc(x_474);
x_480 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_479, x_467, x_474);
x_481 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_481, 0, x_478);
lean_ctor_set(x_481, 1, x_480);
x_26 = x_474;
x_27 = x_481;
goto block_36;
}
}
else
{
lean_object* x_482; 
lean_dec(x_467);
x_482 = lean_ctor_get(x_471, 0);
lean_inc(x_482);
lean_dec(x_471);
x_26 = x_482;
x_27 = x_2;
goto block_36;
}
}
}
else
{
lean_object* x_483; lean_object* x_484; 
x_483 = lean_ctor_get(x_2, 1);
lean_inc(x_483);
x_484 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_483, x_467);
lean_dec(x_483);
if (lean_obj_tag(x_484) == 0)
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; uint8_t x_488; 
lean_inc(x_467);
x_485 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_467, x_2);
x_486 = lean_ctor_get(x_485, 1);
lean_inc(x_486);
x_487 = lean_ctor_get(x_485, 0);
lean_inc(x_487);
lean_dec(x_485);
x_488 = !lean_is_exclusive(x_486);
if (x_488 == 0)
{
lean_object* x_489; lean_object* x_490; 
x_489 = lean_ctor_get(x_486, 1);
lean_inc(x_487);
x_490 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_489, x_467, x_487);
lean_ctor_set(x_486, 1, x_490);
x_26 = x_487;
x_27 = x_486;
goto block_36;
}
else
{
lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; 
x_491 = lean_ctor_get(x_486, 0);
x_492 = lean_ctor_get(x_486, 1);
lean_inc(x_492);
lean_inc(x_491);
lean_dec(x_486);
lean_inc(x_487);
x_493 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_492, x_467, x_487);
x_494 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_494, 0, x_491);
lean_ctor_set(x_494, 1, x_493);
x_26 = x_487;
x_27 = x_494;
goto block_36;
}
}
else
{
lean_object* x_495; 
lean_dec(x_467);
x_495 = lean_ctor_get(x_484, 0);
lean_inc(x_495);
lean_dec(x_484);
x_26 = x_495;
x_27 = x_2;
goto block_36;
}
}
}
default: 
{
lean_object* x_496; 
x_496 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_496, 0, x_1);
lean_ctor_set(x_496, 1, x_2);
return x_496;
}
}
block_14:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
x_7 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_6, x_1, x_3);
lean_ctor_set(x_4, 1, x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
lean_inc(x_3);
x_11 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_10, x_1, x_3);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
block_25:
{
if (lean_obj_tag(x_1) == 10)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_expr_update_mdata(x_1, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_15);
lean_dec(x_1);
x_19 = l_Lean_Expr_constName_x21___closed__1;
x_20 = lean_unsigned_to_nat(442u);
x_21 = lean_unsigned_to_nat(15u);
x_22 = l_Lean_Expr_updateMData_x21___closed__1;
x_23 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_19, x_20, x_21, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_16);
return x_24;
}
}
block_36:
{
if (lean_obj_tag(x_1) == 11)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_expr_update_proj(x_1, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_26);
lean_dec(x_1);
x_30 = l_Lean_Expr_constName_x21___closed__1;
x_31 = lean_unsigned_to_nat(447u);
x_32 = lean_unsigned_to_nat(16u);
x_33 = l_Lean_Expr_updateProj_x21___closed__1;
x_34 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_30, x_31, x_32, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_27);
return x_35;
}
}
}
}
lean_object* l_Lean_AbstractMetavarContext_instantiateMVars___at_Lean_MetavarContext_instantiateMVars___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_expr_has_expr_mvar(x_1);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = lean_expr_has_level_mvar(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_HashMap_Inhabited___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 1);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
lean_ctor_set(x_8, 1, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = l_HashMap_Inhabited___closed__1;
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_main___main___at_Lean_MetavarContext_instantiateMVars___spec__2(x_1, x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 1);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
lean_ctor_set(x_18, 1, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_AbstractMetavarContext_instantiateMVars___at_Lean_MetavarContext_instantiateMVars___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_panicWithPos___at_Lean_MetavarContext_instantiateMVars___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_panicWithPos___at_Lean_MetavarContext_instantiateMVars___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___at_Lean_MetavarContext_instantiateMVars___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___at_Lean_MetavarContext_instantiateMVars___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_LocalDecl_name(x_1);
x_9 = l_Lean_Expr_fvarId_x21(x_7);
lean_dec(x_7);
x_10 = lean_name_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_3 = x_12;
goto _start;
}
else
{
lean_dec(x_3);
return x_10;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_Expr_fvarId_x21(x_7);
lean_dec(x_7);
x_9 = lean_name_dec_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_dec(x_3);
return x_9;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__9(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__10(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__11(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__9(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__12(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__8(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__15(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__16(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__17(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__15(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__18(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__14(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__21(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__21(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__22(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__23(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__20(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__21(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__24(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__20(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__28(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__27(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__29(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__27(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__28(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__29(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__30(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__26(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__27(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__30(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__26(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__34(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__33(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__35(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__33(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__34(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__35(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__36(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__32(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__33(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__36(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__32(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__40(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__39(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__41(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__39(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__40(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__41(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__42(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__38(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__39(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__42(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__38(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__46(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__45(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__47(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__45(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__46(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__47(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__48(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__44(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__45(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__48(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__44(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__52(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__51(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__53(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__51(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__52(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__53(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__54(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__50(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__51(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__54(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__50(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__58(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__57(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_8;
}
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__59(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__57(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__58(x_1, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__59(x_1, x_6, x_7);
return x_8;
}
}
}
uint8_t l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__60(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_2, x_3);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Lean_LocalDecl_name(x_11);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_12, x_1, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_3);
return x_14;
}
}
}
}
}
uint8_t l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__56(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__57(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__60(x_1, x_5, x_6);
return x_7;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_5, x_1, x_6);
lean_dec(x_5);
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_metavar_ctx_get_expr_assignment(x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_MetavarContext_getDecl(x_2, x_10);
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__56(x_1, x_14);
lean_dec(x_14);
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_28; 
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
lean_dec(x_11);
x_28 = lean_expr_has_expr_mvar(x_18);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = lean_expr_has_level_mvar(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = lean_expr_has_fvar(x_18);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_18);
lean_dec(x_2);
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_4);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_box(0);
x_19 = x_34;
goto block_27;
}
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_19 = x_35;
goto block_27;
}
}
else
{
lean_object* x_36; 
x_36 = lean_box(0);
x_19 = x_36;
goto block_27;
}
block_27:
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_18);
x_22 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_18, x_21);
x_3 = x_18;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_18);
lean_dec(x_2);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
}
case 5:
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_64; uint8_t x_74; 
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
lean_dec(x_3);
x_74 = lean_expr_has_expr_mvar(x_38);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = lean_expr_has_level_mvar(x_38);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_fvar(x_38);
if (x_76 == 0)
{
uint8_t x_77; 
lean_dec(x_38);
x_77 = 0;
x_39 = x_77;
x_40 = x_4;
goto block_63;
}
else
{
lean_object* x_78; 
x_78 = lean_box(0);
x_64 = x_78;
goto block_73;
}
}
else
{
lean_object* x_79; 
x_79 = lean_box(0);
x_64 = x_79;
goto block_73;
}
}
else
{
lean_object* x_80; 
x_80 = lean_box(0);
x_64 = x_80;
goto block_73;
}
block_63:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = l_Lean_Expr_isApp(x_37);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_51; 
x_51 = lean_expr_has_expr_mvar(x_37);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = lean_expr_has_level_mvar(x_37);
if (x_52 == 0)
{
uint8_t x_53; 
x_53 = lean_expr_has_fvar(x_37);
if (x_53 == 0)
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_37);
lean_dec(x_2);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_40);
return x_56;
}
else
{
lean_object* x_57; 
x_57 = lean_box(0);
x_42 = x_57;
goto block_50;
}
}
else
{
lean_object* x_58; 
x_58 = lean_box(0);
x_42 = x_58;
goto block_50;
}
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_42 = x_59;
goto block_50;
}
block_50:
{
uint8_t x_43; 
lean_dec(x_42);
x_43 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_40, x_37);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
lean_inc(x_37);
x_45 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_40, x_37, x_44);
x_3 = x_37;
x_4 = x_45;
goto _start;
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_37);
lean_dec(x_2);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_40);
return x_49;
}
}
}
else
{
x_3 = x_37;
x_4 = x_40;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_37);
lean_dec(x_2);
x_61 = lean_box(x_39);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_40);
return x_62;
}
}
block_73:
{
uint8_t x_65; 
lean_dec(x_64);
x_65 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_38);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_66 = lean_box(0);
lean_inc(x_38);
x_67 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_38, x_66);
lean_inc(x_2);
x_68 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(x_1, x_2, x_38, x_67);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_39 = x_71;
x_40 = x_70;
goto block_63;
}
else
{
uint8_t x_72; 
lean_dec(x_38);
x_72 = 0;
x_39 = x_72;
x_40 = x_4;
goto block_63;
}
}
}
case 6:
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_106; uint8_t x_116; 
x_81 = lean_ctor_get(x_3, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_3, 2);
lean_inc(x_82);
lean_dec(x_3);
x_116 = lean_expr_has_expr_mvar(x_81);
if (x_116 == 0)
{
uint8_t x_117; 
x_117 = lean_expr_has_level_mvar(x_81);
if (x_117 == 0)
{
uint8_t x_118; 
x_118 = lean_expr_has_fvar(x_81);
if (x_118 == 0)
{
uint8_t x_119; 
lean_dec(x_81);
x_119 = 0;
x_83 = x_119;
x_84 = x_4;
goto block_105;
}
else
{
lean_object* x_120; 
x_120 = lean_box(0);
x_106 = x_120;
goto block_115;
}
}
else
{
lean_object* x_121; 
x_121 = lean_box(0);
x_106 = x_121;
goto block_115;
}
}
else
{
lean_object* x_122; 
x_122 = lean_box(0);
x_106 = x_122;
goto block_115;
}
block_105:
{
if (x_83 == 0)
{
lean_object* x_85; uint8_t x_94; 
x_94 = lean_expr_has_expr_mvar(x_82);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = lean_expr_has_level_mvar(x_82);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = lean_expr_has_fvar(x_82);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_82);
lean_dec(x_2);
x_97 = 0;
x_98 = lean_box(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_84);
return x_99;
}
else
{
lean_object* x_100; 
x_100 = lean_box(0);
x_85 = x_100;
goto block_93;
}
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_85 = x_101;
goto block_93;
}
}
else
{
lean_object* x_102; 
x_102 = lean_box(0);
x_85 = x_102;
goto block_93;
}
block_93:
{
uint8_t x_86; 
lean_dec(x_85);
x_86 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_84, x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_box(0);
lean_inc(x_82);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_84, x_82, x_87);
x_3 = x_82;
x_4 = x_88;
goto _start;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_82);
lean_dec(x_2);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_82);
lean_dec(x_2);
x_103 = lean_box(x_83);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_84);
return x_104;
}
}
block_115:
{
uint8_t x_107; 
lean_dec(x_106);
x_107 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_81);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_box(0);
lean_inc(x_81);
x_109 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_81, x_108);
lean_inc(x_2);
x_110 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(x_1, x_2, x_81, x_109);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
x_113 = lean_unbox(x_111);
lean_dec(x_111);
x_83 = x_113;
x_84 = x_112;
goto block_105;
}
else
{
uint8_t x_114; 
lean_dec(x_81);
x_114 = 0;
x_83 = x_114;
x_84 = x_4;
goto block_105;
}
}
}
case 7:
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_148; uint8_t x_158; 
x_123 = lean_ctor_get(x_3, 1);
lean_inc(x_123);
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
lean_dec(x_3);
x_158 = lean_expr_has_expr_mvar(x_123);
if (x_158 == 0)
{
uint8_t x_159; 
x_159 = lean_expr_has_level_mvar(x_123);
if (x_159 == 0)
{
uint8_t x_160; 
x_160 = lean_expr_has_fvar(x_123);
if (x_160 == 0)
{
uint8_t x_161; 
lean_dec(x_123);
x_161 = 0;
x_125 = x_161;
x_126 = x_4;
goto block_147;
}
else
{
lean_object* x_162; 
x_162 = lean_box(0);
x_148 = x_162;
goto block_157;
}
}
else
{
lean_object* x_163; 
x_163 = lean_box(0);
x_148 = x_163;
goto block_157;
}
}
else
{
lean_object* x_164; 
x_164 = lean_box(0);
x_148 = x_164;
goto block_157;
}
block_147:
{
if (x_125 == 0)
{
lean_object* x_127; uint8_t x_136; 
x_136 = lean_expr_has_expr_mvar(x_124);
if (x_136 == 0)
{
uint8_t x_137; 
x_137 = lean_expr_has_level_mvar(x_124);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = lean_expr_has_fvar(x_124);
if (x_138 == 0)
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_124);
lean_dec(x_2);
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_126);
return x_141;
}
else
{
lean_object* x_142; 
x_142 = lean_box(0);
x_127 = x_142;
goto block_135;
}
}
else
{
lean_object* x_143; 
x_143 = lean_box(0);
x_127 = x_143;
goto block_135;
}
}
else
{
lean_object* x_144; 
x_144 = lean_box(0);
x_127 = x_144;
goto block_135;
}
block_135:
{
uint8_t x_128; 
lean_dec(x_127);
x_128 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_126, x_124);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_box(0);
lean_inc(x_124);
x_130 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_126, x_124, x_129);
x_3 = x_124;
x_4 = x_130;
goto _start;
}
else
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_124);
lean_dec(x_2);
x_132 = 0;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_126);
return x_134;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_124);
lean_dec(x_2);
x_145 = lean_box(x_125);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_126);
return x_146;
}
}
block_157:
{
uint8_t x_149; 
lean_dec(x_148);
x_149 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_123);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_150 = lean_box(0);
lean_inc(x_123);
x_151 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_123, x_150);
lean_inc(x_2);
x_152 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(x_1, x_2, x_123, x_151);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_unbox(x_153);
lean_dec(x_153);
x_125 = x_155;
x_126 = x_154;
goto block_147;
}
else
{
uint8_t x_156; 
lean_dec(x_123);
x_156 = 0;
x_125 = x_156;
x_126 = x_4;
goto block_147;
}
}
}
case 8:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_191; lean_object* x_192; lean_object* x_211; uint8_t x_221; 
x_165 = lean_ctor_get(x_3, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_3, 2);
lean_inc(x_166);
x_167 = lean_ctor_get(x_3, 3);
lean_inc(x_167);
lean_dec(x_3);
x_221 = lean_expr_has_expr_mvar(x_165);
if (x_221 == 0)
{
uint8_t x_222; 
x_222 = lean_expr_has_level_mvar(x_165);
if (x_222 == 0)
{
uint8_t x_223; 
x_223 = lean_expr_has_fvar(x_165);
if (x_223 == 0)
{
uint8_t x_224; 
lean_dec(x_165);
x_224 = 0;
x_191 = x_224;
x_192 = x_4;
goto block_210;
}
else
{
lean_object* x_225; 
x_225 = lean_box(0);
x_211 = x_225;
goto block_220;
}
}
else
{
lean_object* x_226; 
x_226 = lean_box(0);
x_211 = x_226;
goto block_220;
}
}
else
{
lean_object* x_227; 
x_227 = lean_box(0);
x_211 = x_227;
goto block_220;
}
block_190:
{
if (x_168 == 0)
{
lean_object* x_170; uint8_t x_179; 
x_179 = lean_expr_has_expr_mvar(x_167);
if (x_179 == 0)
{
uint8_t x_180; 
x_180 = lean_expr_has_level_mvar(x_167);
if (x_180 == 0)
{
uint8_t x_181; 
x_181 = lean_expr_has_fvar(x_167);
if (x_181 == 0)
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_167);
lean_dec(x_2);
x_182 = 0;
x_183 = lean_box(x_182);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_169);
return x_184;
}
else
{
lean_object* x_185; 
x_185 = lean_box(0);
x_170 = x_185;
goto block_178;
}
}
else
{
lean_object* x_186; 
x_186 = lean_box(0);
x_170 = x_186;
goto block_178;
}
}
else
{
lean_object* x_187; 
x_187 = lean_box(0);
x_170 = x_187;
goto block_178;
}
block_178:
{
uint8_t x_171; 
lean_dec(x_170);
x_171 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_169, x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_box(0);
lean_inc(x_167);
x_173 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_169, x_167, x_172);
x_3 = x_167;
x_4 = x_173;
goto _start;
}
else
{
uint8_t x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_167);
lean_dec(x_2);
x_175 = 0;
x_176 = lean_box(x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
return x_177;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_167);
lean_dec(x_2);
x_188 = lean_box(x_168);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_169);
return x_189;
}
}
block_210:
{
lean_object* x_193; 
if (x_191 == 0)
{
uint8_t x_203; 
x_203 = lean_expr_has_expr_mvar(x_166);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_166);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_fvar(x_166);
if (x_205 == 0)
{
uint8_t x_206; 
lean_dec(x_166);
x_206 = 0;
x_168 = x_206;
x_169 = x_192;
goto block_190;
}
else
{
lean_object* x_207; 
x_207 = lean_box(0);
x_193 = x_207;
goto block_202;
}
}
else
{
lean_object* x_208; 
x_208 = lean_box(0);
x_193 = x_208;
goto block_202;
}
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_193 = x_209;
goto block_202;
}
}
else
{
lean_dec(x_166);
x_168 = x_191;
x_169 = x_192;
goto block_190;
}
block_202:
{
uint8_t x_194; 
lean_dec(x_193);
x_194 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_192, x_166);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_195 = lean_box(0);
lean_inc(x_166);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_192, x_166, x_195);
lean_inc(x_2);
x_197 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(x_1, x_2, x_166, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_unbox(x_198);
lean_dec(x_198);
x_168 = x_200;
x_169 = x_199;
goto block_190;
}
else
{
uint8_t x_201; 
lean_dec(x_166);
x_201 = 0;
x_168 = x_201;
x_169 = x_192;
goto block_190;
}
}
}
block_220:
{
uint8_t x_212; 
lean_dec(x_211);
x_212 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_165);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_213 = lean_box(0);
lean_inc(x_165);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_165, x_213);
lean_inc(x_2);
x_215 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(x_1, x_2, x_165, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_unbox(x_216);
lean_dec(x_216);
x_191 = x_218;
x_192 = x_217;
goto block_210;
}
else
{
uint8_t x_219; 
lean_dec(x_165);
x_219 = 0;
x_191 = x_219;
x_192 = x_4;
goto block_210;
}
}
}
case 10:
{
lean_object* x_228; lean_object* x_229; uint8_t x_238; 
x_228 = lean_ctor_get(x_3, 1);
lean_inc(x_228);
lean_dec(x_3);
x_238 = lean_expr_has_expr_mvar(x_228);
if (x_238 == 0)
{
uint8_t x_239; 
x_239 = lean_expr_has_level_mvar(x_228);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = lean_expr_has_fvar(x_228);
if (x_240 == 0)
{
uint8_t x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_228);
lean_dec(x_2);
x_241 = 0;
x_242 = lean_box(x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_4);
return x_243;
}
else
{
lean_object* x_244; 
x_244 = lean_box(0);
x_229 = x_244;
goto block_237;
}
}
else
{
lean_object* x_245; 
x_245 = lean_box(0);
x_229 = x_245;
goto block_237;
}
}
else
{
lean_object* x_246; 
x_246 = lean_box(0);
x_229 = x_246;
goto block_237;
}
block_237:
{
uint8_t x_230; 
lean_dec(x_229);
x_230 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_228);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_box(0);
lean_inc(x_228);
x_232 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_228, x_231);
x_3 = x_228;
x_4 = x_232;
goto _start;
}
else
{
uint8_t x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_228);
lean_dec(x_2);
x_234 = 0;
x_235 = lean_box(x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_4);
return x_236;
}
}
}
case 11:
{
lean_object* x_247; lean_object* x_248; uint8_t x_257; 
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
lean_dec(x_3);
x_257 = lean_expr_has_expr_mvar(x_247);
if (x_257 == 0)
{
uint8_t x_258; 
x_258 = lean_expr_has_level_mvar(x_247);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = lean_expr_has_fvar(x_247);
if (x_259 == 0)
{
uint8_t x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_247);
lean_dec(x_2);
x_260 = 0;
x_261 = lean_box(x_260);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_4);
return x_262;
}
else
{
lean_object* x_263; 
x_263 = lean_box(0);
x_248 = x_263;
goto block_256;
}
}
else
{
lean_object* x_264; 
x_264 = lean_box(0);
x_248 = x_264;
goto block_256;
}
}
else
{
lean_object* x_265; 
x_265 = lean_box(0);
x_248 = x_265;
goto block_256;
}
block_256:
{
uint8_t x_249; 
lean_dec(x_248);
x_249 = l_HashMapImp_contains___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__1(x_4, x_247);
if (x_249 == 0)
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_box(0);
lean_inc(x_247);
x_251 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_DependsOn_visit___spec__3(x_4, x_247, x_250);
x_3 = x_247;
x_4 = x_251;
goto _start;
}
else
{
uint8_t x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_2);
x_253 = 0;
x_254 = lean_box(x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_4);
return x_255;
}
}
}
default: 
{
uint8_t x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_3);
lean_dec(x_2);
x_266 = 0;
x_267 = lean_box(x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_4);
return x_268;
}
}
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_4);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; lean_object* x_18; uint8_t x_19; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__5(x_7, x_2, x_18);
if (x_19 == 0)
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_7, 3);
lean_inc(x_20);
x_21 = lean_expr_has_fvar(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = lean_expr_has_expr_mvar(x_20);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = lean_expr_has_level_mvar(x_20);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_20);
lean_dec(x_3);
x_24 = 0;
x_8 = x_24;
goto block_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = l_HashMap_Inhabited___closed__1;
x_26 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(x_4, x_3, x_20, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
x_8 = x_28;
goto block_17;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = l_HashMap_Inhabited___closed__1;
x_30 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(x_4, x_3, x_20, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
x_8 = x_32;
goto block_17;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = l_HashMap_Inhabited___closed__1;
x_34 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(x_4, x_3, x_20, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_unbox(x_35);
lean_dec(x_35);
x_8 = x_36;
goto block_17;
}
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; uint8_t x_55; 
x_37 = lean_ctor_get(x_7, 3);
lean_inc(x_37);
x_38 = lean_ctor_get(x_7, 4);
lean_inc(x_38);
x_55 = lean_expr_has_fvar(x_37);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = lean_expr_has_expr_mvar(x_37);
if (x_56 == 0)
{
uint8_t x_57; 
x_57 = lean_expr_has_level_mvar(x_37);
if (x_57 == 0)
{
uint8_t x_58; lean_object* x_59; 
lean_dec(x_37);
x_58 = 0;
x_59 = l_HashMap_Inhabited___closed__1;
x_39 = x_58;
x_40 = x_59;
goto block_54;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = l_HashMap_Inhabited___closed__1;
lean_inc(x_3);
x_61 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(x_4, x_3, x_37, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unbox(x_62);
lean_dec(x_62);
x_39 = x_64;
x_40 = x_63;
goto block_54;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_65 = l_HashMap_Inhabited___closed__1;
lean_inc(x_3);
x_66 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(x_4, x_3, x_37, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_unbox(x_67);
lean_dec(x_67);
x_39 = x_69;
x_40 = x_68;
goto block_54;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_70 = l_HashMap_Inhabited___closed__1;
lean_inc(x_3);
x_71 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(x_4, x_3, x_37, x_70);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_unbox(x_72);
lean_dec(x_72);
x_39 = x_74;
x_40 = x_73;
goto block_54;
}
block_54:
{
if (x_39 == 0)
{
uint8_t x_41; 
x_41 = lean_expr_has_fvar(x_38);
if (x_41 == 0)
{
uint8_t x_42; 
x_42 = lean_expr_has_expr_mvar(x_38);
if (x_42 == 0)
{
uint8_t x_43; 
x_43 = lean_expr_has_level_mvar(x_38);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_3);
x_44 = 0;
x_8 = x_44;
goto block_17;
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(x_4, x_3, x_38, x_40);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_unbox(x_46);
lean_dec(x_46);
x_8 = x_47;
goto block_17;
}
}
else
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(x_4, x_3, x_38, x_40);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
lean_dec(x_48);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
x_8 = x_50;
goto block_17;
}
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(x_4, x_3, x_38, x_40);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_unbox(x_52);
lean_dec(x_52);
x_8 = x_53;
goto block_17;
}
}
else
{
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_3);
x_8 = x_39;
goto block_17;
}
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_75 = l_Lean_LocalDecl_toExpr(x_7);
lean_dec(x_7);
x_76 = lean_array_push(x_4, x_75);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
return x_77;
}
block_17:
{
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_4);
return x_9;
}
else
{
uint8_t x_10; uint8_t x_11; 
x_10 = l_Lean_LocalDecl_binderInfo(x_7);
x_11 = l_Lean_BinderInfo_isAuxDecl(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_LocalDecl_toExpr(x_7);
lean_dec(x_7);
x_13 = lean_array_push(x_4, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_2);
lean_ctor_set(x_15, 2, x_7);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61___lambda__1), 5, 3);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_1);
x_9 = l_Lean_LocalDecl_index(x_6);
x_10 = l_PersistentArray_foldlFromM___at_Lean_AbstractMetavarContext_MkBinding_collectDeps___spec__58___rarg(x_7, x_8, x_5, x_9);
lean_dec(x_9);
return x_10;
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_collectDeps___at_Lean_MetavarContext_mkLambda___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_7 = l_Lean_AbstractMetavarContext_MkBinding_getLocalDeclWithSmallestIdx(x_2, x_3);
x_8 = lean_mk_empty_array_with_capacity(x_4);
lean_dec(x_4);
lean_inc(x_2);
x_9 = l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61(x_1, x_2, x_3, x_2, x_8, x_7);
lean_dec(x_7);
lean_dec(x_2);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_3);
return x_10;
}
}
}
lean_object* l_panicWithPos___at_Lean_MetavarContext_mkLambda___spec__63(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = l_panicWithPos___rarg___closed__1;
x_7 = lean_string_append(x_6, x_1);
x_8 = l_panicWithPos___rarg___closed__2;
x_9 = lean_string_append(x_7, x_8);
x_10 = l_Nat_repr(x_2);
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = l_panicWithPos___rarg___closed__2;
x_13 = lean_string_append(x_11, x_12);
x_14 = l_Nat_repr(x_3);
x_15 = lean_string_append(x_13, x_14);
lean_dec(x_14);
x_16 = l_panicWithPos___rarg___closed__3;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_4);
x_19 = l_panicWithPos___at_Lean_AbstractMetavarContext_MkBinding_mkBinding___spec__1___rarg___closed__1;
x_20 = lean_panic_fn(x_18);
x_21 = lean_apply_1(x_20, x_5);
return x_21;
}
}
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_exprIsInhabited;
x_8 = lean_array_get(x_7, x_1, x_2);
x_9 = l_Lean_LocalContext_findFVar(x_3, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_10 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___rarg___closed__1;
x_11 = lean_unsigned_to_nat(380u);
x_12 = lean_unsigned_to_nat(16u);
x_13 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1;
x_14 = l_panicWithPos___at_Lean_MetavarContext_mkLambda___spec__63(x_10, x_11, x_12, x_13, x_6);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
lean_dec(x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_27; 
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_15, sizeof(void*)*4);
lean_dec(x_15);
x_27 = lean_expr_has_expr_mvar(x_17);
if (x_27 == 0)
{
uint8_t x_28; 
x_28 = lean_expr_has_level_mvar(x_17);
if (x_28 == 0)
{
x_19 = x_17;
x_20 = x_6;
goto block_26;
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_6);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_6, 2);
x_31 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_6, 2, x_31);
x_32 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_17, x_6);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_33, 2);
lean_dec(x_36);
lean_ctor_set(x_33, 2, x_30);
x_19 = x_34;
x_20 = x_33;
goto block_26;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_33, 0);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_33);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_30);
x_19 = x_34;
x_20 = x_39;
goto block_26;
}
}
else
{
uint8_t x_40; 
lean_dec(x_30);
lean_dec(x_16);
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_6, 0);
x_45 = lean_ctor_get(x_6, 1);
x_46 = lean_ctor_get(x_6, 2);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_6);
x_47 = l_HashMap_Inhabited___closed__1;
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_44);
lean_ctor_set(x_48, 1, x_45);
lean_ctor_set(x_48, 2, x_47);
x_49 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_17, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 0);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 lean_ctor_release(x_50, 2);
 x_54 = x_50;
} else {
 lean_dec_ref(x_50);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(0, 3, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
lean_ctor_set(x_55, 2, x_46);
x_19 = x_51;
x_20 = x_55;
goto block_26;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_5);
x_56 = lean_ctor_get(x_49, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_49, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_58 = x_49;
} else {
 lean_dec_ref(x_49);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_6);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_6, 2);
x_62 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_6, 2, x_62);
x_63 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_17, x_6);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
lean_dec(x_63);
x_66 = !lean_is_exclusive(x_64);
if (x_66 == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_64, 2);
lean_dec(x_67);
lean_ctor_set(x_64, 2, x_61);
x_19 = x_65;
x_20 = x_64;
goto block_26;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_64, 0);
x_69 = lean_ctor_get(x_64, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_64);
x_70 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_70, 2, x_61);
x_19 = x_65;
x_20 = x_70;
goto block_26;
}
}
else
{
uint8_t x_71; 
lean_dec(x_61);
lean_dec(x_16);
lean_dec(x_5);
x_71 = !lean_is_exclusive(x_63);
if (x_71 == 0)
{
return x_63;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_63, 0);
x_73 = lean_ctor_get(x_63, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_63);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_75 = lean_ctor_get(x_6, 0);
x_76 = lean_ctor_get(x_6, 1);
x_77 = lean_ctor_get(x_6, 2);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_6);
x_78 = l_HashMap_Inhabited___closed__1;
x_79 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_79, 0, x_75);
lean_ctor_set(x_79, 1, x_76);
lean_ctor_set(x_79, 2, x_78);
x_80 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_17, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 0);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_ctor_get(x_81, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 lean_ctor_release(x_81, 2);
 x_85 = x_81;
} else {
 lean_dec_ref(x_81);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(0, 3, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
lean_ctor_set(x_86, 2, x_77);
x_19 = x_82;
x_20 = x_86;
goto block_26;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_77);
lean_dec(x_16);
lean_dec(x_5);
x_87 = lean_ctor_get(x_80, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_80, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_89 = x_80;
} else {
 lean_dec_ref(x_80);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
}
block_26:
{
lean_object* x_21; 
x_21 = lean_expr_abstract_range(x_19, x_2, x_1);
lean_dec(x_19);
if (x_4 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_expr_mk_forall(x_16, x_18, x_21, x_5);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_expr_mk_lambda(x_16, x_18, x_21, x_5);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_203; 
x_91 = lean_ctor_get(x_15, 2);
lean_inc(x_91);
x_92 = lean_ctor_get(x_15, 3);
lean_inc(x_92);
x_93 = lean_ctor_get(x_15, 4);
lean_inc(x_93);
lean_dec(x_15);
x_203 = lean_expr_has_expr_mvar(x_92);
if (x_203 == 0)
{
uint8_t x_204; 
x_204 = lean_expr_has_level_mvar(x_92);
if (x_204 == 0)
{
x_94 = x_92;
x_95 = x_6;
goto block_202;
}
else
{
uint8_t x_205; 
x_205 = !lean_is_exclusive(x_6);
if (x_205 == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_6, 2);
x_207 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_6, 2, x_207);
x_208 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_92, x_6);
if (lean_obj_tag(x_208) == 0)
{
lean_object* x_209; lean_object* x_210; uint8_t x_211; 
x_209 = lean_ctor_get(x_208, 1);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 0);
lean_inc(x_210);
lean_dec(x_208);
x_211 = !lean_is_exclusive(x_209);
if (x_211 == 0)
{
lean_object* x_212; 
x_212 = lean_ctor_get(x_209, 2);
lean_dec(x_212);
lean_ctor_set(x_209, 2, x_206);
x_94 = x_210;
x_95 = x_209;
goto block_202;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_209, 0);
x_214 = lean_ctor_get(x_209, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_209);
x_215 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
lean_ctor_set(x_215, 2, x_206);
x_94 = x_210;
x_95 = x_215;
goto block_202;
}
}
else
{
uint8_t x_216; 
lean_dec(x_206);
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_5);
x_216 = !lean_is_exclusive(x_208);
if (x_216 == 0)
{
return x_208;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_208, 0);
x_218 = lean_ctor_get(x_208, 1);
lean_inc(x_218);
lean_inc(x_217);
lean_dec(x_208);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
return x_219;
}
}
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_220 = lean_ctor_get(x_6, 0);
x_221 = lean_ctor_get(x_6, 1);
x_222 = lean_ctor_get(x_6, 2);
lean_inc(x_222);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_6);
x_223 = l_HashMap_Inhabited___closed__1;
x_224 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_224, 0, x_220);
lean_ctor_set(x_224, 1, x_221);
lean_ctor_set(x_224, 2, x_223);
x_225 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_92, x_224);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_226 = lean_ctor_get(x_225, 1);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 0);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_226, 1);
lean_inc(x_229);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 lean_ctor_release(x_226, 2);
 x_230 = x_226;
} else {
 lean_dec_ref(x_226);
 x_230 = lean_box(0);
}
if (lean_is_scalar(x_230)) {
 x_231 = lean_alloc_ctor(0, 3, 0);
} else {
 x_231 = x_230;
}
lean_ctor_set(x_231, 0, x_228);
lean_ctor_set(x_231, 1, x_229);
lean_ctor_set(x_231, 2, x_222);
x_94 = x_227;
x_95 = x_231;
goto block_202;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
lean_dec(x_222);
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_5);
x_232 = lean_ctor_get(x_225, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_225, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_234 = x_225;
} else {
 lean_dec_ref(x_225);
 x_234 = lean_box(0);
}
if (lean_is_scalar(x_234)) {
 x_235 = lean_alloc_ctor(1, 2, 0);
} else {
 x_235 = x_234;
}
lean_ctor_set(x_235, 0, x_232);
lean_ctor_set(x_235, 1, x_233);
return x_235;
}
}
}
}
else
{
uint8_t x_236; 
x_236 = !lean_is_exclusive(x_6);
if (x_236 == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_237 = lean_ctor_get(x_6, 2);
x_238 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_6, 2, x_238);
x_239 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_92, x_6);
if (lean_obj_tag(x_239) == 0)
{
lean_object* x_240; lean_object* x_241; uint8_t x_242; 
x_240 = lean_ctor_get(x_239, 1);
lean_inc(x_240);
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
lean_dec(x_239);
x_242 = !lean_is_exclusive(x_240);
if (x_242 == 0)
{
lean_object* x_243; 
x_243 = lean_ctor_get(x_240, 2);
lean_dec(x_243);
lean_ctor_set(x_240, 2, x_237);
x_94 = x_241;
x_95 = x_240;
goto block_202;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_240, 0);
x_245 = lean_ctor_get(x_240, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_240);
x_246 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
lean_ctor_set(x_246, 2, x_237);
x_94 = x_241;
x_95 = x_246;
goto block_202;
}
}
else
{
uint8_t x_247; 
lean_dec(x_237);
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_5);
x_247 = !lean_is_exclusive(x_239);
if (x_247 == 0)
{
return x_239;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_248 = lean_ctor_get(x_239, 0);
x_249 = lean_ctor_get(x_239, 1);
lean_inc(x_249);
lean_inc(x_248);
lean_dec(x_239);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_248);
lean_ctor_set(x_250, 1, x_249);
return x_250;
}
}
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_251 = lean_ctor_get(x_6, 0);
x_252 = lean_ctor_get(x_6, 1);
x_253 = lean_ctor_get(x_6, 2);
lean_inc(x_253);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_6);
x_254 = l_HashMap_Inhabited___closed__1;
x_255 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_255, 0, x_251);
lean_ctor_set(x_255, 1, x_252);
lean_ctor_set(x_255, 2, x_254);
x_256 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_92, x_255);
if (lean_obj_tag(x_256) == 0)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_257 = lean_ctor_get(x_256, 1);
lean_inc(x_257);
x_258 = lean_ctor_get(x_256, 0);
lean_inc(x_258);
lean_dec(x_256);
x_259 = lean_ctor_get(x_257, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_257, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 lean_ctor_release(x_257, 1);
 lean_ctor_release(x_257, 2);
 x_261 = x_257;
} else {
 lean_dec_ref(x_257);
 x_261 = lean_box(0);
}
if (lean_is_scalar(x_261)) {
 x_262 = lean_alloc_ctor(0, 3, 0);
} else {
 x_262 = x_261;
}
lean_ctor_set(x_262, 0, x_259);
lean_ctor_set(x_262, 1, x_260);
lean_ctor_set(x_262, 2, x_253);
x_94 = x_258;
x_95 = x_262;
goto block_202;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_253);
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_5);
x_263 = lean_ctor_get(x_256, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_256, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 lean_ctor_release(x_256, 1);
 x_265 = x_256;
} else {
 lean_dec_ref(x_256);
 x_265 = lean_box(0);
}
if (lean_is_scalar(x_265)) {
 x_266 = lean_alloc_ctor(1, 2, 0);
} else {
 x_266 = x_265;
}
lean_ctor_set(x_266, 0, x_263);
lean_ctor_set(x_266, 1, x_264);
return x_266;
}
}
}
block_202:
{
lean_object* x_96; uint8_t x_97; 
x_96 = lean_expr_abstract_range(x_94, x_2, x_1);
lean_dec(x_94);
x_97 = lean_expr_has_expr_mvar(x_93);
if (x_97 == 0)
{
uint8_t x_98; 
x_98 = lean_expr_has_level_mvar(x_93);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_expr_abstract_range(x_93, x_2, x_1);
lean_dec(x_93);
x_100 = lean_expr_mk_let(x_91, x_96, x_99, x_5);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_95);
return x_101;
}
else
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_95);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_95, 2);
x_104 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_95, 2, x_104);
x_105 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_93, x_95);
if (lean_obj_tag(x_105) == 0)
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; uint8_t x_108; 
x_107 = lean_ctor_get(x_105, 1);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_109 = lean_ctor_get(x_105, 0);
x_110 = lean_ctor_get(x_107, 2);
lean_dec(x_110);
lean_ctor_set(x_107, 2, x_103);
x_111 = lean_expr_abstract_range(x_109, x_2, x_1);
lean_dec(x_109);
x_112 = lean_expr_mk_let(x_91, x_96, x_111, x_5);
lean_ctor_set(x_105, 0, x_112);
return x_105;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_ctor_get(x_105, 0);
x_114 = lean_ctor_get(x_107, 0);
x_115 = lean_ctor_get(x_107, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_107);
x_116 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
lean_ctor_set(x_116, 2, x_103);
x_117 = lean_expr_abstract_range(x_113, x_2, x_1);
lean_dec(x_113);
x_118 = lean_expr_mk_let(x_91, x_96, x_117, x_5);
lean_ctor_set(x_105, 1, x_116);
lean_ctor_set(x_105, 0, x_118);
return x_105;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_119 = lean_ctor_get(x_105, 1);
x_120 = lean_ctor_get(x_105, 0);
lean_inc(x_119);
lean_inc(x_120);
lean_dec(x_105);
x_121 = lean_ctor_get(x_119, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_119, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 lean_ctor_release(x_119, 2);
 x_123 = x_119;
} else {
 lean_dec_ref(x_119);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(0, 3, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
lean_ctor_set(x_124, 2, x_103);
x_125 = lean_expr_abstract_range(x_120, x_2, x_1);
lean_dec(x_120);
x_126 = lean_expr_mk_let(x_91, x_96, x_125, x_5);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_124);
return x_127;
}
}
else
{
uint8_t x_128; 
lean_dec(x_103);
lean_dec(x_96);
lean_dec(x_91);
lean_dec(x_5);
x_128 = !lean_is_exclusive(x_105);
if (x_128 == 0)
{
return x_105;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_105, 0);
x_130 = lean_ctor_get(x_105, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_105);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_132 = lean_ctor_get(x_95, 0);
x_133 = lean_ctor_get(x_95, 1);
x_134 = lean_ctor_get(x_95, 2);
lean_inc(x_134);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_95);
x_135 = l_HashMap_Inhabited___closed__1;
x_136 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_136, 0, x_132);
lean_ctor_set(x_136, 1, x_133);
lean_ctor_set(x_136, 2, x_135);
x_137 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_93, x_136);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_138 = lean_ctor_get(x_137, 1);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = lean_ctor_get(x_138, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_138, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 lean_ctor_release(x_138, 2);
 x_143 = x_138;
} else {
 lean_dec_ref(x_138);
 x_143 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_144 = lean_alloc_ctor(0, 3, 0);
} else {
 x_144 = x_143;
}
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_142);
lean_ctor_set(x_144, 2, x_134);
x_145 = lean_expr_abstract_range(x_139, x_2, x_1);
lean_dec(x_139);
x_146 = lean_expr_mk_let(x_91, x_96, x_145, x_5);
if (lean_is_scalar(x_140)) {
 x_147 = lean_alloc_ctor(0, 2, 0);
} else {
 x_147 = x_140;
}
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_144);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_134);
lean_dec(x_96);
lean_dec(x_91);
lean_dec(x_5);
x_148 = lean_ctor_get(x_137, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_137, 1);
lean_inc(x_149);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_150 = x_137;
} else {
 lean_dec_ref(x_137);
 x_150 = lean_box(0);
}
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_148);
lean_ctor_set(x_151, 1, x_149);
return x_151;
}
}
}
}
else
{
uint8_t x_152; 
x_152 = !lean_is_exclusive(x_95);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_95, 2);
x_154 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_95, 2, x_154);
x_155 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_93, x_95);
if (lean_obj_tag(x_155) == 0)
{
uint8_t x_156; 
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; uint8_t x_158; 
x_157 = lean_ctor_get(x_155, 1);
x_158 = !lean_is_exclusive(x_157);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_159 = lean_ctor_get(x_155, 0);
x_160 = lean_ctor_get(x_157, 2);
lean_dec(x_160);
lean_ctor_set(x_157, 2, x_153);
x_161 = lean_expr_abstract_range(x_159, x_2, x_1);
lean_dec(x_159);
x_162 = lean_expr_mk_let(x_91, x_96, x_161, x_5);
lean_ctor_set(x_155, 0, x_162);
return x_155;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_163 = lean_ctor_get(x_155, 0);
x_164 = lean_ctor_get(x_157, 0);
x_165 = lean_ctor_get(x_157, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_157);
x_166 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
lean_ctor_set(x_166, 2, x_153);
x_167 = lean_expr_abstract_range(x_163, x_2, x_1);
lean_dec(x_163);
x_168 = lean_expr_mk_let(x_91, x_96, x_167, x_5);
lean_ctor_set(x_155, 1, x_166);
lean_ctor_set(x_155, 0, x_168);
return x_155;
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_169 = lean_ctor_get(x_155, 1);
x_170 = lean_ctor_get(x_155, 0);
lean_inc(x_169);
lean_inc(x_170);
lean_dec(x_155);
x_171 = lean_ctor_get(x_169, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_169, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 lean_ctor_release(x_169, 2);
 x_173 = x_169;
} else {
 lean_dec_ref(x_169);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(0, 3, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_171);
lean_ctor_set(x_174, 1, x_172);
lean_ctor_set(x_174, 2, x_153);
x_175 = lean_expr_abstract_range(x_170, x_2, x_1);
lean_dec(x_170);
x_176 = lean_expr_mk_let(x_91, x_96, x_175, x_5);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_174);
return x_177;
}
}
else
{
uint8_t x_178; 
lean_dec(x_153);
lean_dec(x_96);
lean_dec(x_91);
lean_dec(x_5);
x_178 = !lean_is_exclusive(x_155);
if (x_178 == 0)
{
return x_155;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_155, 0);
x_180 = lean_ctor_get(x_155, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_155);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_182 = lean_ctor_get(x_95, 0);
x_183 = lean_ctor_get(x_95, 1);
x_184 = lean_ctor_get(x_95, 2);
lean_inc(x_184);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_95);
x_185 = l_HashMap_Inhabited___closed__1;
x_186 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_186, 0, x_182);
lean_ctor_set(x_186, 1, x_183);
lean_ctor_set(x_186, 2, x_185);
x_187 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_93, x_186);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_188 = lean_ctor_get(x_187, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 0);
lean_inc(x_189);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_190 = x_187;
} else {
 lean_dec_ref(x_187);
 x_190 = lean_box(0);
}
x_191 = lean_ctor_get(x_188, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_188, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 lean_ctor_release(x_188, 2);
 x_193 = x_188;
} else {
 lean_dec_ref(x_188);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_193)) {
 x_194 = lean_alloc_ctor(0, 3, 0);
} else {
 x_194 = x_193;
}
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_192);
lean_ctor_set(x_194, 2, x_184);
x_195 = lean_expr_abstract_range(x_189, x_2, x_1);
lean_dec(x_189);
x_196 = lean_expr_mk_let(x_91, x_96, x_195, x_5);
if (lean_is_scalar(x_190)) {
 x_197 = lean_alloc_ctor(0, 2, 0);
} else {
 x_197 = x_190;
}
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_194);
return x_197;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_184);
lean_dec(x_96);
lean_dec(x_91);
lean_dec(x_5);
x_198 = lean_ctor_get(x_187, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_187, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_200 = x_187;
} else {
 lean_dec_ref(x_187);
 x_200 = lean_box(0);
}
if (lean_is_scalar(x_200)) {
 x_201 = lean_alloc_ctor(1, 2, 0);
} else {
 x_201 = x_200;
}
lean_ctor_set(x_201, 0, x_198);
lean_ctor_set(x_201, 1, x_199);
return x_201;
}
}
}
}
}
}
}
}
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_5, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_5, x_10);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
x_13 = lean_box(x_1);
lean_inc(x_2);
lean_inc(x_11);
lean_inc(x_3);
x_14 = lean_alloc_closure((void*)(l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___lambda__1___boxed), 6, 5);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_11);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_13);
lean_closure_set(x_14, 4, x_6);
x_15 = lean_box(x_1);
x_16 = lean_alloc_closure((void*)(l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___boxed), 7, 5);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_4);
lean_closure_set(x_16, 4, x_11);
x_17 = lean_apply_5(x_12, lean_box(0), lean_box(0), x_14, x_16, x_7);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_4, 0);
lean_inc(x_18);
lean_dec(x_4);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_apply_3(x_19, lean_box(0), x_6, x_7);
return x_20;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__62(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_expr_has_expr_mvar(x_4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = lean_expr_has_level_mvar(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_expr_abstract_range(x_4, x_6, x_3);
lean_dec(x_4);
x_10 = l_EIO_Monad___closed__1;
x_11 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(x_1, x_2, x_3, x_10, x_6, x_9, x_5);
lean_dec(x_6);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_5, 2);
x_14 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_5, 2, x_14);
x_15 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_3, x_4, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_16, 2);
lean_dec(x_19);
lean_ctor_set(x_16, 2, x_13);
x_20 = lean_expr_abstract_range(x_17, x_6, x_3);
lean_dec(x_17);
x_21 = l_EIO_Monad___closed__1;
x_22 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(x_1, x_2, x_3, x_21, x_6, x_20, x_16);
lean_dec(x_6);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_13);
x_26 = lean_expr_abstract_range(x_17, x_6, x_3);
lean_dec(x_17);
x_27 = l_EIO_Monad___closed__1;
x_28 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(x_1, x_2, x_3, x_27, x_6, x_26, x_25);
lean_dec(x_6);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_15);
if (x_29 == 0)
{
return x_15;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_15, 0);
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_15);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_5, 0);
x_34 = lean_ctor_get(x_5, 1);
x_35 = lean_ctor_get(x_5, 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_5);
x_36 = l_HashMap_Inhabited___closed__1;
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_36);
x_38 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_3, x_4, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 x_43 = x_39;
} else {
 lean_dec_ref(x_39);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 3, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
lean_ctor_set(x_44, 2, x_35);
x_45 = lean_expr_abstract_range(x_40, x_6, x_3);
lean_dec(x_40);
x_46 = l_EIO_Monad___closed__1;
x_47 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(x_1, x_2, x_3, x_46, x_6, x_45, x_44);
lean_dec(x_6);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_35);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_48 = lean_ctor_get(x_38, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_38, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_50 = x_38;
} else {
 lean_dec_ref(x_38);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(1, 2, 0);
} else {
 x_51 = x_50;
}
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_5);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_5, 2);
x_54 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_5, 2, x_54);
x_55 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_3, x_4, x_5);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 0);
lean_inc(x_57);
lean_dec(x_55);
x_58 = !lean_is_exclusive(x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_56, 2);
lean_dec(x_59);
lean_ctor_set(x_56, 2, x_53);
x_60 = lean_expr_abstract_range(x_57, x_6, x_3);
lean_dec(x_57);
x_61 = l_EIO_Monad___closed__1;
x_62 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(x_1, x_2, x_3, x_61, x_6, x_60, x_56);
lean_dec(x_6);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_56, 0);
x_64 = lean_ctor_get(x_56, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_56);
x_65 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_53);
x_66 = lean_expr_abstract_range(x_57, x_6, x_3);
lean_dec(x_57);
x_67 = l_EIO_Monad___closed__1;
x_68 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(x_1, x_2, x_3, x_67, x_6, x_66, x_65);
lean_dec(x_6);
return x_68;
}
}
else
{
uint8_t x_69; 
lean_dec(x_53);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_55);
if (x_69 == 0)
{
return x_55;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_55, 0);
x_71 = lean_ctor_get(x_55, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_55);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_73 = lean_ctor_get(x_5, 0);
x_74 = lean_ctor_get(x_5, 1);
x_75 = lean_ctor_get(x_5, 2);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_5);
x_76 = l_HashMap_Inhabited___closed__1;
x_77 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_77, 0, x_73);
lean_ctor_set(x_77, 1, x_74);
lean_ctor_set(x_77, 2, x_76);
x_78 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_3, x_4, x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_ctor_get(x_79, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_79, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 lean_ctor_release(x_79, 2);
 x_83 = x_79;
} else {
 lean_dec_ref(x_79);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(0, 3, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
lean_ctor_set(x_84, 2, x_75);
x_85 = lean_expr_abstract_range(x_80, x_6, x_3);
lean_dec(x_80);
x_86 = l_EIO_Monad___closed__1;
x_87 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(x_1, x_2, x_3, x_86, x_6, x_85, x_84);
lean_dec(x_6);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_75);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_88 = lean_ctor_get(x_78, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_78, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_90 = x_78;
} else {
 lean_dec_ref(x_78);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = l_Array_empty___closed__1;
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_22; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_box(0);
lean_inc(x_10);
x_12 = x_11;
x_13 = lean_array_fset(x_3, x_2, x_12);
x_22 = lean_expr_has_expr_mvar(x_10);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = lean_expr_has_level_mvar(x_10);
if (x_23 == 0)
{
lean_inc(x_10);
x_14 = x_10;
x_15 = x_4;
goto block_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_4, 2);
lean_inc(x_24);
x_25 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_24, x_10);
lean_dec(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_inc(x_10);
x_26 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_10, x_4);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 2);
lean_inc(x_28);
lean_inc(x_10);
x_31 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_30, x_10, x_28);
lean_ctor_set(x_27, 2, x_31);
x_14 = x_28;
x_15 = x_27;
goto block_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_ctor_get(x_27, 1);
x_34 = lean_ctor_get(x_27, 2);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_27);
lean_inc(x_28);
lean_inc(x_10);
x_35 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_34, x_10, x_28);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set(x_36, 2, x_35);
x_14 = x_28;
x_15 = x_36;
goto block_21;
}
}
else
{
uint8_t x_37; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_26);
if (x_37 == 0)
{
return x_26;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_26, 0);
x_39 = lean_ctor_get(x_26, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_26);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_25, 0);
lean_inc(x_41);
lean_dec(x_25);
x_14 = x_41;
x_15 = x_4;
goto block_21;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_4, 2);
lean_inc(x_42);
x_43 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_42, x_10);
lean_dec(x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; 
lean_inc(x_10);
x_44 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_10, x_4);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
lean_dec(x_44);
x_47 = !lean_is_exclusive(x_45);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_45, 2);
lean_inc(x_46);
lean_inc(x_10);
x_49 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_48, x_10, x_46);
lean_ctor_set(x_45, 2, x_49);
x_14 = x_46;
x_15 = x_45;
goto block_21;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_45, 0);
x_51 = lean_ctor_get(x_45, 1);
x_52 = lean_ctor_get(x_45, 2);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_45);
lean_inc(x_46);
lean_inc(x_10);
x_53 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_52, x_10, x_46);
x_54 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_54, 0, x_50);
lean_ctor_set(x_54, 1, x_51);
lean_ctor_set(x_54, 2, x_53);
x_14 = x_46;
x_15 = x_54;
goto block_21;
}
}
else
{
uint8_t x_55; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_44);
if (x_55 == 0)
{
return x_44;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_44, 0);
x_57 = lean_ctor_get(x_44, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_44);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_43, 0);
lean_inc(x_59);
lean_dec(x_43);
x_14 = x_59;
x_15 = x_4;
goto block_21;
}
}
block_21:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_2, x_16);
x_18 = x_14;
x_19 = lean_array_fset(x_13, x_2, x_18);
lean_dec(x_2);
x_2 = x_17;
x_3 = x_19;
x_4 = x_15;
goto _start;
}
}
}
}
lean_object* l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_mkLambda___spec__66(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_5; lean_object* x_6; uint8_t x_21; 
x_21 = lean_expr_has_expr_mvar(x_2);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = lean_expr_has_level_mvar(x_2);
if (x_22 == 0)
{
x_5 = x_2;
x_6 = x_4;
goto block_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_4, 2);
lean_inc(x_23);
x_24 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_23, x_2);
lean_dec(x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
lean_inc(x_2);
x_25 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
x_30 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_29, x_2, x_27);
lean_ctor_set(x_26, 2, x_30);
x_5 = x_27;
x_6 = x_26;
goto block_20;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_26, 0);
x_32 = lean_ctor_get(x_26, 1);
x_33 = lean_ctor_get(x_26, 2);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_26);
lean_inc(x_27);
x_34 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_33, x_2, x_27);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_31);
lean_ctor_set(x_35, 1, x_32);
lean_ctor_set(x_35, 2, x_34);
x_5 = x_27;
x_6 = x_35;
goto block_20;
}
}
else
{
uint8_t x_36; 
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_25);
if (x_36 == 0)
{
return x_25;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_25, 0);
x_38 = lean_ctor_get(x_25, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_25);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
lean_object* x_40; 
lean_dec(x_2);
x_40 = lean_ctor_get(x_24, 0);
lean_inc(x_40);
lean_dec(x_24);
x_5 = x_40;
x_6 = x_4;
goto block_20;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_4, 2);
lean_inc(x_41);
x_42 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_41, x_2);
lean_dec(x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
lean_inc(x_2);
x_43 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
lean_dec(x_43);
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 2);
lean_inc(x_45);
x_48 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_47, x_2, x_45);
lean_ctor_set(x_44, 2, x_48);
x_5 = x_45;
x_6 = x_44;
goto block_20;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_44, 0);
x_50 = lean_ctor_get(x_44, 1);
x_51 = lean_ctor_get(x_44, 2);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_44);
lean_inc(x_45);
x_52 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_51, x_2, x_45);
x_53 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_53, 0, x_49);
lean_ctor_set(x_53, 1, x_50);
lean_ctor_set(x_53, 2, x_52);
x_5 = x_45;
x_6 = x_53;
goto block_20;
}
}
else
{
uint8_t x_54; 
lean_dec(x_3);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_43);
if (x_54 == 0)
{
return x_43;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_43, 0);
x_56 = lean_ctor_get(x_43, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_43);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; 
lean_dec(x_2);
x_58 = lean_ctor_get(x_42, 0);
lean_inc(x_58);
lean_dec(x_42);
x_5 = x_58;
x_6 = x_4;
goto block_20;
}
}
block_20:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_7, x_3, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_mkAppRev(x_5, x_10);
lean_dec(x_10);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = l_Lean_mkAppRev(x_5, x_12);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
case 1:
{
lean_object* x_59; lean_object* x_60; uint8_t x_75; 
x_75 = lean_expr_has_expr_mvar(x_2);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = lean_expr_has_level_mvar(x_2);
if (x_76 == 0)
{
x_59 = x_2;
x_60 = x_4;
goto block_74;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_4, 2);
lean_inc(x_77);
x_78 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_77, x_2);
lean_dec(x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
lean_inc(x_2);
x_79 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 0);
lean_inc(x_81);
lean_dec(x_79);
x_82 = !lean_is_exclusive(x_80);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_80, 2);
lean_inc(x_81);
x_84 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_83, x_2, x_81);
lean_ctor_set(x_80, 2, x_84);
x_59 = x_81;
x_60 = x_80;
goto block_74;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_85 = lean_ctor_get(x_80, 0);
x_86 = lean_ctor_get(x_80, 1);
x_87 = lean_ctor_get(x_80, 2);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_80);
lean_inc(x_81);
x_88 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_87, x_2, x_81);
x_89 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_89, 0, x_85);
lean_ctor_set(x_89, 1, x_86);
lean_ctor_set(x_89, 2, x_88);
x_59 = x_81;
x_60 = x_89;
goto block_74;
}
}
else
{
uint8_t x_90; 
lean_dec(x_3);
lean_dec(x_2);
x_90 = !lean_is_exclusive(x_79);
if (x_90 == 0)
{
return x_79;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_79, 0);
x_92 = lean_ctor_get(x_79, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_79);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
lean_object* x_94; 
lean_dec(x_2);
x_94 = lean_ctor_get(x_78, 0);
lean_inc(x_94);
lean_dec(x_78);
x_59 = x_94;
x_60 = x_4;
goto block_74;
}
}
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_4, 2);
lean_inc(x_95);
x_96 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_95, x_2);
lean_dec(x_95);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; 
lean_inc(x_2);
x_97 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 0);
lean_inc(x_99);
lean_dec(x_97);
x_100 = !lean_is_exclusive(x_98);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_98, 2);
lean_inc(x_99);
x_102 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_101, x_2, x_99);
lean_ctor_set(x_98, 2, x_102);
x_59 = x_99;
x_60 = x_98;
goto block_74;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_ctor_get(x_98, 0);
x_104 = lean_ctor_get(x_98, 1);
x_105 = lean_ctor_get(x_98, 2);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_98);
lean_inc(x_99);
x_106 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_105, x_2, x_99);
x_107 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_107, 0, x_103);
lean_ctor_set(x_107, 1, x_104);
lean_ctor_set(x_107, 2, x_106);
x_59 = x_99;
x_60 = x_107;
goto block_74;
}
}
else
{
uint8_t x_108; 
lean_dec(x_3);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_97);
if (x_108 == 0)
{
return x_97;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_97, 0);
x_110 = lean_ctor_get(x_97, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_97);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; 
lean_dec(x_2);
x_112 = lean_ctor_get(x_96, 0);
lean_inc(x_112);
lean_dec(x_96);
x_59 = x_112;
x_60 = x_4;
goto block_74;
}
}
block_74:
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_unsigned_to_nat(0u);
x_62 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_61, x_3, x_60);
if (lean_obj_tag(x_62) == 0)
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_62, 0);
x_65 = l_Lean_mkAppRev(x_59, x_64);
lean_dec(x_64);
lean_ctor_set(x_62, 0, x_65);
return x_62;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_62, 0);
x_67 = lean_ctor_get(x_62, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_62);
x_68 = l_Lean_mkAppRev(x_59, x_66);
lean_dec(x_66);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
uint8_t x_70; 
lean_dec(x_59);
x_70 = !lean_is_exclusive(x_62);
if (x_70 == 0)
{
return x_62;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_62, 0);
x_72 = lean_ctor_get(x_62, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_62);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
case 2:
{
lean_object* x_113; lean_object* x_114; uint8_t x_129; 
x_129 = lean_expr_has_expr_mvar(x_2);
if (x_129 == 0)
{
uint8_t x_130; 
x_130 = lean_expr_has_level_mvar(x_2);
if (x_130 == 0)
{
x_113 = x_2;
x_114 = x_4;
goto block_128;
}
else
{
lean_object* x_131; lean_object* x_132; 
x_131 = lean_ctor_get(x_4, 2);
lean_inc(x_131);
x_132 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_131, x_2);
lean_dec(x_131);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; 
lean_inc(x_2);
x_133 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 0);
lean_inc(x_135);
lean_dec(x_133);
x_136 = !lean_is_exclusive(x_134);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; 
x_137 = lean_ctor_get(x_134, 2);
lean_inc(x_135);
x_138 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_137, x_2, x_135);
lean_ctor_set(x_134, 2, x_138);
x_113 = x_135;
x_114 = x_134;
goto block_128;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_139 = lean_ctor_get(x_134, 0);
x_140 = lean_ctor_get(x_134, 1);
x_141 = lean_ctor_get(x_134, 2);
lean_inc(x_141);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_134);
lean_inc(x_135);
x_142 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_141, x_2, x_135);
x_143 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_143, 0, x_139);
lean_ctor_set(x_143, 1, x_140);
lean_ctor_set(x_143, 2, x_142);
x_113 = x_135;
x_114 = x_143;
goto block_128;
}
}
else
{
uint8_t x_144; 
lean_dec(x_3);
lean_dec(x_2);
x_144 = !lean_is_exclusive(x_133);
if (x_144 == 0)
{
return x_133;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_133, 0);
x_146 = lean_ctor_get(x_133, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_133);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
}
else
{
lean_object* x_148; 
lean_dec(x_2);
x_148 = lean_ctor_get(x_132, 0);
lean_inc(x_148);
lean_dec(x_132);
x_113 = x_148;
x_114 = x_4;
goto block_128;
}
}
}
else
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_ctor_get(x_4, 2);
lean_inc(x_149);
x_150 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_149, x_2);
lean_dec(x_149);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; 
lean_inc(x_2);
x_151 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; uint8_t x_154; 
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 0);
lean_inc(x_153);
lean_dec(x_151);
x_154 = !lean_is_exclusive(x_152);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; 
x_155 = lean_ctor_get(x_152, 2);
lean_inc(x_153);
x_156 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_155, x_2, x_153);
lean_ctor_set(x_152, 2, x_156);
x_113 = x_153;
x_114 = x_152;
goto block_128;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_157 = lean_ctor_get(x_152, 0);
x_158 = lean_ctor_get(x_152, 1);
x_159 = lean_ctor_get(x_152, 2);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_152);
lean_inc(x_153);
x_160 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_159, x_2, x_153);
x_161 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_161, 0, x_157);
lean_ctor_set(x_161, 1, x_158);
lean_ctor_set(x_161, 2, x_160);
x_113 = x_153;
x_114 = x_161;
goto block_128;
}
}
else
{
uint8_t x_162; 
lean_dec(x_3);
lean_dec(x_2);
x_162 = !lean_is_exclusive(x_151);
if (x_162 == 0)
{
return x_151;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_151, 0);
x_164 = lean_ctor_get(x_151, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_151);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
else
{
lean_object* x_166; 
lean_dec(x_2);
x_166 = lean_ctor_get(x_150, 0);
lean_inc(x_166);
lean_dec(x_150);
x_113 = x_166;
x_114 = x_4;
goto block_128;
}
}
block_128:
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_unsigned_to_nat(0u);
x_116 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_115, x_3, x_114);
if (lean_obj_tag(x_116) == 0)
{
uint8_t x_117; 
x_117 = !lean_is_exclusive(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; 
x_118 = lean_ctor_get(x_116, 0);
x_119 = l_Lean_mkAppRev(x_113, x_118);
lean_dec(x_118);
lean_ctor_set(x_116, 0, x_119);
return x_116;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_120 = lean_ctor_get(x_116, 0);
x_121 = lean_ctor_get(x_116, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_116);
x_122 = l_Lean_mkAppRev(x_113, x_120);
lean_dec(x_120);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
else
{
uint8_t x_124; 
lean_dec(x_113);
x_124 = !lean_is_exclusive(x_116);
if (x_124 == 0)
{
return x_116;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_116, 0);
x_126 = lean_ctor_get(x_116, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_116);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
}
case 3:
{
lean_object* x_167; lean_object* x_168; uint8_t x_183; 
x_183 = lean_expr_has_expr_mvar(x_2);
if (x_183 == 0)
{
uint8_t x_184; 
x_184 = lean_expr_has_level_mvar(x_2);
if (x_184 == 0)
{
x_167 = x_2;
x_168 = x_4;
goto block_182;
}
else
{
lean_object* x_185; lean_object* x_186; 
x_185 = lean_ctor_get(x_4, 2);
lean_inc(x_185);
x_186 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_185, x_2);
lean_dec(x_185);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; 
lean_inc(x_2);
x_187 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_188 = lean_ctor_get(x_187, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 0);
lean_inc(x_189);
lean_dec(x_187);
x_190 = !lean_is_exclusive(x_188);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; 
x_191 = lean_ctor_get(x_188, 2);
lean_inc(x_189);
x_192 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_191, x_2, x_189);
lean_ctor_set(x_188, 2, x_192);
x_167 = x_189;
x_168 = x_188;
goto block_182;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_193 = lean_ctor_get(x_188, 0);
x_194 = lean_ctor_get(x_188, 1);
x_195 = lean_ctor_get(x_188, 2);
lean_inc(x_195);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_188);
lean_inc(x_189);
x_196 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_195, x_2, x_189);
x_197 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_197, 0, x_193);
lean_ctor_set(x_197, 1, x_194);
lean_ctor_set(x_197, 2, x_196);
x_167 = x_189;
x_168 = x_197;
goto block_182;
}
}
else
{
uint8_t x_198; 
lean_dec(x_3);
lean_dec(x_2);
x_198 = !lean_is_exclusive(x_187);
if (x_198 == 0)
{
return x_187;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_187, 0);
x_200 = lean_ctor_get(x_187, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_187);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
else
{
lean_object* x_202; 
lean_dec(x_2);
x_202 = lean_ctor_get(x_186, 0);
lean_inc(x_202);
lean_dec(x_186);
x_167 = x_202;
x_168 = x_4;
goto block_182;
}
}
}
else
{
lean_object* x_203; lean_object* x_204; 
x_203 = lean_ctor_get(x_4, 2);
lean_inc(x_203);
x_204 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_203, x_2);
lean_dec(x_203);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; 
lean_inc(x_2);
x_205 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; uint8_t x_208; 
x_206 = lean_ctor_get(x_205, 1);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 0);
lean_inc(x_207);
lean_dec(x_205);
x_208 = !lean_is_exclusive(x_206);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; 
x_209 = lean_ctor_get(x_206, 2);
lean_inc(x_207);
x_210 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_209, x_2, x_207);
lean_ctor_set(x_206, 2, x_210);
x_167 = x_207;
x_168 = x_206;
goto block_182;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_211 = lean_ctor_get(x_206, 0);
x_212 = lean_ctor_get(x_206, 1);
x_213 = lean_ctor_get(x_206, 2);
lean_inc(x_213);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_206);
lean_inc(x_207);
x_214 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_213, x_2, x_207);
x_215 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_215, 0, x_211);
lean_ctor_set(x_215, 1, x_212);
lean_ctor_set(x_215, 2, x_214);
x_167 = x_207;
x_168 = x_215;
goto block_182;
}
}
else
{
uint8_t x_216; 
lean_dec(x_3);
lean_dec(x_2);
x_216 = !lean_is_exclusive(x_205);
if (x_216 == 0)
{
return x_205;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_205, 0);
x_218 = lean_ctor_get(x_205, 1);
lean_inc(x_218);
lean_inc(x_217);
lean_dec(x_205);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
return x_219;
}
}
}
else
{
lean_object* x_220; 
lean_dec(x_2);
x_220 = lean_ctor_get(x_204, 0);
lean_inc(x_220);
lean_dec(x_204);
x_167 = x_220;
x_168 = x_4;
goto block_182;
}
}
block_182:
{
lean_object* x_169; lean_object* x_170; 
x_169 = lean_unsigned_to_nat(0u);
x_170 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_169, x_3, x_168);
if (lean_obj_tag(x_170) == 0)
{
uint8_t x_171; 
x_171 = !lean_is_exclusive(x_170);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_ctor_get(x_170, 0);
x_173 = l_Lean_mkAppRev(x_167, x_172);
lean_dec(x_172);
lean_ctor_set(x_170, 0, x_173);
return x_170;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_174 = lean_ctor_get(x_170, 0);
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_170);
x_176 = l_Lean_mkAppRev(x_167, x_174);
lean_dec(x_174);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_175);
return x_177;
}
}
else
{
uint8_t x_178; 
lean_dec(x_167);
x_178 = !lean_is_exclusive(x_170);
if (x_178 == 0)
{
return x_170;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_170, 0);
x_180 = lean_ctor_get(x_170, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_170);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
}
}
case 4:
{
lean_object* x_221; lean_object* x_222; uint8_t x_237; 
x_237 = lean_expr_has_expr_mvar(x_2);
if (x_237 == 0)
{
uint8_t x_238; 
x_238 = lean_expr_has_level_mvar(x_2);
if (x_238 == 0)
{
x_221 = x_2;
x_222 = x_4;
goto block_236;
}
else
{
lean_object* x_239; lean_object* x_240; 
x_239 = lean_ctor_get(x_4, 2);
lean_inc(x_239);
x_240 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_239, x_2);
lean_dec(x_239);
if (lean_obj_tag(x_240) == 0)
{
lean_object* x_241; 
lean_inc(x_2);
x_241 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; lean_object* x_243; uint8_t x_244; 
x_242 = lean_ctor_get(x_241, 1);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 0);
lean_inc(x_243);
lean_dec(x_241);
x_244 = !lean_is_exclusive(x_242);
if (x_244 == 0)
{
lean_object* x_245; lean_object* x_246; 
x_245 = lean_ctor_get(x_242, 2);
lean_inc(x_243);
x_246 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_245, x_2, x_243);
lean_ctor_set(x_242, 2, x_246);
x_221 = x_243;
x_222 = x_242;
goto block_236;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_247 = lean_ctor_get(x_242, 0);
x_248 = lean_ctor_get(x_242, 1);
x_249 = lean_ctor_get(x_242, 2);
lean_inc(x_249);
lean_inc(x_248);
lean_inc(x_247);
lean_dec(x_242);
lean_inc(x_243);
x_250 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_249, x_2, x_243);
x_251 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_251, 0, x_247);
lean_ctor_set(x_251, 1, x_248);
lean_ctor_set(x_251, 2, x_250);
x_221 = x_243;
x_222 = x_251;
goto block_236;
}
}
else
{
uint8_t x_252; 
lean_dec(x_3);
lean_dec(x_2);
x_252 = !lean_is_exclusive(x_241);
if (x_252 == 0)
{
return x_241;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_253 = lean_ctor_get(x_241, 0);
x_254 = lean_ctor_get(x_241, 1);
lean_inc(x_254);
lean_inc(x_253);
lean_dec(x_241);
x_255 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_255, 0, x_253);
lean_ctor_set(x_255, 1, x_254);
return x_255;
}
}
}
else
{
lean_object* x_256; 
lean_dec(x_2);
x_256 = lean_ctor_get(x_240, 0);
lean_inc(x_256);
lean_dec(x_240);
x_221 = x_256;
x_222 = x_4;
goto block_236;
}
}
}
else
{
lean_object* x_257; lean_object* x_258; 
x_257 = lean_ctor_get(x_4, 2);
lean_inc(x_257);
x_258 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_257, x_2);
lean_dec(x_257);
if (lean_obj_tag(x_258) == 0)
{
lean_object* x_259; 
lean_inc(x_2);
x_259 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_259) == 0)
{
lean_object* x_260; lean_object* x_261; uint8_t x_262; 
x_260 = lean_ctor_get(x_259, 1);
lean_inc(x_260);
x_261 = lean_ctor_get(x_259, 0);
lean_inc(x_261);
lean_dec(x_259);
x_262 = !lean_is_exclusive(x_260);
if (x_262 == 0)
{
lean_object* x_263; lean_object* x_264; 
x_263 = lean_ctor_get(x_260, 2);
lean_inc(x_261);
x_264 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_263, x_2, x_261);
lean_ctor_set(x_260, 2, x_264);
x_221 = x_261;
x_222 = x_260;
goto block_236;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_265 = lean_ctor_get(x_260, 0);
x_266 = lean_ctor_get(x_260, 1);
x_267 = lean_ctor_get(x_260, 2);
lean_inc(x_267);
lean_inc(x_266);
lean_inc(x_265);
lean_dec(x_260);
lean_inc(x_261);
x_268 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_267, x_2, x_261);
x_269 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_269, 0, x_265);
lean_ctor_set(x_269, 1, x_266);
lean_ctor_set(x_269, 2, x_268);
x_221 = x_261;
x_222 = x_269;
goto block_236;
}
}
else
{
uint8_t x_270; 
lean_dec(x_3);
lean_dec(x_2);
x_270 = !lean_is_exclusive(x_259);
if (x_270 == 0)
{
return x_259;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_271 = lean_ctor_get(x_259, 0);
x_272 = lean_ctor_get(x_259, 1);
lean_inc(x_272);
lean_inc(x_271);
lean_dec(x_259);
x_273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_273, 0, x_271);
lean_ctor_set(x_273, 1, x_272);
return x_273;
}
}
}
else
{
lean_object* x_274; 
lean_dec(x_2);
x_274 = lean_ctor_get(x_258, 0);
lean_inc(x_274);
lean_dec(x_258);
x_221 = x_274;
x_222 = x_4;
goto block_236;
}
}
block_236:
{
lean_object* x_223; lean_object* x_224; 
x_223 = lean_unsigned_to_nat(0u);
x_224 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_223, x_3, x_222);
if (lean_obj_tag(x_224) == 0)
{
uint8_t x_225; 
x_225 = !lean_is_exclusive(x_224);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; 
x_226 = lean_ctor_get(x_224, 0);
x_227 = l_Lean_mkAppRev(x_221, x_226);
lean_dec(x_226);
lean_ctor_set(x_224, 0, x_227);
return x_224;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_228 = lean_ctor_get(x_224, 0);
x_229 = lean_ctor_get(x_224, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_224);
x_230 = l_Lean_mkAppRev(x_221, x_228);
lean_dec(x_228);
x_231 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_229);
return x_231;
}
}
else
{
uint8_t x_232; 
lean_dec(x_221);
x_232 = !lean_is_exclusive(x_224);
if (x_232 == 0)
{
return x_224;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_224, 0);
x_234 = lean_ctor_get(x_224, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_224);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
return x_235;
}
}
}
}
case 5:
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_275 = lean_ctor_get(x_2, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_2, 1);
lean_inc(x_276);
lean_dec(x_2);
x_277 = lean_array_push(x_3, x_276);
x_2 = x_275;
x_3 = x_277;
goto _start;
}
case 6:
{
lean_object* x_279; lean_object* x_280; uint8_t x_295; 
x_295 = lean_expr_has_expr_mvar(x_2);
if (x_295 == 0)
{
uint8_t x_296; 
x_296 = lean_expr_has_level_mvar(x_2);
if (x_296 == 0)
{
x_279 = x_2;
x_280 = x_4;
goto block_294;
}
else
{
lean_object* x_297; lean_object* x_298; 
x_297 = lean_ctor_get(x_4, 2);
lean_inc(x_297);
x_298 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_297, x_2);
lean_dec(x_297);
if (lean_obj_tag(x_298) == 0)
{
lean_object* x_299; 
lean_inc(x_2);
x_299 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_299) == 0)
{
lean_object* x_300; lean_object* x_301; uint8_t x_302; 
x_300 = lean_ctor_get(x_299, 1);
lean_inc(x_300);
x_301 = lean_ctor_get(x_299, 0);
lean_inc(x_301);
lean_dec(x_299);
x_302 = !lean_is_exclusive(x_300);
if (x_302 == 0)
{
lean_object* x_303; lean_object* x_304; 
x_303 = lean_ctor_get(x_300, 2);
lean_inc(x_301);
x_304 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_303, x_2, x_301);
lean_ctor_set(x_300, 2, x_304);
x_279 = x_301;
x_280 = x_300;
goto block_294;
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_305 = lean_ctor_get(x_300, 0);
x_306 = lean_ctor_get(x_300, 1);
x_307 = lean_ctor_get(x_300, 2);
lean_inc(x_307);
lean_inc(x_306);
lean_inc(x_305);
lean_dec(x_300);
lean_inc(x_301);
x_308 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_307, x_2, x_301);
x_309 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_309, 0, x_305);
lean_ctor_set(x_309, 1, x_306);
lean_ctor_set(x_309, 2, x_308);
x_279 = x_301;
x_280 = x_309;
goto block_294;
}
}
else
{
uint8_t x_310; 
lean_dec(x_3);
lean_dec(x_2);
x_310 = !lean_is_exclusive(x_299);
if (x_310 == 0)
{
return x_299;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_311 = lean_ctor_get(x_299, 0);
x_312 = lean_ctor_get(x_299, 1);
lean_inc(x_312);
lean_inc(x_311);
lean_dec(x_299);
x_313 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set(x_313, 1, x_312);
return x_313;
}
}
}
else
{
lean_object* x_314; 
lean_dec(x_2);
x_314 = lean_ctor_get(x_298, 0);
lean_inc(x_314);
lean_dec(x_298);
x_279 = x_314;
x_280 = x_4;
goto block_294;
}
}
}
else
{
lean_object* x_315; lean_object* x_316; 
x_315 = lean_ctor_get(x_4, 2);
lean_inc(x_315);
x_316 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_315, x_2);
lean_dec(x_315);
if (lean_obj_tag(x_316) == 0)
{
lean_object* x_317; 
lean_inc(x_2);
x_317 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_317) == 0)
{
lean_object* x_318; lean_object* x_319; uint8_t x_320; 
x_318 = lean_ctor_get(x_317, 1);
lean_inc(x_318);
x_319 = lean_ctor_get(x_317, 0);
lean_inc(x_319);
lean_dec(x_317);
x_320 = !lean_is_exclusive(x_318);
if (x_320 == 0)
{
lean_object* x_321; lean_object* x_322; 
x_321 = lean_ctor_get(x_318, 2);
lean_inc(x_319);
x_322 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_321, x_2, x_319);
lean_ctor_set(x_318, 2, x_322);
x_279 = x_319;
x_280 = x_318;
goto block_294;
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_323 = lean_ctor_get(x_318, 0);
x_324 = lean_ctor_get(x_318, 1);
x_325 = lean_ctor_get(x_318, 2);
lean_inc(x_325);
lean_inc(x_324);
lean_inc(x_323);
lean_dec(x_318);
lean_inc(x_319);
x_326 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_325, x_2, x_319);
x_327 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_327, 0, x_323);
lean_ctor_set(x_327, 1, x_324);
lean_ctor_set(x_327, 2, x_326);
x_279 = x_319;
x_280 = x_327;
goto block_294;
}
}
else
{
uint8_t x_328; 
lean_dec(x_3);
lean_dec(x_2);
x_328 = !lean_is_exclusive(x_317);
if (x_328 == 0)
{
return x_317;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_329 = lean_ctor_get(x_317, 0);
x_330 = lean_ctor_get(x_317, 1);
lean_inc(x_330);
lean_inc(x_329);
lean_dec(x_317);
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_329);
lean_ctor_set(x_331, 1, x_330);
return x_331;
}
}
}
else
{
lean_object* x_332; 
lean_dec(x_2);
x_332 = lean_ctor_get(x_316, 0);
lean_inc(x_332);
lean_dec(x_316);
x_279 = x_332;
x_280 = x_4;
goto block_294;
}
}
block_294:
{
lean_object* x_281; lean_object* x_282; 
x_281 = lean_unsigned_to_nat(0u);
x_282 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_281, x_3, x_280);
if (lean_obj_tag(x_282) == 0)
{
uint8_t x_283; 
x_283 = !lean_is_exclusive(x_282);
if (x_283 == 0)
{
lean_object* x_284; lean_object* x_285; 
x_284 = lean_ctor_get(x_282, 0);
x_285 = l_Lean_mkAppRev(x_279, x_284);
lean_dec(x_284);
lean_ctor_set(x_282, 0, x_285);
return x_282;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
x_286 = lean_ctor_get(x_282, 0);
x_287 = lean_ctor_get(x_282, 1);
lean_inc(x_287);
lean_inc(x_286);
lean_dec(x_282);
x_288 = l_Lean_mkAppRev(x_279, x_286);
lean_dec(x_286);
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_287);
return x_289;
}
}
else
{
uint8_t x_290; 
lean_dec(x_279);
x_290 = !lean_is_exclusive(x_282);
if (x_290 == 0)
{
return x_282;
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_291 = lean_ctor_get(x_282, 0);
x_292 = lean_ctor_get(x_282, 1);
lean_inc(x_292);
lean_inc(x_291);
lean_dec(x_282);
x_293 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_293, 0, x_291);
lean_ctor_set(x_293, 1, x_292);
return x_293;
}
}
}
}
case 7:
{
lean_object* x_333; lean_object* x_334; uint8_t x_349; 
x_349 = lean_expr_has_expr_mvar(x_2);
if (x_349 == 0)
{
uint8_t x_350; 
x_350 = lean_expr_has_level_mvar(x_2);
if (x_350 == 0)
{
x_333 = x_2;
x_334 = x_4;
goto block_348;
}
else
{
lean_object* x_351; lean_object* x_352; 
x_351 = lean_ctor_get(x_4, 2);
lean_inc(x_351);
x_352 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_351, x_2);
lean_dec(x_351);
if (lean_obj_tag(x_352) == 0)
{
lean_object* x_353; 
lean_inc(x_2);
x_353 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; lean_object* x_355; uint8_t x_356; 
x_354 = lean_ctor_get(x_353, 1);
lean_inc(x_354);
x_355 = lean_ctor_get(x_353, 0);
lean_inc(x_355);
lean_dec(x_353);
x_356 = !lean_is_exclusive(x_354);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; 
x_357 = lean_ctor_get(x_354, 2);
lean_inc(x_355);
x_358 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_357, x_2, x_355);
lean_ctor_set(x_354, 2, x_358);
x_333 = x_355;
x_334 = x_354;
goto block_348;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; 
x_359 = lean_ctor_get(x_354, 0);
x_360 = lean_ctor_get(x_354, 1);
x_361 = lean_ctor_get(x_354, 2);
lean_inc(x_361);
lean_inc(x_360);
lean_inc(x_359);
lean_dec(x_354);
lean_inc(x_355);
x_362 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_361, x_2, x_355);
x_363 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_363, 0, x_359);
lean_ctor_set(x_363, 1, x_360);
lean_ctor_set(x_363, 2, x_362);
x_333 = x_355;
x_334 = x_363;
goto block_348;
}
}
else
{
uint8_t x_364; 
lean_dec(x_3);
lean_dec(x_2);
x_364 = !lean_is_exclusive(x_353);
if (x_364 == 0)
{
return x_353;
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_365 = lean_ctor_get(x_353, 0);
x_366 = lean_ctor_get(x_353, 1);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_353);
x_367 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_366);
return x_367;
}
}
}
else
{
lean_object* x_368; 
lean_dec(x_2);
x_368 = lean_ctor_get(x_352, 0);
lean_inc(x_368);
lean_dec(x_352);
x_333 = x_368;
x_334 = x_4;
goto block_348;
}
}
}
else
{
lean_object* x_369; lean_object* x_370; 
x_369 = lean_ctor_get(x_4, 2);
lean_inc(x_369);
x_370 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_369, x_2);
lean_dec(x_369);
if (lean_obj_tag(x_370) == 0)
{
lean_object* x_371; 
lean_inc(x_2);
x_371 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_371) == 0)
{
lean_object* x_372; lean_object* x_373; uint8_t x_374; 
x_372 = lean_ctor_get(x_371, 1);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 0);
lean_inc(x_373);
lean_dec(x_371);
x_374 = !lean_is_exclusive(x_372);
if (x_374 == 0)
{
lean_object* x_375; lean_object* x_376; 
x_375 = lean_ctor_get(x_372, 2);
lean_inc(x_373);
x_376 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_375, x_2, x_373);
lean_ctor_set(x_372, 2, x_376);
x_333 = x_373;
x_334 = x_372;
goto block_348;
}
else
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_377 = lean_ctor_get(x_372, 0);
x_378 = lean_ctor_get(x_372, 1);
x_379 = lean_ctor_get(x_372, 2);
lean_inc(x_379);
lean_inc(x_378);
lean_inc(x_377);
lean_dec(x_372);
lean_inc(x_373);
x_380 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_379, x_2, x_373);
x_381 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_381, 0, x_377);
lean_ctor_set(x_381, 1, x_378);
lean_ctor_set(x_381, 2, x_380);
x_333 = x_373;
x_334 = x_381;
goto block_348;
}
}
else
{
uint8_t x_382; 
lean_dec(x_3);
lean_dec(x_2);
x_382 = !lean_is_exclusive(x_371);
if (x_382 == 0)
{
return x_371;
}
else
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_383 = lean_ctor_get(x_371, 0);
x_384 = lean_ctor_get(x_371, 1);
lean_inc(x_384);
lean_inc(x_383);
lean_dec(x_371);
x_385 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_385, 0, x_383);
lean_ctor_set(x_385, 1, x_384);
return x_385;
}
}
}
else
{
lean_object* x_386; 
lean_dec(x_2);
x_386 = lean_ctor_get(x_370, 0);
lean_inc(x_386);
lean_dec(x_370);
x_333 = x_386;
x_334 = x_4;
goto block_348;
}
}
block_348:
{
lean_object* x_335; lean_object* x_336; 
x_335 = lean_unsigned_to_nat(0u);
x_336 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_335, x_3, x_334);
if (lean_obj_tag(x_336) == 0)
{
uint8_t x_337; 
x_337 = !lean_is_exclusive(x_336);
if (x_337 == 0)
{
lean_object* x_338; lean_object* x_339; 
x_338 = lean_ctor_get(x_336, 0);
x_339 = l_Lean_mkAppRev(x_333, x_338);
lean_dec(x_338);
lean_ctor_set(x_336, 0, x_339);
return x_336;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; 
x_340 = lean_ctor_get(x_336, 0);
x_341 = lean_ctor_get(x_336, 1);
lean_inc(x_341);
lean_inc(x_340);
lean_dec(x_336);
x_342 = l_Lean_mkAppRev(x_333, x_340);
lean_dec(x_340);
x_343 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_343, 0, x_342);
lean_ctor_set(x_343, 1, x_341);
return x_343;
}
}
else
{
uint8_t x_344; 
lean_dec(x_333);
x_344 = !lean_is_exclusive(x_336);
if (x_344 == 0)
{
return x_336;
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_345 = lean_ctor_get(x_336, 0);
x_346 = lean_ctor_get(x_336, 1);
lean_inc(x_346);
lean_inc(x_345);
lean_dec(x_336);
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_345);
lean_ctor_set(x_347, 1, x_346);
return x_347;
}
}
}
}
case 8:
{
lean_object* x_387; lean_object* x_388; uint8_t x_403; 
x_403 = lean_expr_has_expr_mvar(x_2);
if (x_403 == 0)
{
uint8_t x_404; 
x_404 = lean_expr_has_level_mvar(x_2);
if (x_404 == 0)
{
x_387 = x_2;
x_388 = x_4;
goto block_402;
}
else
{
lean_object* x_405; lean_object* x_406; 
x_405 = lean_ctor_get(x_4, 2);
lean_inc(x_405);
x_406 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_405, x_2);
lean_dec(x_405);
if (lean_obj_tag(x_406) == 0)
{
lean_object* x_407; 
lean_inc(x_2);
x_407 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_407) == 0)
{
lean_object* x_408; lean_object* x_409; uint8_t x_410; 
x_408 = lean_ctor_get(x_407, 1);
lean_inc(x_408);
x_409 = lean_ctor_get(x_407, 0);
lean_inc(x_409);
lean_dec(x_407);
x_410 = !lean_is_exclusive(x_408);
if (x_410 == 0)
{
lean_object* x_411; lean_object* x_412; 
x_411 = lean_ctor_get(x_408, 2);
lean_inc(x_409);
x_412 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_411, x_2, x_409);
lean_ctor_set(x_408, 2, x_412);
x_387 = x_409;
x_388 = x_408;
goto block_402;
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; 
x_413 = lean_ctor_get(x_408, 0);
x_414 = lean_ctor_get(x_408, 1);
x_415 = lean_ctor_get(x_408, 2);
lean_inc(x_415);
lean_inc(x_414);
lean_inc(x_413);
lean_dec(x_408);
lean_inc(x_409);
x_416 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_415, x_2, x_409);
x_417 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_417, 0, x_413);
lean_ctor_set(x_417, 1, x_414);
lean_ctor_set(x_417, 2, x_416);
x_387 = x_409;
x_388 = x_417;
goto block_402;
}
}
else
{
uint8_t x_418; 
lean_dec(x_3);
lean_dec(x_2);
x_418 = !lean_is_exclusive(x_407);
if (x_418 == 0)
{
return x_407;
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; 
x_419 = lean_ctor_get(x_407, 0);
x_420 = lean_ctor_get(x_407, 1);
lean_inc(x_420);
lean_inc(x_419);
lean_dec(x_407);
x_421 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_421, 0, x_419);
lean_ctor_set(x_421, 1, x_420);
return x_421;
}
}
}
else
{
lean_object* x_422; 
lean_dec(x_2);
x_422 = lean_ctor_get(x_406, 0);
lean_inc(x_422);
lean_dec(x_406);
x_387 = x_422;
x_388 = x_4;
goto block_402;
}
}
}
else
{
lean_object* x_423; lean_object* x_424; 
x_423 = lean_ctor_get(x_4, 2);
lean_inc(x_423);
x_424 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_423, x_2);
lean_dec(x_423);
if (lean_obj_tag(x_424) == 0)
{
lean_object* x_425; 
lean_inc(x_2);
x_425 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_425) == 0)
{
lean_object* x_426; lean_object* x_427; uint8_t x_428; 
x_426 = lean_ctor_get(x_425, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_425, 0);
lean_inc(x_427);
lean_dec(x_425);
x_428 = !lean_is_exclusive(x_426);
if (x_428 == 0)
{
lean_object* x_429; lean_object* x_430; 
x_429 = lean_ctor_get(x_426, 2);
lean_inc(x_427);
x_430 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_429, x_2, x_427);
lean_ctor_set(x_426, 2, x_430);
x_387 = x_427;
x_388 = x_426;
goto block_402;
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; 
x_431 = lean_ctor_get(x_426, 0);
x_432 = lean_ctor_get(x_426, 1);
x_433 = lean_ctor_get(x_426, 2);
lean_inc(x_433);
lean_inc(x_432);
lean_inc(x_431);
lean_dec(x_426);
lean_inc(x_427);
x_434 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_433, x_2, x_427);
x_435 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_435, 0, x_431);
lean_ctor_set(x_435, 1, x_432);
lean_ctor_set(x_435, 2, x_434);
x_387 = x_427;
x_388 = x_435;
goto block_402;
}
}
else
{
uint8_t x_436; 
lean_dec(x_3);
lean_dec(x_2);
x_436 = !lean_is_exclusive(x_425);
if (x_436 == 0)
{
return x_425;
}
else
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; 
x_437 = lean_ctor_get(x_425, 0);
x_438 = lean_ctor_get(x_425, 1);
lean_inc(x_438);
lean_inc(x_437);
lean_dec(x_425);
x_439 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_439, 0, x_437);
lean_ctor_set(x_439, 1, x_438);
return x_439;
}
}
}
else
{
lean_object* x_440; 
lean_dec(x_2);
x_440 = lean_ctor_get(x_424, 0);
lean_inc(x_440);
lean_dec(x_424);
x_387 = x_440;
x_388 = x_4;
goto block_402;
}
}
block_402:
{
lean_object* x_389; lean_object* x_390; 
x_389 = lean_unsigned_to_nat(0u);
x_390 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_389, x_3, x_388);
if (lean_obj_tag(x_390) == 0)
{
uint8_t x_391; 
x_391 = !lean_is_exclusive(x_390);
if (x_391 == 0)
{
lean_object* x_392; lean_object* x_393; 
x_392 = lean_ctor_get(x_390, 0);
x_393 = l_Lean_mkAppRev(x_387, x_392);
lean_dec(x_392);
lean_ctor_set(x_390, 0, x_393);
return x_390;
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; 
x_394 = lean_ctor_get(x_390, 0);
x_395 = lean_ctor_get(x_390, 1);
lean_inc(x_395);
lean_inc(x_394);
lean_dec(x_390);
x_396 = l_Lean_mkAppRev(x_387, x_394);
lean_dec(x_394);
x_397 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_397, 0, x_396);
lean_ctor_set(x_397, 1, x_395);
return x_397;
}
}
else
{
uint8_t x_398; 
lean_dec(x_387);
x_398 = !lean_is_exclusive(x_390);
if (x_398 == 0)
{
return x_390;
}
else
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; 
x_399 = lean_ctor_get(x_390, 0);
x_400 = lean_ctor_get(x_390, 1);
lean_inc(x_400);
lean_inc(x_399);
lean_dec(x_390);
x_401 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_401, 0, x_399);
lean_ctor_set(x_401, 1, x_400);
return x_401;
}
}
}
}
case 9:
{
lean_object* x_441; lean_object* x_442; uint8_t x_457; 
x_457 = lean_expr_has_expr_mvar(x_2);
if (x_457 == 0)
{
uint8_t x_458; 
x_458 = lean_expr_has_level_mvar(x_2);
if (x_458 == 0)
{
x_441 = x_2;
x_442 = x_4;
goto block_456;
}
else
{
lean_object* x_459; lean_object* x_460; 
x_459 = lean_ctor_get(x_4, 2);
lean_inc(x_459);
x_460 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_459, x_2);
lean_dec(x_459);
if (lean_obj_tag(x_460) == 0)
{
lean_object* x_461; 
lean_inc(x_2);
x_461 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_461) == 0)
{
lean_object* x_462; lean_object* x_463; uint8_t x_464; 
x_462 = lean_ctor_get(x_461, 1);
lean_inc(x_462);
x_463 = lean_ctor_get(x_461, 0);
lean_inc(x_463);
lean_dec(x_461);
x_464 = !lean_is_exclusive(x_462);
if (x_464 == 0)
{
lean_object* x_465; lean_object* x_466; 
x_465 = lean_ctor_get(x_462, 2);
lean_inc(x_463);
x_466 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_465, x_2, x_463);
lean_ctor_set(x_462, 2, x_466);
x_441 = x_463;
x_442 = x_462;
goto block_456;
}
else
{
lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; 
x_467 = lean_ctor_get(x_462, 0);
x_468 = lean_ctor_get(x_462, 1);
x_469 = lean_ctor_get(x_462, 2);
lean_inc(x_469);
lean_inc(x_468);
lean_inc(x_467);
lean_dec(x_462);
lean_inc(x_463);
x_470 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_469, x_2, x_463);
x_471 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_471, 0, x_467);
lean_ctor_set(x_471, 1, x_468);
lean_ctor_set(x_471, 2, x_470);
x_441 = x_463;
x_442 = x_471;
goto block_456;
}
}
else
{
uint8_t x_472; 
lean_dec(x_3);
lean_dec(x_2);
x_472 = !lean_is_exclusive(x_461);
if (x_472 == 0)
{
return x_461;
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; 
x_473 = lean_ctor_get(x_461, 0);
x_474 = lean_ctor_get(x_461, 1);
lean_inc(x_474);
lean_inc(x_473);
lean_dec(x_461);
x_475 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_475, 0, x_473);
lean_ctor_set(x_475, 1, x_474);
return x_475;
}
}
}
else
{
lean_object* x_476; 
lean_dec(x_2);
x_476 = lean_ctor_get(x_460, 0);
lean_inc(x_476);
lean_dec(x_460);
x_441 = x_476;
x_442 = x_4;
goto block_456;
}
}
}
else
{
lean_object* x_477; lean_object* x_478; 
x_477 = lean_ctor_get(x_4, 2);
lean_inc(x_477);
x_478 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_477, x_2);
lean_dec(x_477);
if (lean_obj_tag(x_478) == 0)
{
lean_object* x_479; 
lean_inc(x_2);
x_479 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_479) == 0)
{
lean_object* x_480; lean_object* x_481; uint8_t x_482; 
x_480 = lean_ctor_get(x_479, 1);
lean_inc(x_480);
x_481 = lean_ctor_get(x_479, 0);
lean_inc(x_481);
lean_dec(x_479);
x_482 = !lean_is_exclusive(x_480);
if (x_482 == 0)
{
lean_object* x_483; lean_object* x_484; 
x_483 = lean_ctor_get(x_480, 2);
lean_inc(x_481);
x_484 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_483, x_2, x_481);
lean_ctor_set(x_480, 2, x_484);
x_441 = x_481;
x_442 = x_480;
goto block_456;
}
else
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; 
x_485 = lean_ctor_get(x_480, 0);
x_486 = lean_ctor_get(x_480, 1);
x_487 = lean_ctor_get(x_480, 2);
lean_inc(x_487);
lean_inc(x_486);
lean_inc(x_485);
lean_dec(x_480);
lean_inc(x_481);
x_488 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_487, x_2, x_481);
x_489 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_489, 0, x_485);
lean_ctor_set(x_489, 1, x_486);
lean_ctor_set(x_489, 2, x_488);
x_441 = x_481;
x_442 = x_489;
goto block_456;
}
}
else
{
uint8_t x_490; 
lean_dec(x_3);
lean_dec(x_2);
x_490 = !lean_is_exclusive(x_479);
if (x_490 == 0)
{
return x_479;
}
else
{
lean_object* x_491; lean_object* x_492; lean_object* x_493; 
x_491 = lean_ctor_get(x_479, 0);
x_492 = lean_ctor_get(x_479, 1);
lean_inc(x_492);
lean_inc(x_491);
lean_dec(x_479);
x_493 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_493, 0, x_491);
lean_ctor_set(x_493, 1, x_492);
return x_493;
}
}
}
else
{
lean_object* x_494; 
lean_dec(x_2);
x_494 = lean_ctor_get(x_478, 0);
lean_inc(x_494);
lean_dec(x_478);
x_441 = x_494;
x_442 = x_4;
goto block_456;
}
}
block_456:
{
lean_object* x_443; lean_object* x_444; 
x_443 = lean_unsigned_to_nat(0u);
x_444 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_443, x_3, x_442);
if (lean_obj_tag(x_444) == 0)
{
uint8_t x_445; 
x_445 = !lean_is_exclusive(x_444);
if (x_445 == 0)
{
lean_object* x_446; lean_object* x_447; 
x_446 = lean_ctor_get(x_444, 0);
x_447 = l_Lean_mkAppRev(x_441, x_446);
lean_dec(x_446);
lean_ctor_set(x_444, 0, x_447);
return x_444;
}
else
{
lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; 
x_448 = lean_ctor_get(x_444, 0);
x_449 = lean_ctor_get(x_444, 1);
lean_inc(x_449);
lean_inc(x_448);
lean_dec(x_444);
x_450 = l_Lean_mkAppRev(x_441, x_448);
lean_dec(x_448);
x_451 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_451, 0, x_450);
lean_ctor_set(x_451, 1, x_449);
return x_451;
}
}
else
{
uint8_t x_452; 
lean_dec(x_441);
x_452 = !lean_is_exclusive(x_444);
if (x_452 == 0)
{
return x_444;
}
else
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; 
x_453 = lean_ctor_get(x_444, 0);
x_454 = lean_ctor_get(x_444, 1);
lean_inc(x_454);
lean_inc(x_453);
lean_dec(x_444);
x_455 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_455, 0, x_453);
lean_ctor_set(x_455, 1, x_454);
return x_455;
}
}
}
}
case 10:
{
lean_object* x_495; lean_object* x_496; uint8_t x_511; 
x_511 = lean_expr_has_expr_mvar(x_2);
if (x_511 == 0)
{
uint8_t x_512; 
x_512 = lean_expr_has_level_mvar(x_2);
if (x_512 == 0)
{
x_495 = x_2;
x_496 = x_4;
goto block_510;
}
else
{
lean_object* x_513; lean_object* x_514; 
x_513 = lean_ctor_get(x_4, 2);
lean_inc(x_513);
x_514 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_513, x_2);
lean_dec(x_513);
if (lean_obj_tag(x_514) == 0)
{
lean_object* x_515; 
lean_inc(x_2);
x_515 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_515) == 0)
{
lean_object* x_516; lean_object* x_517; uint8_t x_518; 
x_516 = lean_ctor_get(x_515, 1);
lean_inc(x_516);
x_517 = lean_ctor_get(x_515, 0);
lean_inc(x_517);
lean_dec(x_515);
x_518 = !lean_is_exclusive(x_516);
if (x_518 == 0)
{
lean_object* x_519; lean_object* x_520; 
x_519 = lean_ctor_get(x_516, 2);
lean_inc(x_517);
x_520 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_519, x_2, x_517);
lean_ctor_set(x_516, 2, x_520);
x_495 = x_517;
x_496 = x_516;
goto block_510;
}
else
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; 
x_521 = lean_ctor_get(x_516, 0);
x_522 = lean_ctor_get(x_516, 1);
x_523 = lean_ctor_get(x_516, 2);
lean_inc(x_523);
lean_inc(x_522);
lean_inc(x_521);
lean_dec(x_516);
lean_inc(x_517);
x_524 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_523, x_2, x_517);
x_525 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_525, 0, x_521);
lean_ctor_set(x_525, 1, x_522);
lean_ctor_set(x_525, 2, x_524);
x_495 = x_517;
x_496 = x_525;
goto block_510;
}
}
else
{
uint8_t x_526; 
lean_dec(x_3);
lean_dec(x_2);
x_526 = !lean_is_exclusive(x_515);
if (x_526 == 0)
{
return x_515;
}
else
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; 
x_527 = lean_ctor_get(x_515, 0);
x_528 = lean_ctor_get(x_515, 1);
lean_inc(x_528);
lean_inc(x_527);
lean_dec(x_515);
x_529 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_529, 0, x_527);
lean_ctor_set(x_529, 1, x_528);
return x_529;
}
}
}
else
{
lean_object* x_530; 
lean_dec(x_2);
x_530 = lean_ctor_get(x_514, 0);
lean_inc(x_530);
lean_dec(x_514);
x_495 = x_530;
x_496 = x_4;
goto block_510;
}
}
}
else
{
lean_object* x_531; lean_object* x_532; 
x_531 = lean_ctor_get(x_4, 2);
lean_inc(x_531);
x_532 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_531, x_2);
lean_dec(x_531);
if (lean_obj_tag(x_532) == 0)
{
lean_object* x_533; 
lean_inc(x_2);
x_533 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_533) == 0)
{
lean_object* x_534; lean_object* x_535; uint8_t x_536; 
x_534 = lean_ctor_get(x_533, 1);
lean_inc(x_534);
x_535 = lean_ctor_get(x_533, 0);
lean_inc(x_535);
lean_dec(x_533);
x_536 = !lean_is_exclusive(x_534);
if (x_536 == 0)
{
lean_object* x_537; lean_object* x_538; 
x_537 = lean_ctor_get(x_534, 2);
lean_inc(x_535);
x_538 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_537, x_2, x_535);
lean_ctor_set(x_534, 2, x_538);
x_495 = x_535;
x_496 = x_534;
goto block_510;
}
else
{
lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; 
x_539 = lean_ctor_get(x_534, 0);
x_540 = lean_ctor_get(x_534, 1);
x_541 = lean_ctor_get(x_534, 2);
lean_inc(x_541);
lean_inc(x_540);
lean_inc(x_539);
lean_dec(x_534);
lean_inc(x_535);
x_542 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_541, x_2, x_535);
x_543 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_543, 0, x_539);
lean_ctor_set(x_543, 1, x_540);
lean_ctor_set(x_543, 2, x_542);
x_495 = x_535;
x_496 = x_543;
goto block_510;
}
}
else
{
uint8_t x_544; 
lean_dec(x_3);
lean_dec(x_2);
x_544 = !lean_is_exclusive(x_533);
if (x_544 == 0)
{
return x_533;
}
else
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; 
x_545 = lean_ctor_get(x_533, 0);
x_546 = lean_ctor_get(x_533, 1);
lean_inc(x_546);
lean_inc(x_545);
lean_dec(x_533);
x_547 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_547, 0, x_545);
lean_ctor_set(x_547, 1, x_546);
return x_547;
}
}
}
else
{
lean_object* x_548; 
lean_dec(x_2);
x_548 = lean_ctor_get(x_532, 0);
lean_inc(x_548);
lean_dec(x_532);
x_495 = x_548;
x_496 = x_4;
goto block_510;
}
}
block_510:
{
lean_object* x_497; lean_object* x_498; 
x_497 = lean_unsigned_to_nat(0u);
x_498 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_497, x_3, x_496);
if (lean_obj_tag(x_498) == 0)
{
uint8_t x_499; 
x_499 = !lean_is_exclusive(x_498);
if (x_499 == 0)
{
lean_object* x_500; lean_object* x_501; 
x_500 = lean_ctor_get(x_498, 0);
x_501 = l_Lean_mkAppRev(x_495, x_500);
lean_dec(x_500);
lean_ctor_set(x_498, 0, x_501);
return x_498;
}
else
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; 
x_502 = lean_ctor_get(x_498, 0);
x_503 = lean_ctor_get(x_498, 1);
lean_inc(x_503);
lean_inc(x_502);
lean_dec(x_498);
x_504 = l_Lean_mkAppRev(x_495, x_502);
lean_dec(x_502);
x_505 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_505, 0, x_504);
lean_ctor_set(x_505, 1, x_503);
return x_505;
}
}
else
{
uint8_t x_506; 
lean_dec(x_495);
x_506 = !lean_is_exclusive(x_498);
if (x_506 == 0)
{
return x_498;
}
else
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; 
x_507 = lean_ctor_get(x_498, 0);
x_508 = lean_ctor_get(x_498, 1);
lean_inc(x_508);
lean_inc(x_507);
lean_dec(x_498);
x_509 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_509, 0, x_507);
lean_ctor_set(x_509, 1, x_508);
return x_509;
}
}
}
}
default: 
{
lean_object* x_549; lean_object* x_550; uint8_t x_565; 
x_565 = lean_expr_has_expr_mvar(x_2);
if (x_565 == 0)
{
uint8_t x_566; 
x_566 = lean_expr_has_level_mvar(x_2);
if (x_566 == 0)
{
x_549 = x_2;
x_550 = x_4;
goto block_564;
}
else
{
lean_object* x_567; lean_object* x_568; 
x_567 = lean_ctor_get(x_4, 2);
lean_inc(x_567);
x_568 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_567, x_2);
lean_dec(x_567);
if (lean_obj_tag(x_568) == 0)
{
lean_object* x_569; 
lean_inc(x_2);
x_569 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_569) == 0)
{
lean_object* x_570; lean_object* x_571; uint8_t x_572; 
x_570 = lean_ctor_get(x_569, 1);
lean_inc(x_570);
x_571 = lean_ctor_get(x_569, 0);
lean_inc(x_571);
lean_dec(x_569);
x_572 = !lean_is_exclusive(x_570);
if (x_572 == 0)
{
lean_object* x_573; lean_object* x_574; 
x_573 = lean_ctor_get(x_570, 2);
lean_inc(x_571);
x_574 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_573, x_2, x_571);
lean_ctor_set(x_570, 2, x_574);
x_549 = x_571;
x_550 = x_570;
goto block_564;
}
else
{
lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; 
x_575 = lean_ctor_get(x_570, 0);
x_576 = lean_ctor_get(x_570, 1);
x_577 = lean_ctor_get(x_570, 2);
lean_inc(x_577);
lean_inc(x_576);
lean_inc(x_575);
lean_dec(x_570);
lean_inc(x_571);
x_578 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_577, x_2, x_571);
x_579 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_579, 0, x_575);
lean_ctor_set(x_579, 1, x_576);
lean_ctor_set(x_579, 2, x_578);
x_549 = x_571;
x_550 = x_579;
goto block_564;
}
}
else
{
uint8_t x_580; 
lean_dec(x_3);
lean_dec(x_2);
x_580 = !lean_is_exclusive(x_569);
if (x_580 == 0)
{
return x_569;
}
else
{
lean_object* x_581; lean_object* x_582; lean_object* x_583; 
x_581 = lean_ctor_get(x_569, 0);
x_582 = lean_ctor_get(x_569, 1);
lean_inc(x_582);
lean_inc(x_581);
lean_dec(x_569);
x_583 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_583, 0, x_581);
lean_ctor_set(x_583, 1, x_582);
return x_583;
}
}
}
else
{
lean_object* x_584; 
lean_dec(x_2);
x_584 = lean_ctor_get(x_568, 0);
lean_inc(x_584);
lean_dec(x_568);
x_549 = x_584;
x_550 = x_4;
goto block_564;
}
}
}
else
{
lean_object* x_585; lean_object* x_586; 
x_585 = lean_ctor_get(x_4, 2);
lean_inc(x_585);
x_586 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_585, x_2);
lean_dec(x_585);
if (lean_obj_tag(x_586) == 0)
{
lean_object* x_587; 
lean_inc(x_2);
x_587 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_4);
if (lean_obj_tag(x_587) == 0)
{
lean_object* x_588; lean_object* x_589; uint8_t x_590; 
x_588 = lean_ctor_get(x_587, 1);
lean_inc(x_588);
x_589 = lean_ctor_get(x_587, 0);
lean_inc(x_589);
lean_dec(x_587);
x_590 = !lean_is_exclusive(x_588);
if (x_590 == 0)
{
lean_object* x_591; lean_object* x_592; 
x_591 = lean_ctor_get(x_588, 2);
lean_inc(x_589);
x_592 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_591, x_2, x_589);
lean_ctor_set(x_588, 2, x_592);
x_549 = x_589;
x_550 = x_588;
goto block_564;
}
else
{
lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; 
x_593 = lean_ctor_get(x_588, 0);
x_594 = lean_ctor_get(x_588, 1);
x_595 = lean_ctor_get(x_588, 2);
lean_inc(x_595);
lean_inc(x_594);
lean_inc(x_593);
lean_dec(x_588);
lean_inc(x_589);
x_596 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_595, x_2, x_589);
x_597 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_597, 0, x_593);
lean_ctor_set(x_597, 1, x_594);
lean_ctor_set(x_597, 2, x_596);
x_549 = x_589;
x_550 = x_597;
goto block_564;
}
}
else
{
uint8_t x_598; 
lean_dec(x_3);
lean_dec(x_2);
x_598 = !lean_is_exclusive(x_587);
if (x_598 == 0)
{
return x_587;
}
else
{
lean_object* x_599; lean_object* x_600; lean_object* x_601; 
x_599 = lean_ctor_get(x_587, 0);
x_600 = lean_ctor_get(x_587, 1);
lean_inc(x_600);
lean_inc(x_599);
lean_dec(x_587);
x_601 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_601, 0, x_599);
lean_ctor_set(x_601, 1, x_600);
return x_601;
}
}
}
else
{
lean_object* x_602; 
lean_dec(x_2);
x_602 = lean_ctor_get(x_586, 0);
lean_inc(x_602);
lean_dec(x_586);
x_549 = x_602;
x_550 = x_4;
goto block_564;
}
}
block_564:
{
lean_object* x_551; lean_object* x_552; 
x_551 = lean_unsigned_to_nat(0u);
x_552 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_551, x_3, x_550);
if (lean_obj_tag(x_552) == 0)
{
uint8_t x_553; 
x_553 = !lean_is_exclusive(x_552);
if (x_553 == 0)
{
lean_object* x_554; lean_object* x_555; 
x_554 = lean_ctor_get(x_552, 0);
x_555 = l_Lean_mkAppRev(x_549, x_554);
lean_dec(x_554);
lean_ctor_set(x_552, 0, x_555);
return x_552;
}
else
{
lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; 
x_556 = lean_ctor_get(x_552, 0);
x_557 = lean_ctor_get(x_552, 1);
lean_inc(x_557);
lean_inc(x_556);
lean_dec(x_552);
x_558 = l_Lean_mkAppRev(x_549, x_556);
lean_dec(x_556);
x_559 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_559, 0, x_558);
lean_ctor_set(x_559, 1, x_557);
return x_559;
}
}
else
{
uint8_t x_560; 
lean_dec(x_549);
x_560 = !lean_is_exclusive(x_552);
if (x_560 == 0)
{
return x_552;
}
else
{
lean_object* x_561; lean_object* x_562; lean_object* x_563; 
x_561 = lean_ctor_get(x_552, 0);
x_562 = lean_ctor_get(x_552, 1);
lean_inc(x_562);
lean_inc(x_561);
lean_dec(x_552);
x_563 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_563, 0, x_561);
lean_ctor_set(x_563, 1, x_562);
return x_563;
}
}
}
}
}
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_15; lean_object* x_16; 
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_3, 0);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_27);
x_28 = lean_metavar_ctx_get_expr_assignment(x_27, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_29 = l_Lean_MetavarContext_getDecl(x_27, x_26);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
x_31 = l_Lean_AbstractMetavarContext_MkBinding_getInScope(x_30, x_1);
x_32 = lean_array_get_size(x_31);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
lean_inc(x_30);
lean_inc(x_27);
x_35 = l_Lean_AbstractMetavarContext_MkBinding_collectDeps___at_Lean_MetavarContext_mkLambda___spec__4(x_27, x_30, x_31);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_2);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_35, 0);
lean_inc(x_38);
lean_dec(x_35);
lean_inc(x_30);
x_39 = l_Lean_AbstractMetavarContext_MkBinding_reduceLocalContext(x_30, x_38);
x_40 = lean_ctor_get(x_29, 2);
lean_inc(x_40);
x_41 = 0;
lean_inc(x_38);
lean_inc(x_30);
x_42 = l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__62(x_41, x_30, x_38, x_40, x_3);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
lean_dec(x_47);
x_48 = !lean_is_exclusive(x_43);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_43, 1);
lean_dec(x_49);
x_50 = lean_ctor_get(x_43, 0);
lean_dec(x_50);
x_51 = !lean_is_exclusive(x_44);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_52 = lean_ctor_get(x_44, 0);
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
lean_inc(x_52);
x_54 = lean_name_mk_numeral(x_52, x_53);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_add(x_53, x_55);
lean_dec(x_53);
lean_ctor_set(x_44, 1, x_56);
x_57 = lean_ctor_get_uint8(x_29, sizeof(void*)*3);
lean_dec(x_29);
x_58 = lean_box(0);
lean_inc(x_54);
x_59 = lean_metavar_ctx_mk_decl(x_27, x_54, x_58, x_39, x_46, x_57);
lean_inc(x_54);
x_60 = lean_expr_mk_mvar(x_54);
lean_inc(x_30);
x_61 = l_Array_iterateMAux___main___at_Lean_AbstractMetavarContext_MkBinding_mkMVarApp___spec__1(x_30, x_38, x_38, x_33, x_60);
if (x_57 == 0)
{
lean_object* x_62; 
lean_dec(x_54);
lean_dec(x_38);
lean_dec(x_30);
lean_dec(x_2);
lean_inc(x_61);
x_62 = lean_metavar_ctx_assign_expr(x_59, x_26, x_61);
lean_ctor_set(x_43, 0, x_62);
lean_ctor_set(x_42, 0, x_61);
return x_42;
}
else
{
lean_object* x_63; 
lean_dec(x_26);
x_63 = lean_metavar_ctx_assign_delayed(x_59, x_54, x_30, x_38, x_2);
lean_ctor_set(x_43, 0, x_63);
lean_ctor_set(x_42, 0, x_61);
return x_42;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_64 = lean_ctor_get(x_44, 0);
x_65 = lean_ctor_get(x_44, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_44);
lean_inc(x_65);
lean_inc(x_64);
x_66 = lean_name_mk_numeral(x_64, x_65);
x_67 = lean_unsigned_to_nat(1u);
x_68 = lean_nat_add(x_65, x_67);
lean_dec(x_65);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_ctor_get_uint8(x_29, sizeof(void*)*3);
lean_dec(x_29);
x_71 = lean_box(0);
lean_inc(x_66);
x_72 = lean_metavar_ctx_mk_decl(x_27, x_66, x_71, x_39, x_46, x_70);
lean_inc(x_66);
x_73 = lean_expr_mk_mvar(x_66);
lean_inc(x_30);
x_74 = l_Array_iterateMAux___main___at_Lean_AbstractMetavarContext_MkBinding_mkMVarApp___spec__1(x_30, x_38, x_38, x_33, x_73);
if (x_70 == 0)
{
lean_object* x_75; 
lean_dec(x_66);
lean_dec(x_38);
lean_dec(x_30);
lean_dec(x_2);
lean_inc(x_74);
x_75 = lean_metavar_ctx_assign_expr(x_72, x_26, x_74);
lean_ctor_set(x_43, 1, x_69);
lean_ctor_set(x_43, 0, x_75);
lean_ctor_set(x_42, 0, x_74);
return x_42;
}
else
{
lean_object* x_76; 
lean_dec(x_26);
x_76 = lean_metavar_ctx_assign_delayed(x_72, x_66, x_30, x_38, x_2);
lean_ctor_set(x_43, 1, x_69);
lean_ctor_set(x_43, 0, x_76);
lean_ctor_set(x_42, 0, x_74);
return x_42;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_77 = lean_ctor_get(x_43, 2);
lean_inc(x_77);
lean_dec(x_43);
x_78 = lean_ctor_get(x_44, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_44, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_80 = x_44;
} else {
 lean_dec_ref(x_44);
 x_80 = lean_box(0);
}
lean_inc(x_79);
lean_inc(x_78);
x_81 = lean_name_mk_numeral(x_78, x_79);
x_82 = lean_unsigned_to_nat(1u);
x_83 = lean_nat_add(x_79, x_82);
lean_dec(x_79);
if (lean_is_scalar(x_80)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_80;
}
lean_ctor_set(x_84, 0, x_78);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_ctor_get_uint8(x_29, sizeof(void*)*3);
lean_dec(x_29);
x_86 = lean_box(0);
lean_inc(x_81);
x_87 = lean_metavar_ctx_mk_decl(x_27, x_81, x_86, x_39, x_46, x_85);
lean_inc(x_81);
x_88 = lean_expr_mk_mvar(x_81);
lean_inc(x_30);
x_89 = l_Array_iterateMAux___main___at_Lean_AbstractMetavarContext_MkBinding_mkMVarApp___spec__1(x_30, x_38, x_38, x_33, x_88);
if (x_85 == 0)
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_81);
lean_dec(x_38);
lean_dec(x_30);
lean_dec(x_2);
lean_inc(x_89);
x_90 = lean_metavar_ctx_assign_expr(x_87, x_26, x_89);
x_91 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_84);
lean_ctor_set(x_91, 2, x_77);
lean_ctor_set(x_42, 1, x_91);
lean_ctor_set(x_42, 0, x_89);
return x_42;
}
else
{
lean_object* x_92; lean_object* x_93; 
lean_dec(x_26);
x_92 = lean_metavar_ctx_assign_delayed(x_87, x_81, x_30, x_38, x_2);
x_93 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_84);
lean_ctor_set(x_93, 2, x_77);
lean_ctor_set(x_42, 1, x_93);
lean_ctor_set(x_42, 0, x_89);
return x_42;
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_94 = lean_ctor_get(x_42, 0);
lean_inc(x_94);
lean_dec(x_42);
x_95 = lean_ctor_get(x_43, 2);
lean_inc(x_95);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 lean_ctor_release(x_43, 2);
 x_96 = x_43;
} else {
 lean_dec_ref(x_43);
 x_96 = lean_box(0);
}
x_97 = lean_ctor_get(x_44, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_44, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_99 = x_44;
} else {
 lean_dec_ref(x_44);
 x_99 = lean_box(0);
}
lean_inc(x_98);
lean_inc(x_97);
x_100 = lean_name_mk_numeral(x_97, x_98);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_nat_add(x_98, x_101);
lean_dec(x_98);
if (lean_is_scalar(x_99)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_99;
}
lean_ctor_set(x_103, 0, x_97);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_ctor_get_uint8(x_29, sizeof(void*)*3);
lean_dec(x_29);
x_105 = lean_box(0);
lean_inc(x_100);
x_106 = lean_metavar_ctx_mk_decl(x_27, x_100, x_105, x_39, x_94, x_104);
lean_inc(x_100);
x_107 = lean_expr_mk_mvar(x_100);
lean_inc(x_30);
x_108 = l_Array_iterateMAux___main___at_Lean_AbstractMetavarContext_MkBinding_mkMVarApp___spec__1(x_30, x_38, x_38, x_33, x_107);
if (x_104 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_100);
lean_dec(x_38);
lean_dec(x_30);
lean_dec(x_2);
lean_inc(x_108);
x_109 = lean_metavar_ctx_assign_expr(x_106, x_26, x_108);
if (lean_is_scalar(x_96)) {
 x_110 = lean_alloc_ctor(0, 3, 0);
} else {
 x_110 = x_96;
}
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_103);
lean_ctor_set(x_110, 2, x_95);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_26);
x_112 = lean_metavar_ctx_assign_delayed(x_106, x_100, x_30, x_38, x_2);
if (lean_is_scalar(x_96)) {
 x_113 = lean_alloc_ctor(0, 3, 0);
} else {
 x_113 = x_96;
}
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_103);
lean_ctor_set(x_113, 2, x_95);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_108);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
else
{
uint8_t x_115; 
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_2);
x_115 = !lean_is_exclusive(x_42);
if (x_115 == 0)
{
return x_42;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_42, 0);
x_117 = lean_ctor_get(x_42, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_42);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
}
else
{
lean_object* x_119; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_26);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_2);
lean_ctor_set(x_119, 1, x_3);
return x_119;
}
}
else
{
lean_object* x_120; uint8_t x_121; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_2);
x_120 = lean_ctor_get(x_28, 0);
lean_inc(x_120);
lean_dec(x_28);
x_121 = lean_expr_has_expr_mvar(x_120);
if (x_121 == 0)
{
uint8_t x_122; 
x_122 = lean_expr_has_level_mvar(x_120);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_3);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_3, 2);
lean_inc(x_124);
x_125 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_124, x_120);
lean_dec(x_124);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; 
lean_inc(x_120);
x_126 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_120, x_3);
if (lean_obj_tag(x_126) == 0)
{
uint8_t x_127; 
x_127 = !lean_is_exclusive(x_126);
if (x_127 == 0)
{
lean_object* x_128; uint8_t x_129; 
x_128 = lean_ctor_get(x_126, 1);
x_129 = !lean_is_exclusive(x_128);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_126, 0);
x_131 = lean_ctor_get(x_128, 2);
lean_inc(x_130);
x_132 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_131, x_120, x_130);
lean_ctor_set(x_128, 2, x_132);
return x_126;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_133 = lean_ctor_get(x_126, 0);
x_134 = lean_ctor_get(x_128, 0);
x_135 = lean_ctor_get(x_128, 1);
x_136 = lean_ctor_get(x_128, 2);
lean_inc(x_136);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_128);
lean_inc(x_133);
x_137 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_136, x_120, x_133);
x_138 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_138, 0, x_134);
lean_ctor_set(x_138, 1, x_135);
lean_ctor_set(x_138, 2, x_137);
lean_ctor_set(x_126, 1, x_138);
return x_126;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_139 = lean_ctor_get(x_126, 1);
x_140 = lean_ctor_get(x_126, 0);
lean_inc(x_139);
lean_inc(x_140);
lean_dec(x_126);
x_141 = lean_ctor_get(x_139, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_139, 1);
lean_inc(x_142);
x_143 = lean_ctor_get(x_139, 2);
lean_inc(x_143);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 lean_ctor_release(x_139, 2);
 x_144 = x_139;
} else {
 lean_dec_ref(x_139);
 x_144 = lean_box(0);
}
lean_inc(x_140);
x_145 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_143, x_120, x_140);
if (lean_is_scalar(x_144)) {
 x_146 = lean_alloc_ctor(0, 3, 0);
} else {
 x_146 = x_144;
}
lean_ctor_set(x_146, 0, x_141);
lean_ctor_set(x_146, 1, x_142);
lean_ctor_set(x_146, 2, x_145);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_140);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
uint8_t x_148; 
lean_dec(x_120);
x_148 = !lean_is_exclusive(x_126);
if (x_148 == 0)
{
return x_126;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_126, 0);
x_150 = lean_ctor_get(x_126, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_126);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
}
else
{
lean_object* x_152; lean_object* x_153; 
lean_dec(x_120);
x_152 = lean_ctor_get(x_125, 0);
lean_inc(x_152);
lean_dec(x_125);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_3);
return x_153;
}
}
}
else
{
lean_object* x_154; lean_object* x_155; 
x_154 = lean_ctor_get(x_3, 2);
lean_inc(x_154);
x_155 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_154, x_120);
lean_dec(x_154);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; 
lean_inc(x_120);
x_156 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_120, x_3);
if (lean_obj_tag(x_156) == 0)
{
uint8_t x_157; 
x_157 = !lean_is_exclusive(x_156);
if (x_157 == 0)
{
lean_object* x_158; uint8_t x_159; 
x_158 = lean_ctor_get(x_156, 1);
x_159 = !lean_is_exclusive(x_158);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_156, 0);
x_161 = lean_ctor_get(x_158, 2);
lean_inc(x_160);
x_162 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_161, x_120, x_160);
lean_ctor_set(x_158, 2, x_162);
return x_156;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_163 = lean_ctor_get(x_156, 0);
x_164 = lean_ctor_get(x_158, 0);
x_165 = lean_ctor_get(x_158, 1);
x_166 = lean_ctor_get(x_158, 2);
lean_inc(x_166);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_158);
lean_inc(x_163);
x_167 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_166, x_120, x_163);
x_168 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_168, 0, x_164);
lean_ctor_set(x_168, 1, x_165);
lean_ctor_set(x_168, 2, x_167);
lean_ctor_set(x_156, 1, x_168);
return x_156;
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_169 = lean_ctor_get(x_156, 1);
x_170 = lean_ctor_get(x_156, 0);
lean_inc(x_169);
lean_inc(x_170);
lean_dec(x_156);
x_171 = lean_ctor_get(x_169, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_169, 1);
lean_inc(x_172);
x_173 = lean_ctor_get(x_169, 2);
lean_inc(x_173);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 lean_ctor_release(x_169, 2);
 x_174 = x_169;
} else {
 lean_dec_ref(x_169);
 x_174 = lean_box(0);
}
lean_inc(x_170);
x_175 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_173, x_120, x_170);
if (lean_is_scalar(x_174)) {
 x_176 = lean_alloc_ctor(0, 3, 0);
} else {
 x_176 = x_174;
}
lean_ctor_set(x_176, 0, x_171);
lean_ctor_set(x_176, 1, x_172);
lean_ctor_set(x_176, 2, x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_170);
lean_ctor_set(x_177, 1, x_176);
return x_177;
}
}
else
{
uint8_t x_178; 
lean_dec(x_120);
x_178 = !lean_is_exclusive(x_156);
if (x_178 == 0)
{
return x_156;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_156, 0);
x_180 = lean_ctor_get(x_156, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_156);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
}
else
{
lean_object* x_182; lean_object* x_183; 
lean_dec(x_120);
x_182 = lean_ctor_get(x_155, 0);
lean_inc(x_182);
lean_dec(x_155);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_3);
return x_183;
}
}
}
}
case 5:
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_184 = lean_unsigned_to_nat(0u);
x_185 = l_Lean_Expr_getAppNumArgsAux___main(x_2, x_184);
x_186 = lean_mk_empty_array_with_capacity(x_185);
lean_dec(x_185);
x_187 = l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_mkLambda___spec__66(x_1, x_2, x_186, x_3);
return x_187;
}
case 6:
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_243; 
x_188 = lean_ctor_get(x_2, 1);
lean_inc(x_188);
x_189 = lean_ctor_get(x_2, 2);
lean_inc(x_189);
x_243 = lean_expr_has_expr_mvar(x_188);
if (x_243 == 0)
{
uint8_t x_244; 
x_244 = lean_expr_has_level_mvar(x_188);
if (x_244 == 0)
{
x_190 = x_188;
x_191 = x_3;
goto block_242;
}
else
{
lean_object* x_245; lean_object* x_246; 
x_245 = lean_ctor_get(x_3, 2);
lean_inc(x_245);
x_246 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_245, x_188);
lean_dec(x_245);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; 
lean_inc(x_188);
x_247 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_188, x_3);
if (lean_obj_tag(x_247) == 0)
{
lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_248 = lean_ctor_get(x_247, 1);
lean_inc(x_248);
x_249 = lean_ctor_get(x_247, 0);
lean_inc(x_249);
lean_dec(x_247);
x_250 = !lean_is_exclusive(x_248);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; 
x_251 = lean_ctor_get(x_248, 2);
lean_inc(x_249);
x_252 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_251, x_188, x_249);
lean_ctor_set(x_248, 2, x_252);
x_190 = x_249;
x_191 = x_248;
goto block_242;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_253 = lean_ctor_get(x_248, 0);
x_254 = lean_ctor_get(x_248, 1);
x_255 = lean_ctor_get(x_248, 2);
lean_inc(x_255);
lean_inc(x_254);
lean_inc(x_253);
lean_dec(x_248);
lean_inc(x_249);
x_256 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_255, x_188, x_249);
x_257 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_257, 0, x_253);
lean_ctor_set(x_257, 1, x_254);
lean_ctor_set(x_257, 2, x_256);
x_190 = x_249;
x_191 = x_257;
goto block_242;
}
}
else
{
uint8_t x_258; 
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_2);
x_258 = !lean_is_exclusive(x_247);
if (x_258 == 0)
{
return x_247;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_259 = lean_ctor_get(x_247, 0);
x_260 = lean_ctor_get(x_247, 1);
lean_inc(x_260);
lean_inc(x_259);
lean_dec(x_247);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_259);
lean_ctor_set(x_261, 1, x_260);
return x_261;
}
}
}
else
{
lean_object* x_262; 
lean_dec(x_188);
x_262 = lean_ctor_get(x_246, 0);
lean_inc(x_262);
lean_dec(x_246);
x_190 = x_262;
x_191 = x_3;
goto block_242;
}
}
}
else
{
lean_object* x_263; lean_object* x_264; 
x_263 = lean_ctor_get(x_3, 2);
lean_inc(x_263);
x_264 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_263, x_188);
lean_dec(x_263);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; 
lean_inc(x_188);
x_265 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_188, x_3);
if (lean_obj_tag(x_265) == 0)
{
lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_266 = lean_ctor_get(x_265, 1);
lean_inc(x_266);
x_267 = lean_ctor_get(x_265, 0);
lean_inc(x_267);
lean_dec(x_265);
x_268 = !lean_is_exclusive(x_266);
if (x_268 == 0)
{
lean_object* x_269; lean_object* x_270; 
x_269 = lean_ctor_get(x_266, 2);
lean_inc(x_267);
x_270 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_269, x_188, x_267);
lean_ctor_set(x_266, 2, x_270);
x_190 = x_267;
x_191 = x_266;
goto block_242;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_271 = lean_ctor_get(x_266, 0);
x_272 = lean_ctor_get(x_266, 1);
x_273 = lean_ctor_get(x_266, 2);
lean_inc(x_273);
lean_inc(x_272);
lean_inc(x_271);
lean_dec(x_266);
lean_inc(x_267);
x_274 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_273, x_188, x_267);
x_275 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_275, 0, x_271);
lean_ctor_set(x_275, 1, x_272);
lean_ctor_set(x_275, 2, x_274);
x_190 = x_267;
x_191 = x_275;
goto block_242;
}
}
else
{
uint8_t x_276; 
lean_dec(x_189);
lean_dec(x_188);
lean_dec(x_2);
x_276 = !lean_is_exclusive(x_265);
if (x_276 == 0)
{
return x_265;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_265, 0);
x_278 = lean_ctor_get(x_265, 1);
lean_inc(x_278);
lean_inc(x_277);
lean_dec(x_265);
x_279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_279, 0, x_277);
lean_ctor_set(x_279, 1, x_278);
return x_279;
}
}
}
else
{
lean_object* x_280; 
lean_dec(x_188);
x_280 = lean_ctor_get(x_264, 0);
lean_inc(x_280);
lean_dec(x_264);
x_190 = x_280;
x_191 = x_3;
goto block_242;
}
}
block_242:
{
lean_object* x_192; lean_object* x_193; uint8_t x_204; 
x_204 = lean_expr_has_expr_mvar(x_189);
if (x_204 == 0)
{
uint8_t x_205; 
x_205 = lean_expr_has_level_mvar(x_189);
if (x_205 == 0)
{
x_192 = x_189;
x_193 = x_191;
goto block_203;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = lean_ctor_get(x_191, 2);
lean_inc(x_206);
x_207 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_206, x_189);
lean_dec(x_206);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
lean_inc(x_189);
x_208 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_189, x_191);
if (lean_obj_tag(x_208) == 0)
{
lean_object* x_209; lean_object* x_210; uint8_t x_211; 
x_209 = lean_ctor_get(x_208, 1);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 0);
lean_inc(x_210);
lean_dec(x_208);
x_211 = !lean_is_exclusive(x_209);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; 
x_212 = lean_ctor_get(x_209, 2);
lean_inc(x_210);
x_213 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_212, x_189, x_210);
lean_ctor_set(x_209, 2, x_213);
x_192 = x_210;
x_193 = x_209;
goto block_203;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_214 = lean_ctor_get(x_209, 0);
x_215 = lean_ctor_get(x_209, 1);
x_216 = lean_ctor_get(x_209, 2);
lean_inc(x_216);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_209);
lean_inc(x_210);
x_217 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_216, x_189, x_210);
x_218 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_218, 0, x_214);
lean_ctor_set(x_218, 1, x_215);
lean_ctor_set(x_218, 2, x_217);
x_192 = x_210;
x_193 = x_218;
goto block_203;
}
}
else
{
uint8_t x_219; 
lean_dec(x_190);
lean_dec(x_189);
lean_dec(x_2);
x_219 = !lean_is_exclusive(x_208);
if (x_219 == 0)
{
return x_208;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_208, 0);
x_221 = lean_ctor_get(x_208, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_208);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
return x_222;
}
}
}
else
{
lean_object* x_223; 
lean_dec(x_189);
x_223 = lean_ctor_get(x_207, 0);
lean_inc(x_223);
lean_dec(x_207);
x_192 = x_223;
x_193 = x_191;
goto block_203;
}
}
}
else
{
lean_object* x_224; lean_object* x_225; 
x_224 = lean_ctor_get(x_191, 2);
lean_inc(x_224);
x_225 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_224, x_189);
lean_dec(x_224);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; 
lean_inc(x_189);
x_226 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_189, x_191);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_227 = lean_ctor_get(x_226, 1);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
lean_dec(x_226);
x_229 = !lean_is_exclusive(x_227);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; 
x_230 = lean_ctor_get(x_227, 2);
lean_inc(x_228);
x_231 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_230, x_189, x_228);
lean_ctor_set(x_227, 2, x_231);
x_192 = x_228;
x_193 = x_227;
goto block_203;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_232 = lean_ctor_get(x_227, 0);
x_233 = lean_ctor_get(x_227, 1);
x_234 = lean_ctor_get(x_227, 2);
lean_inc(x_234);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_227);
lean_inc(x_228);
x_235 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_234, x_189, x_228);
x_236 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_236, 0, x_232);
lean_ctor_set(x_236, 1, x_233);
lean_ctor_set(x_236, 2, x_235);
x_192 = x_228;
x_193 = x_236;
goto block_203;
}
}
else
{
uint8_t x_237; 
lean_dec(x_190);
lean_dec(x_189);
lean_dec(x_2);
x_237 = !lean_is_exclusive(x_226);
if (x_237 == 0)
{
return x_226;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_238 = lean_ctor_get(x_226, 0);
x_239 = lean_ctor_get(x_226, 1);
lean_inc(x_239);
lean_inc(x_238);
lean_dec(x_226);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_238);
lean_ctor_set(x_240, 1, x_239);
return x_240;
}
}
}
else
{
lean_object* x_241; 
lean_dec(x_189);
x_241 = lean_ctor_get(x_225, 0);
lean_inc(x_241);
lean_dec(x_225);
x_192 = x_241;
x_193 = x_191;
goto block_203;
}
}
block_203:
{
if (lean_obj_tag(x_2) == 6)
{
uint8_t x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_195 = lean_expr_update_lambda(x_2, x_194, x_190, x_192);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_193);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_192);
lean_dec(x_190);
lean_dec(x_2);
x_197 = l_Lean_Expr_constName_x21___closed__1;
x_198 = lean_unsigned_to_nat(475u);
x_199 = lean_unsigned_to_nat(18u);
x_200 = l_Lean_Expr_updateLambda_x21___closed__1;
x_201 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_197, x_198, x_199, x_200);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_193);
return x_202;
}
}
}
}
case 7:
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; uint8_t x_336; 
x_281 = lean_ctor_get(x_2, 1);
lean_inc(x_281);
x_282 = lean_ctor_get(x_2, 2);
lean_inc(x_282);
x_336 = lean_expr_has_expr_mvar(x_281);
if (x_336 == 0)
{
uint8_t x_337; 
x_337 = lean_expr_has_level_mvar(x_281);
if (x_337 == 0)
{
x_283 = x_281;
x_284 = x_3;
goto block_335;
}
else
{
lean_object* x_338; lean_object* x_339; 
x_338 = lean_ctor_get(x_3, 2);
lean_inc(x_338);
x_339 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_338, x_281);
lean_dec(x_338);
if (lean_obj_tag(x_339) == 0)
{
lean_object* x_340; 
lean_inc(x_281);
x_340 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_281, x_3);
if (lean_obj_tag(x_340) == 0)
{
lean_object* x_341; lean_object* x_342; uint8_t x_343; 
x_341 = lean_ctor_get(x_340, 1);
lean_inc(x_341);
x_342 = lean_ctor_get(x_340, 0);
lean_inc(x_342);
lean_dec(x_340);
x_343 = !lean_is_exclusive(x_341);
if (x_343 == 0)
{
lean_object* x_344; lean_object* x_345; 
x_344 = lean_ctor_get(x_341, 2);
lean_inc(x_342);
x_345 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_344, x_281, x_342);
lean_ctor_set(x_341, 2, x_345);
x_283 = x_342;
x_284 = x_341;
goto block_335;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_346 = lean_ctor_get(x_341, 0);
x_347 = lean_ctor_get(x_341, 1);
x_348 = lean_ctor_get(x_341, 2);
lean_inc(x_348);
lean_inc(x_347);
lean_inc(x_346);
lean_dec(x_341);
lean_inc(x_342);
x_349 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_348, x_281, x_342);
x_350 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_350, 0, x_346);
lean_ctor_set(x_350, 1, x_347);
lean_ctor_set(x_350, 2, x_349);
x_283 = x_342;
x_284 = x_350;
goto block_335;
}
}
else
{
uint8_t x_351; 
lean_dec(x_282);
lean_dec(x_281);
lean_dec(x_2);
x_351 = !lean_is_exclusive(x_340);
if (x_351 == 0)
{
return x_340;
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; 
x_352 = lean_ctor_get(x_340, 0);
x_353 = lean_ctor_get(x_340, 1);
lean_inc(x_353);
lean_inc(x_352);
lean_dec(x_340);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_352);
lean_ctor_set(x_354, 1, x_353);
return x_354;
}
}
}
else
{
lean_object* x_355; 
lean_dec(x_281);
x_355 = lean_ctor_get(x_339, 0);
lean_inc(x_355);
lean_dec(x_339);
x_283 = x_355;
x_284 = x_3;
goto block_335;
}
}
}
else
{
lean_object* x_356; lean_object* x_357; 
x_356 = lean_ctor_get(x_3, 2);
lean_inc(x_356);
x_357 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_356, x_281);
lean_dec(x_356);
if (lean_obj_tag(x_357) == 0)
{
lean_object* x_358; 
lean_inc(x_281);
x_358 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_281, x_3);
if (lean_obj_tag(x_358) == 0)
{
lean_object* x_359; lean_object* x_360; uint8_t x_361; 
x_359 = lean_ctor_get(x_358, 1);
lean_inc(x_359);
x_360 = lean_ctor_get(x_358, 0);
lean_inc(x_360);
lean_dec(x_358);
x_361 = !lean_is_exclusive(x_359);
if (x_361 == 0)
{
lean_object* x_362; lean_object* x_363; 
x_362 = lean_ctor_get(x_359, 2);
lean_inc(x_360);
x_363 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_362, x_281, x_360);
lean_ctor_set(x_359, 2, x_363);
x_283 = x_360;
x_284 = x_359;
goto block_335;
}
else
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_364 = lean_ctor_get(x_359, 0);
x_365 = lean_ctor_get(x_359, 1);
x_366 = lean_ctor_get(x_359, 2);
lean_inc(x_366);
lean_inc(x_365);
lean_inc(x_364);
lean_dec(x_359);
lean_inc(x_360);
x_367 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_366, x_281, x_360);
x_368 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_368, 0, x_364);
lean_ctor_set(x_368, 1, x_365);
lean_ctor_set(x_368, 2, x_367);
x_283 = x_360;
x_284 = x_368;
goto block_335;
}
}
else
{
uint8_t x_369; 
lean_dec(x_282);
lean_dec(x_281);
lean_dec(x_2);
x_369 = !lean_is_exclusive(x_358);
if (x_369 == 0)
{
return x_358;
}
else
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; 
x_370 = lean_ctor_get(x_358, 0);
x_371 = lean_ctor_get(x_358, 1);
lean_inc(x_371);
lean_inc(x_370);
lean_dec(x_358);
x_372 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_372, 0, x_370);
lean_ctor_set(x_372, 1, x_371);
return x_372;
}
}
}
else
{
lean_object* x_373; 
lean_dec(x_281);
x_373 = lean_ctor_get(x_357, 0);
lean_inc(x_373);
lean_dec(x_357);
x_283 = x_373;
x_284 = x_3;
goto block_335;
}
}
block_335:
{
lean_object* x_285; lean_object* x_286; uint8_t x_297; 
x_297 = lean_expr_has_expr_mvar(x_282);
if (x_297 == 0)
{
uint8_t x_298; 
x_298 = lean_expr_has_level_mvar(x_282);
if (x_298 == 0)
{
x_285 = x_282;
x_286 = x_284;
goto block_296;
}
else
{
lean_object* x_299; lean_object* x_300; 
x_299 = lean_ctor_get(x_284, 2);
lean_inc(x_299);
x_300 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_299, x_282);
lean_dec(x_299);
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_301; 
lean_inc(x_282);
x_301 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_282, x_284);
if (lean_obj_tag(x_301) == 0)
{
lean_object* x_302; lean_object* x_303; uint8_t x_304; 
x_302 = lean_ctor_get(x_301, 1);
lean_inc(x_302);
x_303 = lean_ctor_get(x_301, 0);
lean_inc(x_303);
lean_dec(x_301);
x_304 = !lean_is_exclusive(x_302);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; 
x_305 = lean_ctor_get(x_302, 2);
lean_inc(x_303);
x_306 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_305, x_282, x_303);
lean_ctor_set(x_302, 2, x_306);
x_285 = x_303;
x_286 = x_302;
goto block_296;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_307 = lean_ctor_get(x_302, 0);
x_308 = lean_ctor_get(x_302, 1);
x_309 = lean_ctor_get(x_302, 2);
lean_inc(x_309);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_302);
lean_inc(x_303);
x_310 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_309, x_282, x_303);
x_311 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_311, 0, x_307);
lean_ctor_set(x_311, 1, x_308);
lean_ctor_set(x_311, 2, x_310);
x_285 = x_303;
x_286 = x_311;
goto block_296;
}
}
else
{
uint8_t x_312; 
lean_dec(x_283);
lean_dec(x_282);
lean_dec(x_2);
x_312 = !lean_is_exclusive(x_301);
if (x_312 == 0)
{
return x_301;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_313 = lean_ctor_get(x_301, 0);
x_314 = lean_ctor_get(x_301, 1);
lean_inc(x_314);
lean_inc(x_313);
lean_dec(x_301);
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
return x_315;
}
}
}
else
{
lean_object* x_316; 
lean_dec(x_282);
x_316 = lean_ctor_get(x_300, 0);
lean_inc(x_316);
lean_dec(x_300);
x_285 = x_316;
x_286 = x_284;
goto block_296;
}
}
}
else
{
lean_object* x_317; lean_object* x_318; 
x_317 = lean_ctor_get(x_284, 2);
lean_inc(x_317);
x_318 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_317, x_282);
lean_dec(x_317);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; 
lean_inc(x_282);
x_319 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_282, x_284);
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_320 = lean_ctor_get(x_319, 1);
lean_inc(x_320);
x_321 = lean_ctor_get(x_319, 0);
lean_inc(x_321);
lean_dec(x_319);
x_322 = !lean_is_exclusive(x_320);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; 
x_323 = lean_ctor_get(x_320, 2);
lean_inc(x_321);
x_324 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_323, x_282, x_321);
lean_ctor_set(x_320, 2, x_324);
x_285 = x_321;
x_286 = x_320;
goto block_296;
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_325 = lean_ctor_get(x_320, 0);
x_326 = lean_ctor_get(x_320, 1);
x_327 = lean_ctor_get(x_320, 2);
lean_inc(x_327);
lean_inc(x_326);
lean_inc(x_325);
lean_dec(x_320);
lean_inc(x_321);
x_328 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_327, x_282, x_321);
x_329 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_329, 0, x_325);
lean_ctor_set(x_329, 1, x_326);
lean_ctor_set(x_329, 2, x_328);
x_285 = x_321;
x_286 = x_329;
goto block_296;
}
}
else
{
uint8_t x_330; 
lean_dec(x_283);
lean_dec(x_282);
lean_dec(x_2);
x_330 = !lean_is_exclusive(x_319);
if (x_330 == 0)
{
return x_319;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_331 = lean_ctor_get(x_319, 0);
x_332 = lean_ctor_get(x_319, 1);
lean_inc(x_332);
lean_inc(x_331);
lean_dec(x_319);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_332);
return x_333;
}
}
}
else
{
lean_object* x_334; 
lean_dec(x_282);
x_334 = lean_ctor_get(x_318, 0);
lean_inc(x_334);
lean_dec(x_318);
x_285 = x_334;
x_286 = x_284;
goto block_296;
}
}
block_296:
{
if (lean_obj_tag(x_2) == 7)
{
uint8_t x_287; lean_object* x_288; lean_object* x_289; 
x_287 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_288 = lean_expr_update_forall(x_2, x_287, x_283, x_285);
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_286);
return x_289;
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
lean_dec(x_285);
lean_dec(x_283);
lean_dec(x_2);
x_290 = l_Lean_Expr_constName_x21___closed__1;
x_291 = lean_unsigned_to_nat(461u);
x_292 = lean_unsigned_to_nat(22u);
x_293 = l_Lean_Expr_updateForall_x21___closed__1;
x_294 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_290, x_291, x_292, x_293);
x_295 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_295, 0, x_294);
lean_ctor_set(x_295, 1, x_286);
return x_295;
}
}
}
}
case 8:
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; uint8_t x_470; 
x_374 = lean_ctor_get(x_2, 1);
lean_inc(x_374);
x_375 = lean_ctor_get(x_2, 2);
lean_inc(x_375);
x_376 = lean_ctor_get(x_2, 3);
lean_inc(x_376);
x_470 = lean_expr_has_expr_mvar(x_374);
if (x_470 == 0)
{
uint8_t x_471; 
x_471 = lean_expr_has_level_mvar(x_374);
if (x_471 == 0)
{
x_377 = x_374;
x_378 = x_3;
goto block_469;
}
else
{
lean_object* x_472; lean_object* x_473; 
x_472 = lean_ctor_get(x_3, 2);
lean_inc(x_472);
x_473 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_472, x_374);
lean_dec(x_472);
if (lean_obj_tag(x_473) == 0)
{
lean_object* x_474; 
lean_inc(x_374);
x_474 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_374, x_3);
if (lean_obj_tag(x_474) == 0)
{
lean_object* x_475; lean_object* x_476; uint8_t x_477; 
x_475 = lean_ctor_get(x_474, 1);
lean_inc(x_475);
x_476 = lean_ctor_get(x_474, 0);
lean_inc(x_476);
lean_dec(x_474);
x_477 = !lean_is_exclusive(x_475);
if (x_477 == 0)
{
lean_object* x_478; lean_object* x_479; 
x_478 = lean_ctor_get(x_475, 2);
lean_inc(x_476);
x_479 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_478, x_374, x_476);
lean_ctor_set(x_475, 2, x_479);
x_377 = x_476;
x_378 = x_475;
goto block_469;
}
else
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; 
x_480 = lean_ctor_get(x_475, 0);
x_481 = lean_ctor_get(x_475, 1);
x_482 = lean_ctor_get(x_475, 2);
lean_inc(x_482);
lean_inc(x_481);
lean_inc(x_480);
lean_dec(x_475);
lean_inc(x_476);
x_483 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_482, x_374, x_476);
x_484 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_484, 0, x_480);
lean_ctor_set(x_484, 1, x_481);
lean_ctor_set(x_484, 2, x_483);
x_377 = x_476;
x_378 = x_484;
goto block_469;
}
}
else
{
uint8_t x_485; 
lean_dec(x_376);
lean_dec(x_375);
lean_dec(x_374);
lean_dec(x_2);
x_485 = !lean_is_exclusive(x_474);
if (x_485 == 0)
{
return x_474;
}
else
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; 
x_486 = lean_ctor_get(x_474, 0);
x_487 = lean_ctor_get(x_474, 1);
lean_inc(x_487);
lean_inc(x_486);
lean_dec(x_474);
x_488 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_488, 0, x_486);
lean_ctor_set(x_488, 1, x_487);
return x_488;
}
}
}
else
{
lean_object* x_489; 
lean_dec(x_374);
x_489 = lean_ctor_get(x_473, 0);
lean_inc(x_489);
lean_dec(x_473);
x_377 = x_489;
x_378 = x_3;
goto block_469;
}
}
}
else
{
lean_object* x_490; lean_object* x_491; 
x_490 = lean_ctor_get(x_3, 2);
lean_inc(x_490);
x_491 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_490, x_374);
lean_dec(x_490);
if (lean_obj_tag(x_491) == 0)
{
lean_object* x_492; 
lean_inc(x_374);
x_492 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_374, x_3);
if (lean_obj_tag(x_492) == 0)
{
lean_object* x_493; lean_object* x_494; uint8_t x_495; 
x_493 = lean_ctor_get(x_492, 1);
lean_inc(x_493);
x_494 = lean_ctor_get(x_492, 0);
lean_inc(x_494);
lean_dec(x_492);
x_495 = !lean_is_exclusive(x_493);
if (x_495 == 0)
{
lean_object* x_496; lean_object* x_497; 
x_496 = lean_ctor_get(x_493, 2);
lean_inc(x_494);
x_497 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_496, x_374, x_494);
lean_ctor_set(x_493, 2, x_497);
x_377 = x_494;
x_378 = x_493;
goto block_469;
}
else
{
lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; 
x_498 = lean_ctor_get(x_493, 0);
x_499 = lean_ctor_get(x_493, 1);
x_500 = lean_ctor_get(x_493, 2);
lean_inc(x_500);
lean_inc(x_499);
lean_inc(x_498);
lean_dec(x_493);
lean_inc(x_494);
x_501 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_500, x_374, x_494);
x_502 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_502, 0, x_498);
lean_ctor_set(x_502, 1, x_499);
lean_ctor_set(x_502, 2, x_501);
x_377 = x_494;
x_378 = x_502;
goto block_469;
}
}
else
{
uint8_t x_503; 
lean_dec(x_376);
lean_dec(x_375);
lean_dec(x_374);
lean_dec(x_2);
x_503 = !lean_is_exclusive(x_492);
if (x_503 == 0)
{
return x_492;
}
else
{
lean_object* x_504; lean_object* x_505; lean_object* x_506; 
x_504 = lean_ctor_get(x_492, 0);
x_505 = lean_ctor_get(x_492, 1);
lean_inc(x_505);
lean_inc(x_504);
lean_dec(x_492);
x_506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_506, 0, x_504);
lean_ctor_set(x_506, 1, x_505);
return x_506;
}
}
}
else
{
lean_object* x_507; 
lean_dec(x_374);
x_507 = lean_ctor_get(x_491, 0);
lean_inc(x_507);
lean_dec(x_491);
x_377 = x_507;
x_378 = x_3;
goto block_469;
}
}
block_469:
{
lean_object* x_379; lean_object* x_380; uint8_t x_431; 
x_431 = lean_expr_has_expr_mvar(x_375);
if (x_431 == 0)
{
uint8_t x_432; 
x_432 = lean_expr_has_level_mvar(x_375);
if (x_432 == 0)
{
x_379 = x_375;
x_380 = x_378;
goto block_430;
}
else
{
lean_object* x_433; lean_object* x_434; 
x_433 = lean_ctor_get(x_378, 2);
lean_inc(x_433);
x_434 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_433, x_375);
lean_dec(x_433);
if (lean_obj_tag(x_434) == 0)
{
lean_object* x_435; 
lean_inc(x_375);
x_435 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_375, x_378);
if (lean_obj_tag(x_435) == 0)
{
lean_object* x_436; lean_object* x_437; uint8_t x_438; 
x_436 = lean_ctor_get(x_435, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 0);
lean_inc(x_437);
lean_dec(x_435);
x_438 = !lean_is_exclusive(x_436);
if (x_438 == 0)
{
lean_object* x_439; lean_object* x_440; 
x_439 = lean_ctor_get(x_436, 2);
lean_inc(x_437);
x_440 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_439, x_375, x_437);
lean_ctor_set(x_436, 2, x_440);
x_379 = x_437;
x_380 = x_436;
goto block_430;
}
else
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_441 = lean_ctor_get(x_436, 0);
x_442 = lean_ctor_get(x_436, 1);
x_443 = lean_ctor_get(x_436, 2);
lean_inc(x_443);
lean_inc(x_442);
lean_inc(x_441);
lean_dec(x_436);
lean_inc(x_437);
x_444 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_443, x_375, x_437);
x_445 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_445, 0, x_441);
lean_ctor_set(x_445, 1, x_442);
lean_ctor_set(x_445, 2, x_444);
x_379 = x_437;
x_380 = x_445;
goto block_430;
}
}
else
{
uint8_t x_446; 
lean_dec(x_377);
lean_dec(x_376);
lean_dec(x_375);
lean_dec(x_2);
x_446 = !lean_is_exclusive(x_435);
if (x_446 == 0)
{
return x_435;
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_447 = lean_ctor_get(x_435, 0);
x_448 = lean_ctor_get(x_435, 1);
lean_inc(x_448);
lean_inc(x_447);
lean_dec(x_435);
x_449 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_449, 0, x_447);
lean_ctor_set(x_449, 1, x_448);
return x_449;
}
}
}
else
{
lean_object* x_450; 
lean_dec(x_375);
x_450 = lean_ctor_get(x_434, 0);
lean_inc(x_450);
lean_dec(x_434);
x_379 = x_450;
x_380 = x_378;
goto block_430;
}
}
}
else
{
lean_object* x_451; lean_object* x_452; 
x_451 = lean_ctor_get(x_378, 2);
lean_inc(x_451);
x_452 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_451, x_375);
lean_dec(x_451);
if (lean_obj_tag(x_452) == 0)
{
lean_object* x_453; 
lean_inc(x_375);
x_453 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_375, x_378);
if (lean_obj_tag(x_453) == 0)
{
lean_object* x_454; lean_object* x_455; uint8_t x_456; 
x_454 = lean_ctor_get(x_453, 1);
lean_inc(x_454);
x_455 = lean_ctor_get(x_453, 0);
lean_inc(x_455);
lean_dec(x_453);
x_456 = !lean_is_exclusive(x_454);
if (x_456 == 0)
{
lean_object* x_457; lean_object* x_458; 
x_457 = lean_ctor_get(x_454, 2);
lean_inc(x_455);
x_458 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_457, x_375, x_455);
lean_ctor_set(x_454, 2, x_458);
x_379 = x_455;
x_380 = x_454;
goto block_430;
}
else
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
x_459 = lean_ctor_get(x_454, 0);
x_460 = lean_ctor_get(x_454, 1);
x_461 = lean_ctor_get(x_454, 2);
lean_inc(x_461);
lean_inc(x_460);
lean_inc(x_459);
lean_dec(x_454);
lean_inc(x_455);
x_462 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_461, x_375, x_455);
x_463 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_463, 0, x_459);
lean_ctor_set(x_463, 1, x_460);
lean_ctor_set(x_463, 2, x_462);
x_379 = x_455;
x_380 = x_463;
goto block_430;
}
}
else
{
uint8_t x_464; 
lean_dec(x_377);
lean_dec(x_376);
lean_dec(x_375);
lean_dec(x_2);
x_464 = !lean_is_exclusive(x_453);
if (x_464 == 0)
{
return x_453;
}
else
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; 
x_465 = lean_ctor_get(x_453, 0);
x_466 = lean_ctor_get(x_453, 1);
lean_inc(x_466);
lean_inc(x_465);
lean_dec(x_453);
x_467 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_467, 0, x_465);
lean_ctor_set(x_467, 1, x_466);
return x_467;
}
}
}
else
{
lean_object* x_468; 
lean_dec(x_375);
x_468 = lean_ctor_get(x_452, 0);
lean_inc(x_468);
lean_dec(x_452);
x_379 = x_468;
x_380 = x_378;
goto block_430;
}
}
block_430:
{
lean_object* x_381; lean_object* x_382; uint8_t x_392; 
x_392 = lean_expr_has_expr_mvar(x_376);
if (x_392 == 0)
{
uint8_t x_393; 
x_393 = lean_expr_has_level_mvar(x_376);
if (x_393 == 0)
{
x_381 = x_376;
x_382 = x_380;
goto block_391;
}
else
{
lean_object* x_394; lean_object* x_395; 
x_394 = lean_ctor_get(x_380, 2);
lean_inc(x_394);
x_395 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_394, x_376);
lean_dec(x_394);
if (lean_obj_tag(x_395) == 0)
{
lean_object* x_396; 
lean_inc(x_376);
x_396 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_376, x_380);
if (lean_obj_tag(x_396) == 0)
{
lean_object* x_397; lean_object* x_398; uint8_t x_399; 
x_397 = lean_ctor_get(x_396, 1);
lean_inc(x_397);
x_398 = lean_ctor_get(x_396, 0);
lean_inc(x_398);
lean_dec(x_396);
x_399 = !lean_is_exclusive(x_397);
if (x_399 == 0)
{
lean_object* x_400; lean_object* x_401; 
x_400 = lean_ctor_get(x_397, 2);
lean_inc(x_398);
x_401 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_400, x_376, x_398);
lean_ctor_set(x_397, 2, x_401);
x_381 = x_398;
x_382 = x_397;
goto block_391;
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; 
x_402 = lean_ctor_get(x_397, 0);
x_403 = lean_ctor_get(x_397, 1);
x_404 = lean_ctor_get(x_397, 2);
lean_inc(x_404);
lean_inc(x_403);
lean_inc(x_402);
lean_dec(x_397);
lean_inc(x_398);
x_405 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_404, x_376, x_398);
x_406 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_406, 0, x_402);
lean_ctor_set(x_406, 1, x_403);
lean_ctor_set(x_406, 2, x_405);
x_381 = x_398;
x_382 = x_406;
goto block_391;
}
}
else
{
uint8_t x_407; 
lean_dec(x_379);
lean_dec(x_377);
lean_dec(x_376);
lean_dec(x_2);
x_407 = !lean_is_exclusive(x_396);
if (x_407 == 0)
{
return x_396;
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_408 = lean_ctor_get(x_396, 0);
x_409 = lean_ctor_get(x_396, 1);
lean_inc(x_409);
lean_inc(x_408);
lean_dec(x_396);
x_410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_410, 0, x_408);
lean_ctor_set(x_410, 1, x_409);
return x_410;
}
}
}
else
{
lean_object* x_411; 
lean_dec(x_376);
x_411 = lean_ctor_get(x_395, 0);
lean_inc(x_411);
lean_dec(x_395);
x_381 = x_411;
x_382 = x_380;
goto block_391;
}
}
}
else
{
lean_object* x_412; lean_object* x_413; 
x_412 = lean_ctor_get(x_380, 2);
lean_inc(x_412);
x_413 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_412, x_376);
lean_dec(x_412);
if (lean_obj_tag(x_413) == 0)
{
lean_object* x_414; 
lean_inc(x_376);
x_414 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_376, x_380);
if (lean_obj_tag(x_414) == 0)
{
lean_object* x_415; lean_object* x_416; uint8_t x_417; 
x_415 = lean_ctor_get(x_414, 1);
lean_inc(x_415);
x_416 = lean_ctor_get(x_414, 0);
lean_inc(x_416);
lean_dec(x_414);
x_417 = !lean_is_exclusive(x_415);
if (x_417 == 0)
{
lean_object* x_418; lean_object* x_419; 
x_418 = lean_ctor_get(x_415, 2);
lean_inc(x_416);
x_419 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_418, x_376, x_416);
lean_ctor_set(x_415, 2, x_419);
x_381 = x_416;
x_382 = x_415;
goto block_391;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; 
x_420 = lean_ctor_get(x_415, 0);
x_421 = lean_ctor_get(x_415, 1);
x_422 = lean_ctor_get(x_415, 2);
lean_inc(x_422);
lean_inc(x_421);
lean_inc(x_420);
lean_dec(x_415);
lean_inc(x_416);
x_423 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_422, x_376, x_416);
x_424 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_424, 0, x_420);
lean_ctor_set(x_424, 1, x_421);
lean_ctor_set(x_424, 2, x_423);
x_381 = x_416;
x_382 = x_424;
goto block_391;
}
}
else
{
uint8_t x_425; 
lean_dec(x_379);
lean_dec(x_377);
lean_dec(x_376);
lean_dec(x_2);
x_425 = !lean_is_exclusive(x_414);
if (x_425 == 0)
{
return x_414;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; 
x_426 = lean_ctor_get(x_414, 0);
x_427 = lean_ctor_get(x_414, 1);
lean_inc(x_427);
lean_inc(x_426);
lean_dec(x_414);
x_428 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_428, 0, x_426);
lean_ctor_set(x_428, 1, x_427);
return x_428;
}
}
}
else
{
lean_object* x_429; 
lean_dec(x_376);
x_429 = lean_ctor_get(x_413, 0);
lean_inc(x_429);
lean_dec(x_413);
x_381 = x_429;
x_382 = x_380;
goto block_391;
}
}
block_391:
{
if (lean_obj_tag(x_2) == 8)
{
lean_object* x_383; lean_object* x_384; 
x_383 = lean_expr_update_let(x_2, x_377, x_379, x_381);
x_384 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_384, 0, x_383);
lean_ctor_set(x_384, 1, x_382);
return x_384;
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
lean_dec(x_381);
lean_dec(x_379);
lean_dec(x_377);
lean_dec(x_2);
x_385 = l_Lean_Expr_constName_x21___closed__1;
x_386 = lean_unsigned_to_nat(484u);
x_387 = lean_unsigned_to_nat(18u);
x_388 = l_Lean_Expr_letName_x21___closed__1;
x_389 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_385, x_386, x_387, x_388);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_389);
lean_ctor_set(x_390, 1, x_382);
return x_390;
}
}
}
}
}
case 10:
{
lean_object* x_508; uint8_t x_509; 
x_508 = lean_ctor_get(x_2, 1);
lean_inc(x_508);
x_509 = lean_expr_has_expr_mvar(x_508);
if (x_509 == 0)
{
uint8_t x_510; 
x_510 = lean_expr_has_level_mvar(x_508);
if (x_510 == 0)
{
x_4 = x_508;
x_5 = x_3;
goto block_14;
}
else
{
lean_object* x_511; lean_object* x_512; 
x_511 = lean_ctor_get(x_3, 2);
lean_inc(x_511);
x_512 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_511, x_508);
lean_dec(x_511);
if (lean_obj_tag(x_512) == 0)
{
lean_object* x_513; 
lean_inc(x_508);
x_513 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_508, x_3);
if (lean_obj_tag(x_513) == 0)
{
lean_object* x_514; lean_object* x_515; uint8_t x_516; 
x_514 = lean_ctor_get(x_513, 1);
lean_inc(x_514);
x_515 = lean_ctor_get(x_513, 0);
lean_inc(x_515);
lean_dec(x_513);
x_516 = !lean_is_exclusive(x_514);
if (x_516 == 0)
{
lean_object* x_517; lean_object* x_518; 
x_517 = lean_ctor_get(x_514, 2);
lean_inc(x_515);
x_518 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_517, x_508, x_515);
lean_ctor_set(x_514, 2, x_518);
x_4 = x_515;
x_5 = x_514;
goto block_14;
}
else
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; 
x_519 = lean_ctor_get(x_514, 0);
x_520 = lean_ctor_get(x_514, 1);
x_521 = lean_ctor_get(x_514, 2);
lean_inc(x_521);
lean_inc(x_520);
lean_inc(x_519);
lean_dec(x_514);
lean_inc(x_515);
x_522 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_521, x_508, x_515);
x_523 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_523, 0, x_519);
lean_ctor_set(x_523, 1, x_520);
lean_ctor_set(x_523, 2, x_522);
x_4 = x_515;
x_5 = x_523;
goto block_14;
}
}
else
{
uint8_t x_524; 
lean_dec(x_508);
lean_dec(x_2);
x_524 = !lean_is_exclusive(x_513);
if (x_524 == 0)
{
return x_513;
}
else
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_525 = lean_ctor_get(x_513, 0);
x_526 = lean_ctor_get(x_513, 1);
lean_inc(x_526);
lean_inc(x_525);
lean_dec(x_513);
x_527 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_527, 0, x_525);
lean_ctor_set(x_527, 1, x_526);
return x_527;
}
}
}
else
{
lean_object* x_528; 
lean_dec(x_508);
x_528 = lean_ctor_get(x_512, 0);
lean_inc(x_528);
lean_dec(x_512);
x_4 = x_528;
x_5 = x_3;
goto block_14;
}
}
}
else
{
lean_object* x_529; lean_object* x_530; 
x_529 = lean_ctor_get(x_3, 2);
lean_inc(x_529);
x_530 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_529, x_508);
lean_dec(x_529);
if (lean_obj_tag(x_530) == 0)
{
lean_object* x_531; 
lean_inc(x_508);
x_531 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_508, x_3);
if (lean_obj_tag(x_531) == 0)
{
lean_object* x_532; lean_object* x_533; uint8_t x_534; 
x_532 = lean_ctor_get(x_531, 1);
lean_inc(x_532);
x_533 = lean_ctor_get(x_531, 0);
lean_inc(x_533);
lean_dec(x_531);
x_534 = !lean_is_exclusive(x_532);
if (x_534 == 0)
{
lean_object* x_535; lean_object* x_536; 
x_535 = lean_ctor_get(x_532, 2);
lean_inc(x_533);
x_536 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_535, x_508, x_533);
lean_ctor_set(x_532, 2, x_536);
x_4 = x_533;
x_5 = x_532;
goto block_14;
}
else
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; 
x_537 = lean_ctor_get(x_532, 0);
x_538 = lean_ctor_get(x_532, 1);
x_539 = lean_ctor_get(x_532, 2);
lean_inc(x_539);
lean_inc(x_538);
lean_inc(x_537);
lean_dec(x_532);
lean_inc(x_533);
x_540 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_539, x_508, x_533);
x_541 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_541, 0, x_537);
lean_ctor_set(x_541, 1, x_538);
lean_ctor_set(x_541, 2, x_540);
x_4 = x_533;
x_5 = x_541;
goto block_14;
}
}
else
{
uint8_t x_542; 
lean_dec(x_508);
lean_dec(x_2);
x_542 = !lean_is_exclusive(x_531);
if (x_542 == 0)
{
return x_531;
}
else
{
lean_object* x_543; lean_object* x_544; lean_object* x_545; 
x_543 = lean_ctor_get(x_531, 0);
x_544 = lean_ctor_get(x_531, 1);
lean_inc(x_544);
lean_inc(x_543);
lean_dec(x_531);
x_545 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_545, 0, x_543);
lean_ctor_set(x_545, 1, x_544);
return x_545;
}
}
}
else
{
lean_object* x_546; 
lean_dec(x_508);
x_546 = lean_ctor_get(x_530, 0);
lean_inc(x_546);
lean_dec(x_530);
x_4 = x_546;
x_5 = x_3;
goto block_14;
}
}
}
case 11:
{
lean_object* x_547; uint8_t x_548; 
x_547 = lean_ctor_get(x_2, 2);
lean_inc(x_547);
x_548 = lean_expr_has_expr_mvar(x_547);
if (x_548 == 0)
{
uint8_t x_549; 
x_549 = lean_expr_has_level_mvar(x_547);
if (x_549 == 0)
{
x_15 = x_547;
x_16 = x_3;
goto block_25;
}
else
{
lean_object* x_550; lean_object* x_551; 
x_550 = lean_ctor_get(x_3, 2);
lean_inc(x_550);
x_551 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_550, x_547);
lean_dec(x_550);
if (lean_obj_tag(x_551) == 0)
{
lean_object* x_552; 
lean_inc(x_547);
x_552 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_547, x_3);
if (lean_obj_tag(x_552) == 0)
{
lean_object* x_553; lean_object* x_554; uint8_t x_555; 
x_553 = lean_ctor_get(x_552, 1);
lean_inc(x_553);
x_554 = lean_ctor_get(x_552, 0);
lean_inc(x_554);
lean_dec(x_552);
x_555 = !lean_is_exclusive(x_553);
if (x_555 == 0)
{
lean_object* x_556; lean_object* x_557; 
x_556 = lean_ctor_get(x_553, 2);
lean_inc(x_554);
x_557 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_556, x_547, x_554);
lean_ctor_set(x_553, 2, x_557);
x_15 = x_554;
x_16 = x_553;
goto block_25;
}
else
{
lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; 
x_558 = lean_ctor_get(x_553, 0);
x_559 = lean_ctor_get(x_553, 1);
x_560 = lean_ctor_get(x_553, 2);
lean_inc(x_560);
lean_inc(x_559);
lean_inc(x_558);
lean_dec(x_553);
lean_inc(x_554);
x_561 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_560, x_547, x_554);
x_562 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_562, 0, x_558);
lean_ctor_set(x_562, 1, x_559);
lean_ctor_set(x_562, 2, x_561);
x_15 = x_554;
x_16 = x_562;
goto block_25;
}
}
else
{
uint8_t x_563; 
lean_dec(x_547);
lean_dec(x_2);
x_563 = !lean_is_exclusive(x_552);
if (x_563 == 0)
{
return x_552;
}
else
{
lean_object* x_564; lean_object* x_565; lean_object* x_566; 
x_564 = lean_ctor_get(x_552, 0);
x_565 = lean_ctor_get(x_552, 1);
lean_inc(x_565);
lean_inc(x_564);
lean_dec(x_552);
x_566 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_566, 0, x_564);
lean_ctor_set(x_566, 1, x_565);
return x_566;
}
}
}
else
{
lean_object* x_567; 
lean_dec(x_547);
x_567 = lean_ctor_get(x_551, 0);
lean_inc(x_567);
lean_dec(x_551);
x_15 = x_567;
x_16 = x_3;
goto block_25;
}
}
}
else
{
lean_object* x_568; lean_object* x_569; 
x_568 = lean_ctor_get(x_3, 2);
lean_inc(x_568);
x_569 = l_HashMapImp_find___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__1(x_568, x_547);
lean_dec(x_568);
if (lean_obj_tag(x_569) == 0)
{
lean_object* x_570; 
lean_inc(x_547);
x_570 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_547, x_3);
if (lean_obj_tag(x_570) == 0)
{
lean_object* x_571; lean_object* x_572; uint8_t x_573; 
x_571 = lean_ctor_get(x_570, 1);
lean_inc(x_571);
x_572 = lean_ctor_get(x_570, 0);
lean_inc(x_572);
lean_dec(x_570);
x_573 = !lean_is_exclusive(x_571);
if (x_573 == 0)
{
lean_object* x_574; lean_object* x_575; 
x_574 = lean_ctor_get(x_571, 2);
lean_inc(x_572);
x_575 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_574, x_547, x_572);
lean_ctor_set(x_571, 2, x_575);
x_15 = x_572;
x_16 = x_571;
goto block_25;
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; 
x_576 = lean_ctor_get(x_571, 0);
x_577 = lean_ctor_get(x_571, 1);
x_578 = lean_ctor_get(x_571, 2);
lean_inc(x_578);
lean_inc(x_577);
lean_inc(x_576);
lean_dec(x_571);
lean_inc(x_572);
x_579 = l_HashMapImp_insert___at_Lean_AbstractMetavarContext_InstantiateExprMVars_visit___spec__3(x_578, x_547, x_572);
x_580 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_580, 0, x_576);
lean_ctor_set(x_580, 1, x_577);
lean_ctor_set(x_580, 2, x_579);
x_15 = x_572;
x_16 = x_580;
goto block_25;
}
}
else
{
uint8_t x_581; 
lean_dec(x_547);
lean_dec(x_2);
x_581 = !lean_is_exclusive(x_570);
if (x_581 == 0)
{
return x_570;
}
else
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; 
x_582 = lean_ctor_get(x_570, 0);
x_583 = lean_ctor_get(x_570, 1);
lean_inc(x_583);
lean_inc(x_582);
lean_dec(x_570);
x_584 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_584, 0, x_582);
lean_ctor_set(x_584, 1, x_583);
return x_584;
}
}
}
else
{
lean_object* x_585; 
lean_dec(x_547);
x_585 = lean_ctor_get(x_569, 0);
lean_inc(x_585);
lean_dec(x_569);
x_15 = x_585;
x_16 = x_3;
goto block_25;
}
}
}
default: 
{
lean_object* x_586; 
x_586 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_586, 0, x_2);
lean_ctor_set(x_586, 1, x_3);
return x_586;
}
}
block_14:
{
if (lean_obj_tag(x_2) == 10)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_expr_update_mdata(x_2, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = l_Lean_Expr_constName_x21___closed__1;
x_9 = lean_unsigned_to_nat(442u);
x_10 = lean_unsigned_to_nat(15u);
x_11 = l_Lean_Expr_updateMData_x21___closed__1;
x_12 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_8, x_9, x_10, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
block_25:
{
if (lean_obj_tag(x_2) == 11)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_expr_update_proj(x_2, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_15);
lean_dec(x_2);
x_19 = l_Lean_Expr_constName_x21___closed__1;
x_20 = lean_unsigned_to_nat(447u);
x_21 = lean_unsigned_to_nat(16u);
x_22 = l_Lean_Expr_updateProj_x21___closed__1;
x_23 = l_panicWithPos___at_Lean_Expr_bindingDomain_x21___spec__1(x_19, x_20, x_21, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_16);
return x_24;
}
}
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_expr_has_expr_mvar(x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = lean_expr_has_level_mvar(x_2);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 2);
x_9 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_3, 2, x_9);
x_10 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_3);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 2);
lean_dec(x_14);
lean_ctor_set(x_12, 2, x_8);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_8);
lean_ctor_set(x_10, 1, x_17);
return x_10;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_10, 1);
x_19 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
lean_inc(x_19);
lean_dec(x_10);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 x_22 = x_18;
} else {
 lean_dec_ref(x_18);
 x_22 = lean_box(0);
}
if (lean_is_scalar(x_22)) {
 x_23 = lean_alloc_ctor(0, 3, 0);
} else {
 x_23 = x_22;
}
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_8);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_8);
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_3, 0);
x_30 = lean_ctor_get(x_3, 1);
x_31 = lean_ctor_get(x_3, 2);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_3);
x_32 = l_HashMap_Inhabited___closed__1;
x_33 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_30);
lean_ctor_set(x_33, 2, x_32);
x_34 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_37 = x_34;
} else {
 lean_dec_ref(x_34);
 x_37 = lean_box(0);
}
x_38 = lean_ctor_get(x_35, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 lean_ctor_release(x_35, 2);
 x_40 = x_35;
} else {
 lean_dec_ref(x_35);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(0, 3, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_41, 2, x_31);
if (lean_is_scalar(x_37)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_37;
}
lean_ctor_set(x_42, 0, x_36);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_31);
x_43 = lean_ctor_get(x_34, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_34, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_45 = x_34;
} else {
 lean_dec_ref(x_34);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_3);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_3, 2);
x_49 = l_HashMap_Inhabited___closed__1;
lean_ctor_set(x_3, 2, x_49);
x_50 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_3);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_50, 1);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_52, 2);
lean_dec(x_54);
lean_ctor_set(x_52, 2, x_48);
return x_50;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_52, 0);
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_52);
x_57 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_57, 2, x_48);
lean_ctor_set(x_50, 1, x_57);
return x_50;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_58 = lean_ctor_get(x_50, 1);
x_59 = lean_ctor_get(x_50, 0);
lean_inc(x_58);
lean_inc(x_59);
lean_dec(x_50);
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 lean_ctor_release(x_58, 2);
 x_62 = x_58;
} else {
 lean_dec_ref(x_58);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(0, 3, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_63, 2, x_48);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_59);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
else
{
uint8_t x_65; 
lean_dec(x_48);
x_65 = !lean_is_exclusive(x_50);
if (x_65 == 0)
{
return x_50;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_50, 0);
x_67 = lean_ctor_get(x_50, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_50);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_3, 0);
x_70 = lean_ctor_get(x_3, 1);
x_71 = lean_ctor_get(x_3, 2);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_3);
x_72 = l_HashMap_Inhabited___closed__1;
x_73 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_73, 0, x_69);
lean_ctor_set(x_73, 1, x_70);
lean_ctor_set(x_73, 2, x_72);
x_74 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_73);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 0);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
x_78 = lean_ctor_get(x_75, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_75, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 x_80 = x_75;
} else {
 lean_dec_ref(x_75);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(0, 3, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
lean_ctor_set(x_81, 2, x_71);
if (lean_is_scalar(x_77)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_77;
}
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_71);
x_83 = lean_ctor_get(x_74, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_74, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_85 = x_74;
} else {
 lean_dec_ref(x_74);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(1, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
}
}
}
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_exprIsInhabited;
x_8 = lean_array_get(x_7, x_1, x_2);
x_9 = l_Lean_LocalContext_findFVar(x_3, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_10 = l_Lean_AbstractMetavarContext_InstantiateExprMVars_instantiateDelayedAux___main___rarg___closed__1;
x_11 = lean_unsigned_to_nat(380u);
x_12 = lean_unsigned_to_nat(16u);
x_13 = l_Nat_foldRevAux___main___at_Lean_LocalContext_mkBinding___spec__1___closed__1;
x_14 = l_panicWithPos___at_Lean_MetavarContext_mkLambda___spec__63(x_10, x_11, x_12, x_13, x_6);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
lean_dec(x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_15, sizeof(void*)*4);
lean_dec(x_15);
x_19 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2(x_1, x_17, x_6);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_expr_abstract_range(x_21, x_2, x_1);
lean_dec(x_21);
if (x_4 == 0)
{
lean_object* x_23; 
x_23 = lean_expr_mk_forall(x_16, x_18, x_22, x_5);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; 
x_24 = lean_expr_mk_lambda(x_16, x_18, x_22, x_5);
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_expr_abstract_range(x_25, x_2, x_1);
lean_dec(x_25);
if (x_4 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_expr_mk_forall(x_16, x_18, x_27, x_5);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_expr_mk_lambda(x_16, x_18, x_27, x_5);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_16);
lean_dec(x_5);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_15, 2);
lean_inc(x_36);
x_37 = lean_ctor_get(x_15, 3);
lean_inc(x_37);
x_38 = lean_ctor_get(x_15, 4);
lean_inc(x_38);
lean_dec(x_15);
x_39 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2(x_1, x_37, x_6);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_expr_abstract_range(x_40, x_2, x_1);
lean_dec(x_40);
x_43 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2(x_1, x_38, x_41);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_expr_abstract_range(x_45, x_2, x_1);
lean_dec(x_45);
x_47 = lean_expr_mk_let(x_36, x_42, x_46, x_5);
lean_ctor_set(x_43, 0, x_47);
return x_43;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_ctor_get(x_43, 0);
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_43);
x_50 = lean_expr_abstract_range(x_48, x_2, x_1);
lean_dec(x_48);
x_51 = lean_expr_mk_let(x_36, x_42, x_50, x_5);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_dec(x_42);
lean_dec(x_36);
lean_dec(x_5);
x_53 = !lean_is_exclusive(x_43);
if (x_53 == 0)
{
return x_43;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_43, 0);
x_55 = lean_ctor_get(x_43, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_43);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_38);
lean_dec(x_36);
lean_dec(x_5);
x_57 = !lean_is_exclusive(x_39);
if (x_57 == 0)
{
return x_39;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_39, 0);
x_59 = lean_ctor_get(x_39, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_39);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
}
}
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_5, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_5, x_10);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
x_13 = lean_box(x_1);
lean_inc(x_2);
lean_inc(x_11);
lean_inc(x_3);
x_14 = lean_alloc_closure((void*)(l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___lambda__1___boxed), 6, 5);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_11);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_13);
lean_closure_set(x_14, 4, x_6);
x_15 = lean_box(x_1);
x_16 = lean_alloc_closure((void*)(l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___boxed), 7, 5);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_4);
lean_closure_set(x_16, 4, x_11);
x_17 = lean_apply_5(x_12, lean_box(0), lean_box(0), x_14, x_16, x_7);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_4, 0);
lean_inc(x_18);
lean_dec(x_4);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_apply_3(x_19, lean_box(0), x_6, x_7);
return x_20;
}
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__67(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2(x_3, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_expr_abstract_range(x_8, x_6, x_3);
lean_dec(x_8);
x_11 = l_EIO_Monad___closed__1;
x_12 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68(x_1, x_2, x_3, x_11, x_6, x_10, x_9);
lean_dec(x_6);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
return x_7;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_AbstractMetavarContext_mkBinding___at_Lean_MetavarContext_mkLambda___spec__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_HashMap_Inhabited___closed__1;
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__67(x_1, x_4, x_5, x_6, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
lean_object* l_Lean_MetavarContext_mkLambda(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 1;
x_7 = l_Lean_AbstractMetavarContext_mkBinding___at_Lean_MetavarContext_mkLambda___spec__1(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__6(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__10(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__11(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__9(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__12(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__8(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__16(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__17(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__15___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__15(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__18(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__14___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__14(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__13(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__22(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__23(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__21___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__21(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__24(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__20___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__20(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__19(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__28___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__28(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__29___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__29(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__27(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__30___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__30(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__26___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__26(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__25(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__34___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__34(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__35___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__35(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__33___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__33(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__36___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__36(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__32___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__32(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__31(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__40___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__40(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__41___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__41(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__39___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__39(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__42___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__42(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__38___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__38(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__37(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__46___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__46(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__47___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__47(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__45___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__45(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__48___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__48(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__44___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__44(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__43(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__52___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__52(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__53___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__53(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__51___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__51(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__54___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__54(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__50___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__50(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__49(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__58___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__58(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__59___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__59(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__57___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__57(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__60___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_MetavarContext_mkLambda___spec__60(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__56___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentArray_anyM___at_Lean_MetavarContext_mkLambda___spec__56(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_AbstractMetavarContext_DependsOn_dep___main___at_Lean_MetavarContext_mkLambda___spec__55(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_LocalContext_foldlFromM___at_Lean_MetavarContext_mkLambda___spec__61(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_panicWithPos___at_Lean_MetavarContext_mkLambda___spec__63___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_panicWithPos___at_Lean_MetavarContext_mkLambda___spec__63(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___lambda__1(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__64(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__62___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__62(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_umapMAux___main___at_Lean_MetavarContext_mkLambda___spec__65(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_mkLambda___spec__66___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Expr_3__withAppRevAux___main___at_Lean_MetavarContext_mkLambda___spec__66(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDepsAux___main___at_Lean_MetavarContext_mkLambda___spec__3(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_AbstractMetavarContext_MkBinding_elimMVarDeps___at_Lean_MetavarContext_mkLambda___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___lambda__1(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Nat_foldRevMAux___main___at_Lean_MetavarContext_mkLambda___spec__68(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__67___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Lean_AbstractMetavarContext_MkBinding_mkBinding___at_Lean_MetavarContext_mkLambda___spec__67(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_AbstractMetavarContext_mkBinding___at_Lean_MetavarContext_mkLambda___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_Lean_AbstractMetavarContext_mkBinding___at_Lean_MetavarContext_mkLambda___spec__1(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_MetavarContext_mkForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 0;
x_7 = l_Lean_AbstractMetavarContext_mkBinding___at_Lean_MetavarContext_mkLambda___spec__1(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* initialize_Init_Lean_AbstractMetavarContext(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_MetavarContext(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_AbstractMetavarContext(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_MetavarContext_mkMetavarContext___closed__1 = _init_l_Lean_MetavarContext_mkMetavarContext___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_mkMetavarContext___closed__1);
l_Lean_MetavarContext_getDecl___closed__1 = _init_l_Lean_MetavarContext_getDecl___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_getDecl___closed__1);
l_Lean_MetavarContext_getDecl___closed__2 = _init_l_Lean_MetavarContext_getDecl___closed__2();
lean_mark_persistent(l_Lean_MetavarContext_getDecl___closed__2);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__1 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__1();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__1);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__2 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__2();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__2);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__3 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__3();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__3);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__4 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__4();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__4);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__5 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__5();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__5);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__6 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__6();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__6);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__7 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__7();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__7);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__8 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__8();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__8);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__9 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__9();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__9);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__10 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__10();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__10);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__11 = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__11();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext___closed__11);
l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext = _init_l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext();
lean_mark_persistent(l_Lean_MetavarContext_metavarContextIsAbstractMetavarContext);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif