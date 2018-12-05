cmake_minimum_required(VERSION 3.12)
project(Exercise3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Exercise3 main.cpp Books.cpp Books.h HardcoverBooks.cpp HardcoverBooks.h PaperbackBooks.cpp PaperbackBooks.h Bookshelf.cpp Bookshelf.h)