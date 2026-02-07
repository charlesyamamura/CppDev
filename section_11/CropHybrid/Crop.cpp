#include "Crop.h"
#include <cstdlib>

Crop::Crop(int height, int cropYield, int droughtResistance)
    : height(height), cropYield(cropYield), droughtResistance(droughtResistance) {}

int Crop::getHeight() const {
    return height;
}

int Crop::getYield() const {
    return cropYield;
}

int Crop::getDroughtResistance() const {
    return droughtResistance;
}

int Crop::getScore() const {
    return (height * 2) + (cropYield * 3) + (droughtResistance * 4);
}

bool Crop::operator==(const Crop& other) const {
    return getScore() == other.getScore();
}

bool Crop::operator!=(const Crop& other) const {
    return !(*this == other);
}

bool Crop::operator<(const Crop& other) const {
    return getScore() < other.getScore();
}

bool Crop::operator>(const Crop& other) const {
    return getScore() > other.getScore();
}

bool Crop::operator<=(const Crop& other) const {
    return getScore() <= other.getScore();
}

bool Crop::operator>=(const Crop& other) const {
    return getScore() >= other.getScore();
}

Crop Crop::operator+(const Crop& other) const {
    auto randomize = [](int value) {
        int variation = (rand() % 3) - 1;   // -1, 0, +1
        return value + variation;
    };

    int newHeight = randomize((height + other.height) / 2);
    int newYield = randomize((cropYield + other.cropYield) / 2);
    int newDrought = randomize((droughtResistance + other.droughtResistance) / 2);

    return Crop(newHeight, newYield, newDrought);
}

Crop& Crop::operator=(const Crop& other) {
    if (this != &other) {
        height = other.height;
        cropYield = other.cropYield;
        droughtResistance = other.droughtResistance;
    }
    return *this;
}
