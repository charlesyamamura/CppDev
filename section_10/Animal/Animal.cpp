#include "Animal.h"
#include <iostream>
#include <string>

Animal::Animal(std::string name, double weight) {
    this-> name = name;
    this-> weight = weight;
}

std::string Animal::getName() const {
    return name;
}

void Animal::setName(std::string name) {
    this -> name = name;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(double weight) {
    this -> weight = weight;
}

// std::string Animal::makeNoise() const {
//     return "screech";
// }