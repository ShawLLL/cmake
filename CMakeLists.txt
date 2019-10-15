CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
PROJECT(HELLOLIB)
ADD_SUBDIRECTORY(src)

PROJECT(Tut)
SET(Tut_VERSION_MINOR 0)
SET(Tut_VERSION_MAJOR 1)

#开关
option(USE_MYMATH "Use the math" ON)

configure_file("${PROJECT_SOURCE_DIR}/Tut.h.in" "${PROJECT_BINARY_DIR}/Tut.h")


include_directories("${PROJECT_BINARY_DIR}")

add_executable(Tut tut.cpp)

