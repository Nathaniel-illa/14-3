#include "rectangle.hpp"

int main() {
    Rectangle r1, r2;
    Square s;

    // Set width and height of r1 and print its area
    r1.setHeight(10);
    r1.setWidth(20);
    cout << "Area of r1: " << r1.getArea() << endl;

    // Set width of square and create a rectangle using the square's width
    s.setWidth(100);
    r2 = r2.makeRectangleWithSquare(s);

    // Print the area of the new rectangle created from the square's width
    cout << "Area of r2: " << r2.getArea() << endl;

    return 0;
}