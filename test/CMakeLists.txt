cmake_minimum_required(VERSION 3.7)

include(Qt)
include(Catch)

file(GLOB TEST_SOURCES tst_*.cpp)
file(GLOB APP_SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)
list(REMOVE_ITEM APP_SOURCES ${CMAKE_SOURCE_DIR}/src/main.cpp)

add_executable(unit unit.cpp ${TEST_SOURCES} ${APP_SOURCES})
target_link_libraries(unit Qt5::Core)
