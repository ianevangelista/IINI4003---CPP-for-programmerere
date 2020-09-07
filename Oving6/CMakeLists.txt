cmake_minimum_required(VERSION 2.8)

project(Oving6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")


find_package(Boost 1.55.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
add_executable(Oving6 server.cpp)
target_link_libraries(Oving6 ${Boost_LIBRARIES})