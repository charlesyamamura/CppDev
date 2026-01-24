#include <iostream>
#include <string>
#include <stdexcept>
#include "Dog.h"

int main() {
    try {
        Dog dog1("Golden Retriever");
        Dog dog2("German Shepherd");
        Dog dog3("French Bulldog");
        Dog dog4("Siberian Husky");
        Dog dog5("Labrador");

        std::cout << dog1.getBreed() << std::endl;
        std::cout << dog2.getBreed() << std::endl;
        std::cout << dog3.getBreed() << std::endl;
        std::cout << dog4.getBreed() << std::endl;
        std::cout << dog5.getBreed() << std::endl;

        Dog dog6("Poodle");
        std::cout << dog6.getBreed() << std::endl;

    }
    catch(const std::runtime_error& err) {
        std::cout << err.what() << std::endl;
    }
    return 0;
}