#include <iostream>
#include <vector>
#include <algorithm>

void printVector(const std::vector<int> vec);

int main() {
    std::vector<int> numbers = {8, 1, 2, 3, 2, 4, 2, 5, 2, 0, 27, -4, 2, 37, 2};

    std::cout << "Original vector: ";
    printVector(numbers);

    //step 1 : use remove
    auto newEnd = remove(numbers.begin(), numbers.end(), 2);
    std::cout << "\n\t";
    printVector(numbers);
    std::cout << "\n";    

    //step 2 : use erase
    numbers.erase(newEnd, numbers.end());

    std::cout << "Vector after removing all 2s: ";
    printVector(numbers);

    return 0;
}

void printVector(const std::vector<int> vec) {
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}