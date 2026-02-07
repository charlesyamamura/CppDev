#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(1), width(1) {}

// Parameterized constructor
Rectangle::Rectangle(double length, double width)
    : length(length), width(width) {}

// Getters
double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

// Setters
void Rectangle::setLength(double length) {
    this->length = length;
}

void Rectangle::setWidth(double width) {
    this->width = width;
}

// Area
double Rectangle::area() const {
    return length * width;
}

// Perimeter
double Rectangle::perimeter() const {
    return 2 * (length + width);
}
