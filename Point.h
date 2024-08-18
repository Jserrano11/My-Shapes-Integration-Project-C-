// File: Point.h
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: The header file for the Point Class
#ifndef SHAPES_POINT_H
#define SHAPES_POINT_H


class Point{ // Create the class for Point using Shape as base class
protected:
    double x;
    double y;

public:
    Point();//constructor for Point

    Point(double x, double y); // setter prototype for setting the Point Values XY

    //setters
    void setXValue(double xCoordinate);

    void setYValue(double yCoordinate);
    //Getters
    double getXValue() const;

    double getYValue() const;

};


#endif //SHAPES_POINT_H
