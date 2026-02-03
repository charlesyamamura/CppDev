#include "Player.h"

Player::Player(const std::string& name, Race race, int hitPoints, int magicPoints)
    : name(name), race(race), hitPoints(hitPoints), magicPoints(magicPoints) {}

std::string Player::getName() const {
    return name;
}

Race Player::getRace() const {
    return race;
}

std::string Player::whatRace() const {
    switch (race) {
        case Race::HUMAN: return "Human";
        case Race::ELF: return "Elf";
        case Race::DWARF: return "Dwarf";
        case Race::ORC: return "Orc";
        case Race::TROLL: return "Troll";
        default: return "Unknown";
    }
}

int Player::getHitPoints() const {
    return hitPoints;
}

int Player::getMagicPoints() const {
    return magicPoints;
}

void Player::setName(const std::string& name) {
    this->name = name;
}

void Player::setRace(Race race) {
    this->race = race;
}

void Player::setHitPoints(int hitPoints) {
    this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints) {
    this->magicPoints = magicPoints;
}
