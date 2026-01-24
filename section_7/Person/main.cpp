#include "Person.h"
#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    try {
        Person person1("Bob");
        Person person2("Sally");
        // Person person3("John");
        Person person4("William");

        std::cout << person1.getName() << std::endl;
        std::cout << person2.getName() << std::endl;
        // std::cout << person3.getName() << std::endl;
        std::cout << person4.getName() << std::endl;
    }
    catch(const std::runtime_error& err) {
        std::cout << err.what() << std::endl;
    }

    return 0;
}