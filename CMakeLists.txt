cmake_minimum_required(VERSION 3.26)
project(ShapeCalculator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ShapeCalculator
        ShapeCalc.cpp
        Shape.h
        Shape.cpp
        Rectangle.cpp
        Rectangle.h
        Circle.cpp
        Circle.h
        Triangle.cpp
        Triangle.h
        Point.cpp
        Point.h
        Line.cpp
        Line.h

)
