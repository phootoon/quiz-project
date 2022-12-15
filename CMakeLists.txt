cmake_minimum_required(VERSION 3.23)
project(quiz_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(quiz_project
        main.cpp
        question.cpp
        question.h)
