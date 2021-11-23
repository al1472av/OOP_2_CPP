#include <iostream>
#include "Triangle.h"

int main() {
    float x, y;
    while (1) {

        cout << "Vertex A\n";
        cin >> x >> y;
        Point a = Point(x, y);

        cout << "Vertex B\n";
        cin >> x >> y;
        Point b = Point(x, y);

        cout << "Vertex C\n";
        cin >> x >> y;
        Point c = Point(x, y);

        Triangle triangle = Triangle(a,b,c);

        cout << "Area = " << triangle.Area() << "\n";
        cout << "Perimeter = " << triangle.Perimeter() << "\n";
        cout << triangle;
        system("pause");
        cout << "------------------------------------------------------\n";
    }
    return 0;
}
