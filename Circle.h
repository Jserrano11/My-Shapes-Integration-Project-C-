// File: Circle.h
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The header file for the Circle class
#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H

#include "Shape.h"
#include "Point.h"

class Circle : public Shape {
public:
    Circle(double radius, Point pointCirc);
    double getArea();
    double getPerimeter();
    std::string toString() override;
    double getRadius() const;
    void setRadius(double r);
private:
    double radius;
};


#endif //SHAPES_CIRCLE_H

