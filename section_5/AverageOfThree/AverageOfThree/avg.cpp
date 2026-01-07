#include <iostream>
#include <cmath>
using namespace std;

double average(double a, double b, double c);


int main() {

    double a, b, c;

    cout << "Type the first number: " << endl;
    cin >> a;
    cout << "Type the second number: " << endl;
    cin >> b;
    cout << "Type the last number: " << endl;
    cin >> c;

    cout << "(a + b + c) / 3 = " << average(a, b, c) << endl;

    return 0;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}
