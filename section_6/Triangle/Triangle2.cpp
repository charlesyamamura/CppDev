#include "Triangle.h"
#include <cmath>
#include <stdexcept>

Triangle::Triangle() : sideA(1), sideB(1), sideC(1) {}

Triangle::Triangle(double a, double b, double c)
    : sideA(a), sideB(b), sideC(c) {}

double Triangle::getSideA() const { return sideA; }
double Triangle::getSideB() const { return sideB; }
double Triangle::getSideC() const { return sideC; }

void Triangle::setSideA(double a) { sideA = a; }
void Triangle::setSideB(double b) { sideB = b; }
void Triangle::setSideC(double c) { sideC = c; }

bool Triangle::isValid() const {
    return sideA > 0 && sideB > 0 && sideC > 0 &&
           sideA + sideB > sideC &&
           sideA + sideC > sideB &&
           sideB + sideC > sideA;
}

double Triangle::perimeter() const {
    return sideA + sideB + sideC;
}

double Triangle::area() const {
    // if (!isValid()) {
    //     throw std::logic_error("Invalid triangle");
    // }
    double s = perimeter() / 2.0;
    return std::sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}
