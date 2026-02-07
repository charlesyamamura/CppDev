#include <iostream>
#include <memory>

int main() {
    const int ARR_SIZE = 5;
    // std::unique_ptr<double> myDubPtr(new double);
    std::unique_ptr<double> myDubPtr = std::make_unique<double>();
    // auto myArray = std::make_unique<int[]>(ARR_SIZE);

    *myDubPtr = 3.14159;
    std::cout << "Pointer key: " << myDubPtr << std::endl;
    std::cout << "Pointer value: " << *myDubPtr << std::endl;
    std::cout << "\n";

    std::unique_ptr<double> otherPtr = std::move(myDubPtr);
    std::cout << "otherPtr key: " << otherPtr << std::endl;
    std::cout << "otherPtr value: " << *otherPtr << std::endl;

    // for (int i = 0; i < ARR_SIZE; i++) {
    //     myArray[i] = i * *myDubPtr;
    // }

    // for (int i = 0; i < ARR_SIZE; i++) {
    //     std::cout << myArray[i] << std::endl;
    // }


    return 0;
}
