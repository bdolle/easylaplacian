cmake_minimum_required(VERSION 3.9)
project(easylaplace)

set(CMAKE_CXX_STANDARD 11)

add_executable(easylaplace main.cpp relaxfuncs.cpp relaxfuncs.h)