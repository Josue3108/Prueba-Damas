# cmake_minimum_required(VERSION <specify CMake version here>)
project(Prueba_Damas)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Prueba_Damas
        Dama.cpp
        Dama.h
        Movement.cpp)
