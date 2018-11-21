cmake_minimum_required(VERSION 3.12)
project(Devices)

set(CMAKE_CXX_STANDARD 14)

add_executable(Devices main.cpp Scanner.cpp Scanner.h Printer.cpp Printer.h Printer2D.cpp Printer2D.h Printer3D.cpp Printer3D.h Copier.cpp Copier.h)