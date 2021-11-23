//
// Created by alber on 16.11.2021.
//

#ifndef OOP_2_POINT_H
#define OOP_2_POINT_H
#include <iostream>
using namespace std;

class Point {
private:
    float x;
    float y;

public:
    Point(float x, float y);

    Point();

    float GetX();

    float GetY();

    static float Distance(Point a, Point b);

    friend ostream& operator<<(ostream& os, const Point& p)
    {
        os << "{X : " << p.x << ", Y : " << p.y << "}";
        return os;
    }
};

#endif //OOP_2_POINT_H
