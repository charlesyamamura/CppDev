#include "Car.h"

Car::Car(std::string color, int numDoors) : color(color), numDoors(numDoors) {};

std::string Car::getColor() const {
    return color;
}

int Car::getNumDoors() const {
    return numDoors;
}
