cmake_minimum_required(VERSION 3.7)

include(Qt)

set(SOURCES
	main.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(starter ${SOURCES})
target_link_libraries(starter Qt5::Core)
