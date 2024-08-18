// File: Circle.cpp
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The source file of the header file for circle.h

#include "Shape.h"
#include "Circle.h"
Circle::Circle(double radius, Point pointCirc) : Shape(CIRCLE), radius(radius){
    points.push_back(pointCirc);
}

double Circle::getArea() {
    return 3.14*getRadius()*getRadius();
}
double Circle::getPerimeter() {
    return 2*3.14*getRadius();
}
double Circle::getRadius() const {
    return radius;
}
void Circle::setRadius(double r) {
    radius = r;
}

std::string Circle::toString() {
    std::string retDetailsCirc = "\nCircle:\n";
    retDetailsCirc += "("+std::to_string(points[0].getXValue()) + ", " + std::to_string(points[0].getYValue())+")";
    retDetailsCirc += "\nArea: " + std::to_string(getArea()) + "\n";
    retDetailsCirc += "Circumference: " + std::to_string(getPerimeter()) + "\n";

    return retDetailsCirc;
}
