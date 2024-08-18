// File: Line.h
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The header file for the Line Class

#ifndef SHAPES_LINE_H
#define SHAPES_LINE_H


#include "Shape.h"
#include "Point.h"

class Line : public Shape{
private:
    Point pointOne;
    Point pointTwo;

public:
    Line(Point pointOne, Point pointTwo); //Property Constructor for points of Line

    //methods

    double calculateDistance();//Prototype for distance for the Line Class

    double calculateAngle();//Prototype for Angle for the Line Class

   // double slope();//Prototype for Slope for the Line Class

    std::string toString() override;

    //setters

    void setPointOne(Point &pointOne);

    void setPointTwo(Point &pointTwo);
}; //point class

#endif //SHAPES_LINE_H
