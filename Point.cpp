// File: Point.cpp
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The source file for the Point Header File
#include "Point.h"

//Default constructor for Point
Point::Point() {
    x = 0;
    y = 0;
}

//property Constructor
Point::Point(double x, double y) : x(x), y(y){
}
//getters
double Point::getYValue() const{
    return y;
}

double Point::getXValue() const{
    return x;
}
//setters
void Point::setYValue(double yCoordinate){
    this -> y = yCoordinate;
}

void Point::setXValue(double xCoordinate) {
    this->x = xCoordinate;
}

