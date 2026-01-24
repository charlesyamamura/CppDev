#ifndef ANGRY_CAT_EXCEPTION_H
#define ANGRY_CAT_EXCEPTION_H

#include <stdexcept>
#include <string>

class AngryCatException : public std::runtime_error {
public:
    AngryCatException()
        : std::runtime_error("Made kitty angry.") {}

    AngryCatException(const std::string& err)
        : std::runtime_error(err) {}
};

class CrazyCatException : public std::runtime_error {
public:
    CrazyCatException()
        : std::runtime_error("Kitty is puzzled. How many treats?") {}
};

#endif
