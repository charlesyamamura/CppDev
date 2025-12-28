#include <iostream>
using namespace std;

int main() {
    // + addition
    // - subtraction
    // * multiplication
    // / division
    // % modulus (remainder)

    int a = 10;
    int b = 3;

    int sum = a + b;
    int diff = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    int result = 10;
    result += 15;
    cout << "Result: " << result << endl;

    cout << "Sum: "<< sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << mul << endl;
    cout << "Quotient: " << div << endl;
    cout << "Remainder: " << mod << endl;

    int myInt = 5;
    myInt++; // increment operator, same as myInt += 1;
    cout << "Incremented: " << myInt << endl;

    myInt--; // decrement operator, same as myInt -= 1;
    cout << "Decremented: " << myInt << endl;

    return 0;
}