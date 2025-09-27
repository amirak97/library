cmake_minimum_required(VERSION 3.31)
project(Library)

set(CMAKE_CXX_STANDARD 20)

add_executable(Library main.cpp
        include/Book.hpp
        src/Book.cpp)
