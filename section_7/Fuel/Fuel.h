#ifndef FUEL_H
#define FUEL_H
#include <stdexcept>

class LowFuel : public std::runtime_error {
    public:
        LowFuel():
        std::runtime_error("You're low on fuel. Please refuel.") {}
        LowFuel(const std::runtime_error& err):
        std::runtime_error(err) {}
};

#endif
