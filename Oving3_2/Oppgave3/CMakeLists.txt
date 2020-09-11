cmake_minimum_required(VERSION 2.8)

project(Oppgave3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(Oppgave3 commodity.cpp commodity.hpp)
