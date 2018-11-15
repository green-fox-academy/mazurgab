cmake_minimum_required(VERSION 3.12)
project(fleetOfThings)

set(CMAKE_CXX_STANDARD 14)

add_executable(fleetOfThings main.cpp fleet.cpp fleet.h thing.cpp thing.h)