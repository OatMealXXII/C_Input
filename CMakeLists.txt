cmake_minimum_required(VERSION 4.2)
project(Input C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Input
        Circle.c
        helloV2.c
        helloV3.c
        score.c
        sum.c
        sqaure.c
        sqaure2.c
        cafe.c)
