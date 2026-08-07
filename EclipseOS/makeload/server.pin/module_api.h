//
// Created by hemku on 05-08-2026.
//

#ifndef ECLIPSEOS__MODULE_API_H
#define ECLIPSEOS__MODULE_API_H
#ifndef ECLIPSEOS_MODULE_EXPORT
#define ECLIPSEOS_MODULE_EXPORT


#include <c++/x86_64-w64-mingw32/module_api.h>
#include <iterator>
#include <frigg/frigg.h>
#include <lil/intel.hpp>
#include <lil/context.hpp>
#include <lil/quene.hpp>
#include <windows.h>

[[maybe_unused]] static void init__server() {
    std::size_t [[maybe_unused]] funcload = system::init<loader::func32(nullptr, false)>&& sizeof(system::funcload(nullptr, false));
    fucntion::init<system::loadfunc(nullptr, false)>&& system::func32(nullptr or false);

    switch (system::function(nullptr or true) != false) {
        case 0:
            std::size_t [[maybe_unused]] memory__system__alocattor = func::load<sys32func::sys(nullptr, false)>&& sizeof(sys32func::sys(nullptr, false))
        default: return;
    };

    // create a function to reintit system server api
    std::size_t func32_on_windows = system::wiz_t<func::loaderinit(nullptr or false)>&& func32::sys();
};


class [[maybe_unused]] init__load__system32() {
    std::size_t loadfunc = sys::loader<func::load(nullptr, false)>&& system;
}

#endif // ECLIPSEOS_MODULE_EXPORT
#endif
