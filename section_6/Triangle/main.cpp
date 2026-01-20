#include "Triangle.h"
#include <iostream>
using namespace std;

void printTriangleData(const Triangle& t);

int main() {

    Triangle t1;
    Triangle t2(1, 2, 3);

    Triangle t3;
    t3.setSideA(3);
    t3.setSideB(4);
    t3.setSideC(5);

    Triangle t4(5, 6, 7);
    Triangle t5(10, 11, 12);

    printTriangleData(t1);
    printTriangleData(t2);
    printTriangleData(t3);
    printTriangleData(t4);
    printTriangleData(t5);

    return 0;
}

void printTriangleData(const Triangle& t) {
    cout << "Sides: "
        << t.getSideA() << ", "
        << t.getSideB() << ", "
        << t.getSideC() << endl;

    if (t.isValid()) {
        cout << "\tPerimeter: " << t.perimeter() << endl;
        cout << "\tArea: " << t.area() << endl;
    }
    else {
        cout << "\tThis is not a valid triangle." << endl;
    }
    cout << endl;
    
}