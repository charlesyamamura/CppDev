#include <iostream>
#include <stdexcept>

void processPositive(int num);
void doSomething(int num);

int main() {
    int input;

    try {
        std::cout << "Enter a number to process: ";

        if (!(std::cin >> input)) {
            throw std::invalid_argument("Input was not an integer.");
        }
        else if (input > 100) {
            throw std::out_of_range("Input must be <= 100.");
        }

        doSomething(input);

        std::cout << "main successfully processed the number." << std::endl;
    }
    catch (const std::logic_error& err) {
        std::cout << "main caught an error: " << err.what() << std::endl;
    }

    return 0;
}

void processPositive(int num) {
    std::cout << "processPositive() called." << std::endl;

    if (num > 0) {
        std::cout << "Valid positive number: " << num << std::endl;
    }
    else {
        throw std::invalid_argument("Number must be positive.");
    }
}

void doSomething(int num) {
    try {
        processPositive(num);
        std::cout << "doSomething successfully processed the number." << std::endl;
    }
    catch (const std::invalid_argument&) {
        std::cout << "doSomething detected an error — rethrowing." << std::endl;
        throw;   // preserves original exception
    }
}

