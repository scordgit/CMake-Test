cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(CMAKE_C_COMPILER C://msys64//mingw64//bin//gcc.exe)
SET(CMAKE_CXX_COMPILER C://msys64//mingw64//bin//g++.exe)

project(CMakeTest VERSION 1.0
                DESCRIPTION "To test Cmake"
                LANGUAGES C CXX)

include_directories(include)

add_subdirectory(src)
add_subdirectory(apps)

