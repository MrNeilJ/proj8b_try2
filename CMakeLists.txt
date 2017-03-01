cmake_minimum_required(VERSION 3.6)
project(proj8b)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES stdDev.cpp Student.cpp Student.hpp)
add_executable(proj8b ${SOURCE_FILES})