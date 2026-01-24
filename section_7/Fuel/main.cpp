#include <iostream>
#include "Fuel.h"
#include <string>

void checkFuel(int fuel);

int main() {

    std::cout << "Fuel monitoring..." << std::endl;

    try {
        for (int i = 100; i >= 0; i -= 10) {
            checkFuel(i);
        }   
    }
    catch(const LowFuel& err) {
        std::cerr << err.what() << std::endl;
    }

    return 0;
}

void checkFuel(int fuel) {
    if (fuel < 10) {
        throw LowFuel();
    }
    std::cout << "You're good to go. " << fuel << " % tank." << std::endl;
}
