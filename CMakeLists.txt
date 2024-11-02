cmake_minimum_required(VERSION 3.15)

project(C-LAB)

add_executable(01basic1 01basic/functions.cpp)
add_executable(02datatypes 01basic/datatypes.cpp)
add_executable(03templates 01basic/templates.cpp)
add_executable(04smartpointer 01basic/smartpointers.cpp)
add_executable(05structure 01basic/structure.cpp)
add_executable(06dynamicpoly 01basic/dynamicpolymorphism.cpp)
add_executable(07exception 01basic/exceptions.cpp)


message("PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
add_executable(crowtest crowtest/app.cpp)
target_include_directories(crowtest 
    PRIVATE
        ${PROJECT_SOURCE_DIR}/lib/headers
)