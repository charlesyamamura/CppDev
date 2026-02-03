#ifndef PRIEST_H
#define PRIEST_H

#include "Player.h"

class Priest : public Player {
public:
    Priest(const std::string& name, Race race)
        : Player(name, race, 100, 200) {}

    std::string attack() const override {
        return "I will assault you with Holy Wrath!";
    }
};

#endif