//
// Created by serra on 12/1/2022.
//
#ifndef SHAPES_TRIANGLE_H
#define SHAPES_TRIANGLE_H

#include "Point.h"
#include "Shape.h"

class Triangle :public Shape {
public:
    Triangle(double base, double height, Point pointTri, Point pointTriTwo, Point pointTriThree);
    double getArea();
    double getPerimeter();
    double calculateDistance(Point& p1, Point& p2);
    double getBase();
    double getHeight();
    void setBase(double b);
    void setHeight(double h);
    std::string toString() override;
private:
    double base;
    double height;
    double distanceAB, distanceCA, distanceBC;
};

#endif //SHAPES_TRIANGLE_H