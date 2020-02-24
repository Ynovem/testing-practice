include(Qt)

add_subdirectory(sentence)

set(SOURCES
	main.cpp
	converter.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(example ${SOURCES})

target_link_libraries(example
	Qt5::Core
	sentence
)
