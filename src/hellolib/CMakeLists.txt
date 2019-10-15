CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
SET(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/ lib")
AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src/hellolib/src HELLOlib_src)
INCLUDE_DIRECTORIES("include")
ADD_LIBRARY(hello_static STATIC ${HELLOlib_src})
ADD_LIBRARY(hello SHARED hello_lib_shared.cpp)
target_link_libraries(hello hello_static)

set_target_properties(hello_static PROPERTIES OUTPUT_NAME "name")