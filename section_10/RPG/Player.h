#ifndef PLAYER_H
#define PLAYER_H

#include <string>

enum class Race { HUMAN, ELF, DWARF, ORC, TROLL };

class Player {
public:
    Player(const std::string& name, Race race, int hitPoints, int magicPoints);
    virtual ~Player() = default;

    std::string getName() const;
    Race getRace() const;
    std::string whatRace() const;
    int getHitPoints() const;
    int getMagicPoints() const;

    void setName(const std::string& name);
    void setRace(Race race);
    void setHitPoints(int hitPoints);
    void setMagicPoints(int magicPoints);

    virtual std::string attack() const = 0;

private:
    std::string name;
    Race race;
    int hitPoints;
    int magicPoints;
};

#endif