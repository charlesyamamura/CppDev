#include <iostream>
#include <string>

int main() {

    int arrSize = 0;

    std::cout << "Please enter the array size: ";
    std::cin >> arrSize;

    int* myArray = new int[arrSize];

    for (int i = 0; i < arrSize; i++) {
        myArray[i] = i * 13;
    }

    for(int i = 0; i < arrSize; i++) {
        std::cout << myArray[i] << std::endl;
    }

    delete[] myArray;
    myArray = nullptr;

    return 0;
}


// Vector version
// #include <iostream>
// #include <vector>

// int main() {
//     int arrSize;

//     std::cout << "Please enter the array size: ";
//     std::cin >> arrSize;

//     if (arrSize <= 0) {
//         std::cout << "Invalid size." << std::endl;
//         return 1;
//     }

//     std::vector<int> myArray(arrSize);

//     for (int i = 0; i < arrSize; i++) {
//         myArray[i] = i * 2;
//     }

//     for (int value : myArray) {
//         std::cout << value << std::endl;
//     }

//     return 0;
// }

