cmake_minimum_required(VERSION 3.27)
project(CPPMath)

set(CMAKE_CXX_STANDARD 17)

add_library (CPPMath src/main.cpp
        src/CPPMath.cpp)
