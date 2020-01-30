cmake_minimum_required(VERSION 3.7)

include(Qt)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB SOURCES *.cpp)

add_executable(app ${SOURCES})
target_link_libraries(app Qt5::Core)
