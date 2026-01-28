#include <iostream>

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();
void noChange(const double* const someValue);

int main() {

    noConst();
    std::cout << "\n";
    cp2ncd();
    std::cout << "\n";
    ncp2cd();
    std::cout << "\n";
    cp2cd();
    std::cout << "\n";

    double* myDouble = new double(500.005);
    noChange(myDouble);
    delete myDouble;
    myDouble = nullptr;
    std::cout << "\n";

    return 0;
}

//1. non-const pointer to non-const data
void noConst() {
    std::cout << "In noconst " << std::endl;

    int* intPtr = new int(100);
    std::cout << "\toriginal value: " << *intPtr << std::endl;

    *intPtr = 150;
    std::cout << "\tchanged data: " << *intPtr << std::endl;

    delete intPtr;

    intPtr = new int(125);
    std::cout << "\tnew int entirely: " << *intPtr << std::endl;

    delete intPtr;
}

//2. const pointer to non-const data
void cp2ncd() {
    std::cout << "In cp2ncd " << std::endl;

    int* const intPtr = new int(200);
    std::cout << "\toriginal value: " << *intPtr << std::endl;

    *intPtr = 250;
    std::cout << "\tmodified value: " << *intPtr << std::endl;

    // intPtr = new int(225);

    delete intPtr;
}

//3. non-const pointer to const data
void ncp2cd() {
    std::cout << "In ncp2cd " << std::endl;

    const int* intPtr = new int(300);
    std::cout << "\toriginal value: " << *intPtr << std::endl;

    // *intPtr = 350;

    delete intPtr;
    
    intPtr = new int(325);
    std::cout << "\tnew value: " << *intPtr << std::endl;

    delete intPtr;
}

//4. const pointer to const data
void cp2cd() {
    std::cout << "In cp2cd " << std::endl;

    const int* const intPtr = new int(400);
    std::cout << "\toriginal value: " << *intPtr << std::endl;

    // *intPtr = 450;

    // intPtr = new int(425);

    delete intPtr;
}

//5. no change
void noChange(const double* const someValue) {
    std::cout << "In no change " << std::endl;
    std::cout << "\toriginal value: " << *someValue << std::endl;
}