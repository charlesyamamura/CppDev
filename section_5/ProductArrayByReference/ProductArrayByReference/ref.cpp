#include <iostream>
#include <array>
using namespace std;

// void prod(array<int, 6> myArray, int& result);
void prod(const array<int, 6>& myArray, int& result);

int main() {

    array<int, 6> numbers{12, 11, 10, 9, 8, 7};
    int result = 1;
    prod(numbers, result);
    cout << "The product of the array elements is " << result << endl;

    return 0;
}

// void prod(array<int, 6> myArray, int& result) {
void prod(const array<int, 6>& myArray, int& result) {    
    result = 1;
    for (int num : myArray) {
        result *= num;
    }
}

