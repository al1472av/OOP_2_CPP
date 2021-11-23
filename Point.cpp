#include "Point.h"
#include <math.h>
#include <iostream>

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
}

Point::Point() {
    this->x = 0;
    this->y = 0;
}

float Point::GetX() {
    return x;
}

float Point::GetY() {
    return y;
}

float Point::Distance(Point a, Point b) {
    return sqrt(pow(b.GetX() - a.GetX(), 2) + pow(b.GetY() - a.GetY(), 2));
}
