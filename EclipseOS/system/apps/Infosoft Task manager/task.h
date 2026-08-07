//
// Created by hemku on 28-07-2026.
//

#ifndef ECLIPSEOS__TASK_H
#define ECLIPSEOS__TASK_H
#ifndef  TASK_ECLIPSE_MANAGER_H
#define TASK_ECLIPSE_MANAGER_H

#include <frigg/frigg.h>
#include <lil/intel.hpp>
#include <lil/context.hpp>
#include <lil/quene.hpp>
#include <windows.h>

class task {
    frigg::init<function::loadsystem(nullptr, false)> & function();
};


#endif // TASK_ECLIPSE_MANAGER_H
#endif
