#include <iostream>
#include<cstdlib>
#include <algorithm>
#include <ctime>
#include <vector>

void fillVector(std::vector<int>& myVector);
void printVector(const std::vector<int>& myVector);
void countFives(const std::vector<int>& myVector);

int main() {

    std::vector<int> myVector;

    fillVector(myVector);
    printVector(myVector);

    countFives(myVector);
    sort(myVector.begin(), myVector.end());
    std::cout << "\nSorted vector: " << std::endl;
    printVector(myVector);
    std::cout << "\n";

    std::cout << "\nReplacing 5s with 99s" << std::endl;

    replace(myVector.begin(), myVector.end(), 5, 99);
    sort(myVector.begin(), myVector.end());

    countFives(myVector);
    printVector(myVector);

    return 0;
}

void fillVector(std::vector<int>& myVector) {
    srand(time(nullptr));
    for (int i = 0; i < 20; ++i) {
        myVector.push_back(rand() % 5 + 1);
    }
}

void printVector(const std::vector<int>& myVector) {
    for (int value : myVector) {
        std::cout << value << " ";
    }
}

void countFives(const std::vector<int>& myVector) {
    int countOfFives = count(myVector.begin(), myVector.end(), 5);
    std::cout << "\nNumber of 5s: " << countOfFives << std::endl;
}