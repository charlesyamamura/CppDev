// delete individual drones version

#include "Drone.h"
#include <iostream>
#include <string>

void printDrone(const Drone& d);

int main() {
    int numberOfDrones;
    std::cout << "How many drones are in the fleet? ";
    std::cin >> numberOfDrones;

    // Array of pointers
    Drone** fleet = new Drone*[numberOfDrones];

    for (int i = 0; i < numberOfDrones; i++) {
        std::string name;
        double battery;

        std::cout << "Enter drone name: ";
        std::cin >> name;

        std::cout << "Enter battery life (0–1): ";
        std::cin >> battery;

        fleet[i] = new Drone(name, battery);   // each drone separately allocated
    }

    std::cout << "\n--- Fleet ---\n";
    for (int i = 0; i < numberOfDrones; i++) {
        printDrone(*fleet[i]);
    }

    // 🧹 Delete drones individually
    for (int i = 0; i < numberOfDrones; i++) {
        delete fleet[i];
        fleet[i] = nullptr;
    }

    // 🧹 Delete the array of pointers
    delete[] fleet;
    fleet = nullptr;

    return 0;
}

void printDrone(const Drone& d) {
    std::cout << "Drone name: " << d.getModelName()
              << "\tBattery life: " << d.getBatteryLife()
              << std::endl;
}


// delete whole fleet version
// #include "Drone.h"
// #include <iostream>
// #include <string>

// void printDrone(const Drone& d);

// int main() {
//     int numberOfDrones;
//     std::cout << "How many drones are in the fleet? ";
//     std::cin >> numberOfDrones;

//     Drone* fleet = new Drone[numberOfDrones];

//     for (int i = 0; i < numberOfDrones; i++) {
//         std::string name;
//         double battery;

//         std::cout << "Enter drone name: ";
//         std::cin >> name;

//         std::cout << "Enter battery life (0–1): ";
//         std::cin >> battery;

//         fleet[i] = Drone(name, battery);
//     }

//     std::cout << "\n--- Fleet ---\n";
//     for (int i = 0; i < numberOfDrones; i++) {
//         printDrone(fleet[i]);
//     }

//     delete[] fleet;
//     fleet = nullptr;

//     return 0;
// }

// void printDrone(const Drone& d) {
//     std::cout << "Drone name: " << d.getModelName()
//               << "\tBattery life: " << d.getBatteryLife()
//               << std::endl;
// }

// modern professional version 

// #include "Drone.h"
// #include <iostream>
// #include <memory>
// #include <string>
// #include <vector>

// void printDrone(const Drone& d);

// int main() {
//     int numberOfDrones;
//     std::cout << "How many drones are in the fleet? ";
//     std::cin >> numberOfDrones;

//     std::vector<std::unique_ptr<Drone>> fleet;
//     fleet.reserve(numberOfDrones);

//     for (int i = 0; i < numberOfDrones; i++) {
//         std::string name;
//         double battery;

//         std::cout << "Enter drone name: ";
//         std::cin >> name;

//         std::cout << "Enter battery life (0–1): ";
//         std::cin >> battery;

//         fleet.push_back(std::make_unique<Drone>(name, battery));
//     }

//     std::cout << "\n--- Fleet ---\n";
//     for (const auto& drone : fleet) {
//         printDrone(*drone);
//     }

//     // 🔥 No delete required
//     // When main() ends, vector destroys all unique_ptrs
//     // unique_ptr destroys all Drones automatically

//     return 0;
// }

// void printDrone(const Drone& d) {
//     std::cout << "Drone name: " << d.getModelName()
//               << "\tBattery life: " << d.getBatteryLife()
//               << std::endl;
// }

