//
// Created by hemku on 28-07-2026.
//

#include "task.h"
#include <frigg/frigg.h>
#include <lil/intel.hpp>
#include <lil/context.hpp>
#include <lil/quene.hpp>
#include <windows.h>

namespace {
    class [[maybe_unused]] task32 {
        frigg::init<function::loadsystem(nullptr, false)> & function();
    };
}

