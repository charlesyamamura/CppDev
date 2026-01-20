#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle(): sideA(0), sideB(0), sideC(0) {}

Triangle::Triangle(double sideA, double sideB, double sideC):
    sideA(sideA), sideB(sideB), sideC(sideC) {}

double Triangle::getSideA() const {
    return sideA;
}

double Triangle::getSideB() const {
    return sideB;
}

double Triangle::getSideC() const {
    return sideC;
}

void Triangle::setSideA(double sideA) {
    this->sideA = sideA;    
}

void Triangle::setSideB(double sideB) {
    this->sideB = sideB;
}

void Triangle::setSideC(double sideC) {
    this->sideC = sideC;
}

bool Triangle::isValid() const {
    return sideA > 0 && sideB > 0 && sideC > 0 &&
            sideA + sideB > sideC &&
            sideB + sideC > sideA &&
            sideA + sideC > sideB;
}

double Triangle::perimeter() const {
    return (sideA + sideB + sideC);
}

double Triangle::area() const {
    if (!isValid()) {
        cout << "Cannot compute area. Triangle is invalid." << endl;
        return 0;
    }
    double s = perimeter() / 2.0;
    return std::sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

// double Triangle::area() const {
//     if (!isValid()) {
//         throw std::logic_error("Invalid triangle");
//     }
//     double s = perimeter() / 2.0;
//     return std::sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
// }
