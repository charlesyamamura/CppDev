#include <iostream>
#include <array>
using namespace std;

int main() {

    array<int, 10> myArray = {};

    for (int i = 0; i < myArray.size(); i++) {
        myArray[i] = i * 2;
    }
    cout << "The size of the array is: "<< myArray.size() << endl;

    for (int value : myArray) {
        cout << value << " * ";
    }

    return 0;
}
