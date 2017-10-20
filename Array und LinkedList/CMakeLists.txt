cmake_minimum_required(VERSION 3.6)
project(Array_und_LinkedList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp LinkedList.cpp LinkedList.h Collection.h Array.cpp Array.h Node.h)
add_executable(Array_und_LinkedList ${SOURCE_FILES})