//
// Created by serra on 12/1/2022.
//
#include "Triangle.h"
#include "cmath"

Triangle::Triangle(double base, double height, Point pointTri, Point pointTriTwo, Point pointTriThree): Shape(TRIANGLE), base(base), height(height){
    points.push_back(pointTri);
    points.push_back(pointTriTwo);
    points.push_back(pointTriThree);
}

double Triangle::getArea(){
    return .5*getBase()*getHeight();
}
double Triangle::getPerimeter() {
    distanceAB = calculateDistance(points[0], points[1]);
    distanceBC = calculateDistance(points[1], points[2]);
    distanceCA = calculateDistance(points[2], points[0]);

    return distanceAB + distanceBC + distanceCA;
}
double Triangle::calculateDistance( Point& p1, Point& p2) {
    double deltaX = p2.getXValue() - p1.getXValue();
    double deltaY = p2.getYValue() - p1.getYValue();
    return sqrt(pow(deltaX,2)+ pow(deltaY, 2));
}
double Triangle::getBase(){
    return height;
}
double Triangle::getHeight(){
    return base;
}
void Triangle::setBase(double b){
    base = b;
}
void Triangle::setHeight(double h){
    height = h;
}

std::string Triangle::toString() {
    std::string retDetailsTri = "\nTriangle:\n";
    retDetailsTri += "("+std::to_string(points[0].getXValue()) + ", " + std::to_string(points[0].getYValue())+")" + ", " + "("+ std::to_string(points[1].getXValue())+ ", "+std::to_string(points[1].getYValue())+")" + ", "+ "("+ std::to_string(points[2].getXValue())+ ", "+std::to_string(points[2].getYValue())+")";
    retDetailsTri += "\nArea: " + std::to_string(getArea()) + "\n";
    retDetailsTri += "\nPerimeter: " + std::to_string(getPerimeter()) + "\n";

    return retDetailsTri;
}
