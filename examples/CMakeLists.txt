CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

project(examples)

set(CMAKE_CXX_STANDART 20)

include_directories(../include)

add_executable(exam1 example-01.cpp ../src/libnostd.cpp)
