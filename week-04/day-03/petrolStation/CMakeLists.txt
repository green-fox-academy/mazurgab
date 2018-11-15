cmake_minimum_required(VERSION 3.12)
project(petrolStation)

set(CMAKE_CXX_STANDARD 14)

add_executable(petrolStation main.cpp Station.cpp Station.h Car.cpp Car.h)