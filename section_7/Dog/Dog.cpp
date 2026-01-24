#include "Dog.h"
#include <stdexcept>

Dog::Dog(std::string breed) {
    if (breed == "Poodle" || breed == "poodle") {
        throw std::runtime_error("Poodles are not accepted.");
    }

    this->breed = breed;   // store it
}

std::string Dog::getBreed() const noexcept {
    return breed;
}
