/*
Copyright (c) 2014-2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Leonardo de Moura, Gabriel Ebner, Sebastian Ullrich
*/
#include <unordered_map>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <sys/stat.h>
#include <lean/thread.h>
#include <lean/interrupt.h>
#include <lean/sstream.h>
#include <lean/hash.h>
#include <lean/io.h>
#include <lean/compact.h>
#include "util/io.h"
#include "util/buffer.h"
#include "util/name_map.h"
#include "util/file_lock.h"
#include "library/module.h"
#include "library/constants.h"
#include "library/time_task.h"
#include "library/util.h"

#if defined(__has_feature)
#if __has_feature(address_sanitizer)
#include <sanitizer/lsan_interface.h>
#endif
#endif

namespace lean {
// manually padded to multiple of word size, see `initialize_module`
static char const * g_olean_header   = "oleanfile!!!!!!!";

extern "C" object * lean_save_module_data(object * fname, object * mdata, object *) {
    std::string olean_fn(string_cstr(fname));
    object_ref mdata_ref(mdata);
    try {
        exclusive_file_lock output_lock(olean_fn);
        std::ofstream out(olean_fn, std::ios_base::binary);
        if (out.fail()) {
            return io_result_mk_error((sstream() << "failed to create file '" << olean_fn << "'").str());
        }
        object_compactor compactor;
        compactor(mdata_ref.raw());
        out.write(g_olean_header, strlen(g_olean_header));
        out.write(static_cast<char const *>(compactor.data()), compactor.size());
        out.close();
        return io_result_mk_ok(box(0));
    } catch (exception & ex) {
        return io_result_mk_error((sstream() << "failed to write '" << olean_fn << "': " << ex.what()).str());
    }
}

extern "C" object * lean_read_module_data(object * fname, object *) {
    std::string olean_fn(string_cstr(fname));
    try {
        shared_file_lock olean_lock(olean_fn);
        std::ifstream in(olean_fn, std::ios_base::binary);
        if (in.fail()) {
            return io_result_mk_error((sstream() << "failed to open file '" << olean_fn << "'").str());
        }
        /* Get file size */
        in.seekg(0, in.end);
        size_t size = in.tellg();
        in.seekg(0);
        size_t header_size = strlen(g_olean_header);
        if (size < header_size) {
            return io_result_mk_error((sstream() << "failed to read file '" << olean_fn << "', invalid header").str());
        }
        char * header = new char[header_size];
        in.read(header, header_size);
        if (strncmp(header, g_olean_header, header_size) != 0) {
            return io_result_mk_error((sstream() << "failed to read file '" << olean_fn << "', invalid header").str());
        }
        delete[] header;
        // use `malloc` here as expected by `compacted_region`
        char * buffer = static_cast<char *>(malloc(size - header_size));
        in.read(buffer, size - header_size);
        if (!in) {
            return io_result_mk_error((sstream() << "failed to read file '" << olean_fn << "'").str());
        }
        in.close();
        compacted_region * region = new compacted_region(size - header_size, buffer);
#if defined(__has_feature)
#if __has_feature(address_sanitizer)
        // do not report as leak
        __lsan_ignore_object(region);
#endif
#endif
        object * mod = region->read();
        object * mod_region = alloc_cnstr(0, 2, 0);
        cnstr_set(mod_region, 0, mod);
        cnstr_set(mod_region, 1, box_size_t(reinterpret_cast<size_t>(region)));
        return io_result_mk_ok(mod_region);
    } catch (exception & ex) {
        return io_result_mk_error((sstream() << "failed to read '" << olean_fn << "': " << ex.what()).str());
    }
}

/*
@[export lean.write_module_core]
def writeModule (env : Environment) (fname : String) : IO Unit := */
extern "C" object * lean_write_module(object * env, object * fname, object *);

void write_module(environment const & env, std::string const & olean_fn) {
    consume_io_result(lean_write_module(env.to_obj_arg(), mk_string(olean_fn), io_mk_world()));
}
}
