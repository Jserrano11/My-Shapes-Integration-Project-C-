// File: Shape.h
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The header file to create the shapes class

#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H


#include <string>
#include <vector>
#include "Point.h"

enum TypeOfShapes{
    UNKNOWN,
    CIRCLE,
    LINE,
    RECTANGLE,
    TRIANGLE
};

class Shape{
protected:

    std::vector<Point> points;

    TypeOfShapes shapeType;
public:

    Shape(); //default constructor for shapes

    Shape(TypeOfShapes shape_type); //Property Constructor

    //getters

    TypeOfShapes getShapeType();

    //setters

    void setShapeType(TypeOfShapes newShapeType = UNKNOWN);

    virtual std::string toString();



};


#endif //SHAPES_SHAPE_H
