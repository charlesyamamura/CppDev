#include <iostream>
#include "Cat.h"
#include <string>

Cat::Cat(std::string name, double weight): Animal(name, weight) {
}

std::string Cat::makeNoise() const {
    return "meow";
}

std::string Cat::eat() const {
    return "I love fish.";
}

void Cat::chaseMouse() const {
    std::cout << "Where are you, Mickey?" << std::endl;
}

