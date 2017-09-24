cmake_minimum_required(VERSION 3.8)
project(functions)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES TrevorNeweyHw2_Task1.cpp)
#set(SOURCE_FILES point.cpp)
#set(SOURCE_FILES functionsReturn.cpp)
#set(SOURCE_FILES function.cpp)
#set(SOURCE_FILES functionsStruct.cpp)
add_executable(functions ${SOURCE_FILES})