#include <iostream>
#include "Rectangle.h"
#include "Helper.h"
using namespace std;

void changeData(Rectangle& rect);
void printData(Rectangle& rect);

int main() {
    Rectangle r1(2, 3);
    Helper helper;
    printData(r1);
    cout << "r1 area: " << r1.area() << endl;
    cout << "\n";

    changeData(r1);
    printData(r1);

    cout << "Now, r1 area:" << r1.area() << endl;
    cout << "\n";

    helper.modifyRectangle(r1);
    printData(r1);
    cout << "After helper, area: " << r1.area() << endl;

    return 0;
}

void changeData(Rectangle& rect) {
    rect.length = 3;
    rect.width = 4;
}

void printData(Rectangle& rec) {
    cout << "Length: " << rec.length << endl;
    cout << "Width: " << rec.width << endl;
}