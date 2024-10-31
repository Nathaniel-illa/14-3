#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;   // Width of the rectangle
    double height;  // Height of the rectangle

public:
    // Default constructor
    Rectangle() : width(0), height(0) {}

    // Setter for width
    void setWidth(double w) {
        width = w;
    }

    // Setter for height
    void setHeight(double h) {
        height = h;
    }

    // Getter for width
    double getWidth() const {
        return width;
    }

    // Getter for height
    double getHeight() const {
        return height;
    }

    // Method to calculate and return the area of the rectangle
    double getArea() const {
        return width * height;
    }

    // Function to create a rectangle with the square's width
    Rectangle makeRectangleWithSquare(Square s) {
        Rectangle rect;
        rect.width = s.width;
        rect.height = s.width;  // Rectangle becomes a square with square's width
        return rect;
    }
};

class Rectangle;  // Forward declaration of Rectangle class

class Square {
private:
    double width;  // Side length of the square

public:
    // Default constructor
    Square() : width(0) {}

    // Setter for width
    void setWidth(double w) {
        width = w;
    }

    // Friend class declaration, allowing Rectangle to access Square's private data
    friend class Rectangle;
};

#endif