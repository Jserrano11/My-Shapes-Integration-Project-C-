// File: Rectangle.h
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The header file for the Rectangle class

#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H

#include "Shape.h"
#include <string>
#include "Point.h"

class Rectangle: public Shape {
public:
    Rectangle(double length, double width, Point pointRect);
    double getArea();
    double getPerimeter();
    std::string toString() override;
    double getLength() const;
    double getWidth() const;

    void setLength(double l);
    void setWidth(double w);

private:
    double length;
    double width;

};


#endif //SHAPES_RECTANGLE_H

