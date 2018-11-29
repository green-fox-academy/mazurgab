cmake_minimum_required(VERSION 3.12)
project(Carpark)

set(CMAKE_CXX_STANDARD 14)

add_executable(Carpark main.cpp Car.cpp Car.h Carpark.cpp Carpark.h)