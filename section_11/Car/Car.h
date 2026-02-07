#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
public:
    Car(std::string color, int numDoors);
    std::string getColor() const;
    int getNumDoors() const;
private:
    std::string color;
    int numDoors;
};

#endif