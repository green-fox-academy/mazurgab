cmake_minimum_required(VERSION 3.12)
project(Pirates)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Pirates
        main.cpp
        Pirate.cpp
        Pirate.h)
