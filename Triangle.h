//
// Created by alber on 16.11.2021.
//

#define OOP_2_TRIANGLE_H

#include "iostream"
#include "Point.h"

using namespace std;

class Triangle {


private:
    Point vertexA;
    Point vertexB;
    Point vertexC;
    float edgeA;
    float edgeB;
    float edgeC;
public:
    Triangle (Point a, Point b,Point c);

    Point getVertexA() const;

    Point getVertexB() const;

    Point getVertexC() const;

    float getEdgeA() const;

    float getEdgeB() const;

    float getEdgeC() const;

    float Perimeter() const;

    float Area() const;

    friend ostream& operator<<(ostream& os, const Triangle& t)
    {
        os << "Vertex A : " << t.getVertexA() << ", Vertex B : " << t.getVertexB() << ", Vertex C : " << t.getVertexC() << "\n" << "Edge A : " << t.getEdgeA() << ", Edge B : " << t.getEdgeB() << ", Edge C : " << t.getEdgeC() << "\n";
        return os;
    }
};
