cmake_minimum_required(VERSION 3.12)
project(gardenApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(gardenApp main.cpp Flowers.cpp Flowers.h Garden.cpp Garden.h Trees.cpp Trees.h)