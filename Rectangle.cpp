// File: Rectangle.cpp
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The source file for the Rectangle Header file

#include "Shape.h"
#include "Rectangle.h"

Rectangle::Rectangle(double length, double width, Point pointRect): Shape(RECTANGLE), width(width), length(length){
    points.push_back(pointRect);
}

double Rectangle::getArea() {
    return getLength()*getWidth();
}
double Rectangle::getPerimeter(){
    return 2*(getLength())+2*(getWidth());
}
double Rectangle::getWidth() const{
    return width;
}
double Rectangle::getLength() const{
    return length;
}
void Rectangle::setLength(double l){
    length = l;
}
void Rectangle::setWidth(double w){
    width = w;
}

std::string Rectangle::toString() {
    std::string retDetailsRect = "\nRectangle:\n";
    retDetailsRect += "("+std::to_string(points[0].getXValue()) + ", " + std::to_string(points[0].getYValue()) + ")";
    retDetailsRect += "\nArea: " + std::to_string(getArea()) + "\n";
    retDetailsRect += "Perimeter: " + std::to_string(getPerimeter()) + "\n";

    return retDetailsRect;
}

