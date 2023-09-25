cmake_minimum_required(VERSION 3.22)
project(BD2_AVL)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(BD2_AVL
        avl.h
        main.cpp
        Record.h)
