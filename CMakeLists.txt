cmake_minimum_required(VERSION 3.16)

project(z_domowe)
set(CMAKE_CXX_STANDARD 17)
include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/src)
add_executable(z_domowe src/main.cpp src/calc.cpp include/calc.h)