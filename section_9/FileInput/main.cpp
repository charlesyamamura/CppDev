#include <iostream>
#include <fstream>
#include <vector>

int main() {

    int inputNum;
    int sum = 0;
    std::vector <int> myVector;

    std::ifstream infile("input.txt");

    if(!infile) {
        std::cerr << "Could not open file. " << std::endl;
        return 1;
    }

    while (infile >> inputNum) {
        myVector.push_back(inputNum);
        sum += inputNum;
    }

    std::cout << "myVector contains: ";
    for (int x : myVector) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Sum of numbers is: " << sum << std::endl;
    
    infile.close();

    return 0;
}
