// File: Shape.cpp
// Class: COP 3003, Fall 2022
// Author: Joseph Serrano
// Description: an application that will get input from a user
//for shapes using a point. This application is supposed to show
//an understanding of inheritance within Object-Oriented Programming.

#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"
#include "Triangle.h"
#include "Line.h"
#include <iostream>
#include <vector>

Point* getNewPoint();
Circle* getNewCircle();
Rectangle* getNewRectangle();
Triangle* getNewTriangle();
Line* getNewLine();

int main() {
    std::vector<Shape*> shapes;

    char menuChoice, menuChoiceLowerOrUpper;//initialize menuchoice
    do{
        std::cout << "___________Welcome to The Shape Statistic Calculator_____________ \n"<< "R = Rectangle \nC = Circle \nL= Line \nP = Print \nExit" << std::endl;
        std::cout << "What shape Statistic would you like to print today: " << std::endl;
        std::cin >> menuChoiceLowerOrUpper;
        menuChoice = toupper(menuChoiceLowerOrUpper);

        switch(menuChoice){
            case 'R' :
                shapes.push_back(getNewRectangle()); //add rectangle object to the shapes vector
                break;
            case 'C' :
                shapes.push_back(getNewCircle()); //add circle object to the shapes vector
                break;
            case 'T' :
                shapes.push_back(getNewTriangle()); //add new triangle object to the shapes vector
                break;
            case 'L':
                shapes.push_back(getNewLine());
                break;
            case 'P' :
                std::cout<<  "Your Printed Shapes Are: \n " <<std::endl;
                for (Shape *shape : shapes){ //for loop to cycle through the vector and print each shape object that has been created
                    std::cout<< shape->toString() << std::endl;
                }
                break;

        }//switch for menu choices

    }while(menuChoice != 'E');//Exit for while loop

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;

}

Point* getNewPoint(){
    Point* point1 = new Point();
    std::cout<<"Please enter a Coordinate(x y)" << std::endl;
    double x, y;
    std::cin>>x>>y;
    point1->setXValue(x);
    point1->setYValue(y);

    return point1;
}
Circle* getNewCircle(){
    Point* pointCircle = getNewPoint();
    double radius;
    std::cout <<"enter a radius"<<std::endl;
    std::cin >> radius;
    Circle* circle = new Circle(0.0, *pointCircle);
    circle->setRadius(radius);
    std::cout<< circle->toString() <<std::endl;

    delete pointCircle;
    return circle;
}
Rectangle* getNewRectangle() {
    Point *upperLeftPoint = getNewPoint();
    double length, width;
    std::cout << "Enter a Length" << std::endl;
    std::cin >> length;
    std::cout << "Enter a Width" << std::endl;
    std::cin >> width;
    Rectangle *rectangle = new Rectangle(0.0, 0.0, *upperLeftPoint);
    rectangle->setWidth(width);
    rectangle->setLength(length);
    std::cout << rectangle->toString() << std::endl;

    delete upperLeftPoint;
    return rectangle;
}
Triangle* getNewTriangle(){
    Point *topPoint = getNewPoint();
    Point *lowerLeftPoint = getNewPoint();
    Point *lowerRightPoint = getNewPoint();
    double base,height;
    std::cout << "Enter a Base" << std::endl;
    std::cin >> base;
    std::cout << "Enter a Height" << std::endl;
    std::cin >> height;
    Triangle *triangle = new Triangle(0.0, 0.0, *topPoint, *lowerLeftPoint, *lowerRightPoint);
    triangle->setBase(base);
    triangle->setHeight(height);
    std::cout << triangle->toString() <<std::endl;

    delete topPoint;
    delete lowerRightPoint;
    delete lowerLeftPoint;
    return triangle;
}
Line* getNewLine(){
    Point* pointOne = getNewPoint();
    Point* pointTwo = getNewPoint();
    Line *line = new Line(*pointOne, *pointTwo);
    line->setPointOne(*pointOne);
    line->setPointTwo(*pointTwo);
    line->calculateDistance();
    line->calculateAngle();
    std::cout << line->toString() << std::endl;

    delete pointTwo;
    delete pointOne;
    return line;
}