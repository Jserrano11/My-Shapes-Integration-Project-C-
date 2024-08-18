#include "Shape.h"

void Shape::setShapeType(TypeOfShapes newShapeType){
    shapeType=newShapeType;
}

Shape::Shape(){
    shapeType = UNKNOWN;
}

Shape::Shape(TypeOfShapes shape_type) {
    shapeType = shape_type;
}

TypeOfShapes Shape::getShapeType() {
    return shapeType;
}
std::string Shape::toString() {
    return "";
}

