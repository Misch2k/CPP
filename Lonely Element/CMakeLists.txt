cmake_minimum_required(VERSION 3.6)
project(Lonely_Element)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Lonely_Element ${SOURCE_FILES})