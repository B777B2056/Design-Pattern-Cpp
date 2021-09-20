cmake_minimum_required(VERSION 2.8)
project(design_pattern)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11")
add_executable(patterns main.cpp state/state.cpp abstract_factory/abstract_factory.cpp)
