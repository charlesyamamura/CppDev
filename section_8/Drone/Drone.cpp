#include "Drone.h"

Drone::Drone() {
    modelName = "";
    batteryLife = 0.0;
}

Drone::Drone(std::string modelName, double batteryLife) {
    this->modelName = modelName;
    this->batteryLife = batteryLife;
}

std::string Drone::getModelName() const {
    return modelName;
}

double Drone::getBatteryLife() const {
    return batteryLife;
}
