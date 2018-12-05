cmake_minimum_required(VERSION 3.12)
project(Cars)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cars main.cpp Cars.cpp Cars.h Carpark.cpp Carpark.h)