cmake_minimum_required(VERSION 2.8)

project(tempConverter)

set(SOURCE_EXE main.cpp)

set(SOURCE_LIB tempConvert.cpp)

add_library(tempConvert STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main tempConvert)