#include <iostream>
using namespace std;

int factorial(int n);

int main() {

    int n;
    int result = factorial(n = 9);
    cout << n << "! = " << result << endl;

    return 0;
}

int factorial(int n) {
    if (n <= 1) {        // Stop only when n becomes 1 or 0 
        return 1;      // 1 is the correct value to return for 0! and 1!
    }    
    return n * factorial(n - 1);
}

