#include "Dog.h"
#include <string>

Dog::Dog(std::string name, std::string breed) {
    this->name = name;
    this->breed = breed;
}

std::string Dog::getName() const {
    return name;
}

std::string Dog::getBreed() const {
    return breed;
}