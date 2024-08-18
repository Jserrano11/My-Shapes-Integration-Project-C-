// File: Line.cpp
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The source file for the Line Header Class

#include <cmath>
#include "Line.h"
#include "Point.h"

Line::Line(Point pointOne, Point pointTwo) : Shape(LINE){
    points.push_back(pointOne);
    points.push_back(pointTwo);
}

double Line::calculateDistance() { //Create function definition for Distance for the Line Class
    double deltaX = pointTwo.getXValue() - pointOne.getXValue();
    double deltaY = pointTwo.getYValue() - pointOne.getYValue();
    return sqrt(pow(deltaX,2)+ pow(deltaY, 2));
}
double Line::calculateAngle() { //Create function definition for Angle for the Line Class
    double deltaXAngle = pointTwo.getXValue() - pointOne.getXValue();
    double deltaYAngle = pointTwo.getYValue() - pointOne.getYValue();
    return atan2(deltaYAngle, deltaXAngle) * 180.0 / 3.14;
}
/*
double Line::slope(){ //Create function definition for Slope for the Line Class
    return ();
}
*/

//setters
void Line::setPointTwo(Point &pointTwo) {
    this -> pointTwo = pointTwo;
}

void Line::setPointOne(Point &pointOne) {
    this -> pointOne = pointOne;
}

std::string Line::toString() {
    std::string retDetailsLine = "\nLine:\n";
    retDetailsLine += "("+std::to_string(points[0].getXValue()) + ", " + std::to_string(points[0].getYValue())+")" + "("+ std::to_string(points[1].getXValue())+ ", "+std::to_string(points[1].getYValue())+")";
    retDetailsLine += "\nDistance: " + std::to_string(calculateDistance()) + "\n";
    retDetailsLine += "Angle: " + std::to_string(calculateAngle()) + "\n";

    return retDetailsLine;
}