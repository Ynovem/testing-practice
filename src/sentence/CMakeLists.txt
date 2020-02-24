include(Qt)

add_library(sentence
	sentence.cpp
)

target_link_libraries(sentence
	Qt5::Core
)
