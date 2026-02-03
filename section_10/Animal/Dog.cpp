#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"

Dog::Dog(std::string name, double weight, std::string breed) : Animal(name,weight) {
    this-> breed = breed;
}

std::string Dog::getBreed() const {
    return breed;
}

void Dog::digHole() const {
    std::cout << "I'm digging a hole. " << std::endl;
}

std::string Dog::makeNoise() const {
    return "woof";
}

void Dog::chaseCat() const {
    std::cout << "Here, kitty kitty." << std::endl;
}

std::string Dog::eat() const {
    return "I like dog food.";
}