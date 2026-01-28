#include <iostream>
#include "Exhibit.h"

int main() {
    const int arraySize = 3;

    // Array of pointers to Exhibit
    std::array<Exhibit*, arraySize> exhibits;

    // Dynamically allocate each Exhibit
    exhibits[0] = new Exhibit("Starry Night", 1, 46.5);
    exhibits[1] = new Exhibit("Guernica", 2, 335.0);
    exhibits[2] = new Exhibit("Mona Lisa", 3, 36.8);

    // Use the objects
    for (const Exhibit* e : exhibits) {
        std::cout << e->getName()
                  << " | Room " << e->getRoomNumber()
                  << " | Size " << e->getDisplaySize()
                  << std::endl;
    }

    // Clean up: delete each dynamically allocated Exhibit
    for (Exhibit* e : exhibits) {
        delete e;
        e = nullptr;
    }
    return 0;
}


// #include <iostream>
// #include <array>
// #include "Exhibit.h"

// int main() {
//     std::array<Exhibit, 3> exhibits = {
//         Exhibit("Mona Lisa", 1, 12.5),
//         Exhibit("Starry Night", 2, 15.0),
//         Exhibit("The Scream", 3, 10.2)
//     };

//     for (const auto& e : exhibits) {
//         std::cout << e.getName()
//                   << " | Room " << e.getRoomNumber()
//                   << " | Size " << e.getDisplaySize()
//                   << std::endl;
//     }

//     return 0;
// }
