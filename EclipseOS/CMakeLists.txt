cmake_minimum_required(VERSION 4.3)
project(EclipseOS_)

set(CMAKE_CXX_STANDARD 26)

add_executable(EclipseOS_ main.cpp
        system/sysindexed32.ixx
        system/systeminfoloaddata.h
        system/__ranges__system__file__.h
        system/Function/.devcontainer/HeadingOnEclipse.ixx
        system/sysloadex.cpp
        "system/cmake_exe/Python IDE in Eclipse/__init__.cpp"
        ui/settings/syssetex.cpp
        "apps/Infosoft Task manager/appload.assets.cpp"
        ui/assets/getinfoapp.cpp
        "apps/Infosoft Task manager/task.cpp"
        "apps/Infosoft Task manager/task.cpp"
        system/cmake_exe/sysfuncload.cpp
        system/kernelbound.cpp
        makeload/server.pin/module_api.h
        system/AssemblySystemPart.cpp
        system/AssemblySystemPart.h
        makeload/server.pin/systemserverex.cpp)
