cmake_minimum_required(VERSION 2.8)

project(Oppgave1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(Oppgave1 circle.cpp circle.hpp)
