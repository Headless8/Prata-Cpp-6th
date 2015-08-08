cmake_minimum_required(VERSION 2.8)

project(ageConvert)

set(SOURCE_EXE main.cpp)

set(SOURCE_LIB ageConvert.cpp)

add_library(ageConvert STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main ageConvert)