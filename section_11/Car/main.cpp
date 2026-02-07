//Option 1
// #include <iostream>
// #include "Car.h"
// #include <string>

// int main() {

//     auto myCar = std::make_unique<std::string[]>(2);

//     myCar[0] = "green";
//     myCar[1] = "3";

//     std::cout << "My car is " << myCar[0] << " and has " << myCar[1] << " doors." << std::endl;

//     return 0;
// }

//Option 2
#include <iostream>
#include <memory>
#include "Car.h"

int main() {
    auto myCar = std::make_unique<Car>("silver", 3);

    std::cout << "My car is " << myCar->getColor()
              << " and has " << myCar->getNumDoors()
              << " doors.\n";
}
