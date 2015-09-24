cmake_minimum_required (VERSION 2.8)

project (cpp_cookbook)


#Use Boost
FIND_PACKAGE( Boost)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

#Hello World###########################
add_executable(HelloWorld  src/HelloWorld/main.cpp)

set_target_properties(HelloWorld
PROPERTIES
RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/HelloWorld"
)
######################################


#Function Pointers###########################
add_executable(Test  src/FunctionPointers/main.cpp)

target_link_libraries(Test ${Boost_LIBRARIES} )

set_target_properties(Test
PROPERTIES
RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/Test"
)
######################################










