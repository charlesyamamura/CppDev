#include <iostream>
#include <array>
using namespace std;

int product(array<int, 6> myArray);

int main() {

    array<int, 6> numbers{9, 8, 7, 6, 5, 4};
    cout << "The product of the array elements is "<< product(numbers) << endl;

    return 0;
}

int product(array<int, 6> myArray) {
    int result = 1;
    // for (int i = 0; i < 6; i++) {
    //     result *= myArray[i];
    // }
    for (int num : myArray) {
        result *= num;
    }
    return result;
}