cmake_minimum_required(VERSION 3.8)

project(dlopen_global LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(module MODULE 
    module.cpp)

add_executable(program
    program.cpp)

target_link_libraries(program PRIVATE ${CMAKE_DL_LIBS})
