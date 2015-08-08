cmake_minimum_required(VERSION 2.8)

project(distanceConvert)

set(SOURCE_EXE main.cpp)

set(SOURCE_LIB distConvert.cpp)

add_library(distConvert STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main distConvert)