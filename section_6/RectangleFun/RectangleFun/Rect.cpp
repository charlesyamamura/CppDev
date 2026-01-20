#include "Rect.h"

Rect::Rect() : length(3.0), width(2.0) {}

Rect::Rect(double length, double width)
    : length(length), width(width) {}

double Rect::getLength() const {
    return length;
}

double Rect::getWidth() const {
    return width;
}

void Rect::setLength(double length) {
    this->length = length;
}

void Rect::setWidth(double width) {
    this->width = width;
}

double Rect::area() const {
    return length * width;
}

double Rect::perimeter() const {
    return 2 * (length + width);
}
