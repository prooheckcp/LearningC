cmake_minimum_required(VERSION 3.26)
project(LearningC C)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
set(CMAKE_C_STANDARD 11)

add_executable(
        LearningC
        TernatorOperator.c)
