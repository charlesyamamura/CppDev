#include <iostream>
using namespace std;

void value1(int n);
void value2(int& n); //& means "pass by reference"

int main() {

    int n = 20;

    cout << "Before value1 call, n is " << n << endl;
    value1(n);
    cout << "After value1 call, n is " << n << endl;

    cout << "\n---------------------------------\n" << endl;

    cout << "Before value2 call, n is " << n << endl;
    value2(n);
    cout << "After value2 call, n is " << n << endl;
    
    cout << "\n";
    return 0;
}

void value1(int n) {
    n = 100;
    cout << "Inside value1, n is " << n << endl;
}

void value2(int& n) {
    n = 100;
    cout << "Inside value2, n is " << n << endl;
}