cmake_minimum_required(VERSION 3.7)

include(Qt)

file(GLOB TEST_SOURCES tst_*.cpp)

add_executable(unit catch.hpp unit.cpp ${TEST_SOURCES})
target_link_libraries(unit Qt5::Core)
