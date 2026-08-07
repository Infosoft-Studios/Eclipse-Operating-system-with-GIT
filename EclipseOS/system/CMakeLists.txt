cmake_minimum_required(VERSION 3.10)
project(DPP_Project)

add_custom_target(build_dpp
        COMMAND dppc ${CMAKE_SOURCE_DIR}/main.dpp -o main
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)
