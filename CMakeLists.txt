cmake_minimum_required(VERSION 3.22)
project(final_exam)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wformat-security -Wswitch-default")
add_executable(final_exam main.cpp main.h Rectangle.cpp Rectangle.h Shape.cpp Shape.h Square.cpp Square.h)