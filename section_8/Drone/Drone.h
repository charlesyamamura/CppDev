#ifndef DRONE_H
#define DRONE_H

#include <string>

class Drone {
public:
    Drone();
    Drone(std::string modelName, double batteryLife);

    std::string getModelName() const;
    double getBatteryLife() const;

private:
    std::string modelName;
    double batteryLife;
};

#endif
