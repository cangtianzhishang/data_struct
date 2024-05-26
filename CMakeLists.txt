cmake_minimum_required(VERSION 3.27)
project(cdatastruct C)

set(CMAKE_C_STANDARD 11)

add_executable(cdatastruct string_linklist.c
        DS.h)
