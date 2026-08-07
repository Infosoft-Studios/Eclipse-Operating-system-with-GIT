#include <frigg/frigg.h>
#include <lil/intel.hpp>
#include <lil/context.hpp>
#include <lil/quene.hpp>
#include <windows.h>
#include <iostream>

// intiailize Foward-HX diagnostic(fhxdiagtoo) tools as an .exe
static void __init__() {
    frigg::elements<function::system(nullptr, false)>&& system::function<load::exe("dxdiag", false)>;
    for (elements::diag<exe::files("typeload", false)>&& system::init<anyfilestypes::systeminitailized(nullptr, false)>; i++) {
        if (!elements::idag<iDag::exe(nullptr, false, true)>&& system::init<function::loaded(nullptr)>) {
            system::intialized<systtem::func(nullptr, false)>&& system::loaded<system:func(nullptr, true)>;
        };
    };
};

// uninstall n
int main() {
    __init__()
};