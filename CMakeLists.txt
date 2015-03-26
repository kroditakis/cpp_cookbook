cmake_minimum_required (VERSION 2.8)

project (cpp_cookbook)



#Hello World###########################
add_executable(HelloWorld  src/HelloWorld/main.cpp)

set_target_properties(HelloWorld
PROPERTIES
RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/HelloWorld"
)
######################################










