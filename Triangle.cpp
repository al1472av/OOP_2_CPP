//
// Created by alber on 16.11.2021.
//

#include "Triangle.h"

Triangle::Triangle(Point a, Point b, Point c) {
    vertexA = a;
    vertexB = b;
    vertexC = c;
    edgeA = Point::Distance(a, b);
    edgeB = Point::Distance(b, c);
    edgeC = Point::Distance(c, a);

    if (edgeA + edgeB <= edgeC && edgeA + edgeC <= edgeB && edgeC + edgeB <= edgeA)
        std::cout<<"Triangle does not exist";
}

Point Triangle::getVertexA() const {
    return vertexA;
}

Point Triangle::getVertexB() const{
    return vertexB;
}

Point Triangle::getVertexC() const{
    return vertexC;
}

float Triangle::getEdgeA() const{
    return edgeA;
}

float Triangle::getEdgeB() const{
    return edgeB;
}

float Triangle::getEdgeC() const{
    return edgeC;
}

float Triangle::Perimeter() const {
    return getEdgeA() + getEdgeB() + getEdgeC();
}

float Triangle::Area() const {
    float halfPerimeter = Triangle::Perimeter() / 2;
    return sqrt(halfPerimeter * (halfPerimeter - getEdgeA()) * (halfPerimeter - getEdgeB()) * (halfPerimeter - getEdgeC()));
}