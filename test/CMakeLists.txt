cmake_minimum_required(VERSION 3.7)

file(GLOB TEST_SOURCES tst_*.cpp)

add_executable(unit catch.hpp unit.cpp ${TEST_SOURCES})
