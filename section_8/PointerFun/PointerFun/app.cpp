#include <iostream>


int main() {

    int myLovelyInt = 100;
    int* somePtr = &myLovelyInt;

    std::cout << "myLovelyInt is originally " << myLovelyInt << std::endl;
    std::cout << "pointer holds value " << somePtr << std::endl;
    std::cout << "pointer dereferenced " << *somePtr << std::endl;

    *somePtr = 1000;

    std::cout << "myLovelyInt is now " << myLovelyInt << std::endl;
    std::cout << "\n";

    double myDouble = 3.14159;
    double* doublePtr = &myDouble;

    std::cout << "myDouble is originally " << myDouble << std::endl;
    std::cout << "doublePtr holds value " << doublePtr << std::endl;
    std::cout << "doublePtr deferenced " << *doublePtr << std::endl;

    *doublePtr = 2.71828;

    std::cout << "myDouble is now " << myDouble << std::endl;

    return 0;
}