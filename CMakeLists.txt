cmake_minimum_required(VERSION 3.28)
project(MATHE_PRAKTIKUM_5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MATHE_PRAKTIKUM_5
        CLotto.cpp
        CLotto.h
        CZufall.cpp
        CZufall.h
        main.cpp)
