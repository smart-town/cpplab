cmake_minimum_required(VERSION 3.15)

project(C-LAB)

add_executable(basic1 01basic/functions.cpp)
add_executable(datatypes 01basic/datatypes.cpp)
add_executable(templates 01basic/templates.cpp)
add_executable(smartpointer 01basic/smartpointers.cpp)
add_executable(structure 01basic/structure.cpp)


# message("PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
# add_executable(crowtest crowtest/app.cpp)
# target_include_directories(crowtest 
#     PRIVATE
#         ${PROJECT_SOURCE_DIR}/lib/headers
# )