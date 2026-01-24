#include "Person.h"
#include <stdexcept>
#include <string>

Person::Person(std::string name) {
    setName(name);    
}

std::string Person::getName() const noexcept {
    return name;
}

void Person::setName(std::string name) {
    if (name != "John") {
        this->name = name;
    }
    else {
        throw std::runtime_error("John? That guy doesn't meet the admission criteria.");
    }
}




