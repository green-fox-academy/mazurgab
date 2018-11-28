cmake_minimum_required(VERSION 3.12)
project(PetrolStation)

set(CMAKE_CXX_STANDARD 14)

add_executable(PetrolStation main.cpp Station.cpp Station.h Car.cpp Car.h)