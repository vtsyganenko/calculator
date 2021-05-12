cmake_minimum_required(VERSION 3.0)
project(calculator)
include_directories(math/inc)
include_directories(math/scr)
set(HEADERS math/inc/math_methods.h)
set(SOURCES math/src/math_methods.c main.c)
add_executable(calculator ${HEADERS} ${SOURCES})

