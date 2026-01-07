#include <iostream>
using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);
int square(int b);

int main() {

    int num1 = 120;
    int num2 = 580;

    printHello();
    printNumber(100);

    int someData = giveMe10();
    cout << someData << endl;

    int totalValue = addThese(num1, num2);
    cout << totalValue << endl; 

    printNumber(addThese(num1, 50));

    int b = 27;
    cout << square(b) << endl;

    return 0;
}

void printHello() {
    cout << "Hello there!" << endl;
}

void printNumber(int a) {
    cout << "The number: " << a << endl;
}

int giveMe10() {
    return 10;
}

int addThese (int num1, int num2) {
    return (num1 + num2);
}

int square(int b) {
    int sq = (b * b);
    cout << "The square value of " << b << " is " << sq << endl;
    return sq;
}