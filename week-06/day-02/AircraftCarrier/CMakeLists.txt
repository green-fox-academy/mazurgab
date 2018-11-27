cmake_minimum_required(VERSION 3.12)
project(AircraftCarrier)

set(CMAKE_CXX_STANDARD 14)

add_executable(AircraftCarrier main.cpp Aircrafts.cpp Aircrafts.h F16.cpp F16.h F35.cpp F35.h Carrier.cpp Carrier.h)