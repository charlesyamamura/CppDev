#include <iostream>
#include "AngryCatException.h"

void feedKitty(int numTreats);

int main() {
    int numTreats;

    std::cout << "How many treats do you want to feed kitty? ";
    std::cin >> numTreats;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Please enter a valid number.\n";
        return 1;
    }

    try {
        feedKitty(numTreats);
    }
    catch (const CrazyCatException& err) {
        std::cout << err.what() << std::endl;
    }
    catch (const AngryCatException& err) {
        std::cout << err.what() << std::endl;
    }

    return 0;
}

void feedKitty(int numTreats) {
    if (numTreats == 0) {
        throw CrazyCatException();
    }
    else if (numTreats < 3) {
        throw AngryCatException();
    }
    else if (numTreats < 6) {
        throw AngryCatException("I'm a little bit disappointed.");
    }

    std::cout << "Kitty is happy with " << numTreats << " treats." << std::endl;
}
