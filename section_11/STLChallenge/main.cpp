#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>

void printCars(const std::vector<std::string>& vec);

int main() {
    std::vector<std::string> cars;
    cars.push_back("VW Corrado");
    cars.push_back("Porsche 944");
    cars.push_back("Lancia Integrale");
    cars.push_back("BMW 228i F22");
    cars.push_back("Matra Murena");

    cars.emplace_back("Toyota GR86");
    cars.emplace_back("Saab 900 Turbo");
    cars.emplace_back("Lister");
    cars.emplace_back("Alpine A110");

    printCars(cars);
    std::cout << "\n";

    // Remove cars with short names (<= 6 characters)
    for (auto it = cars.begin(); it != cars.end();) {
        if (it->length() <= 6) {
            it = cars.erase(it);
        } else {
            ++it;
        }
    }

    printCars(cars);
    std::cout << "\n";

    // Remove a specific car using erase–remove idiom
    cars.erase(
        std::remove(cars.begin(), cars.end(), "Saab 900 Turbo"),
        cars.end()
    );

    printCars(cars);
    std::cout << "\n";

    std::map<std::string, int> carLengthOrdered;
    std::unordered_map<std::string, int> carLengthUnordered;

    for (const auto& car : cars) {
        carLengthOrdered[car] = car.length();
        carLengthUnordered[car] = car.length();
    }

    // Print ordered map
    for (const auto& pair : carLengthOrdered) {
        std::cout << pair.first << " - " << pair.second << std::endl;
    }
    std::cout << "\n";
    for (const auto& pair : carLengthUnordered) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
    std::cout << "\n";

    std::string query1 = "Lancia Integrale";
    std::string query2 = "VW Corrado";

    // Lookup in ordered map
    auto itOrdered = carLengthOrdered.find(query1);
    if (itOrdered != carLengthOrdered.end()) {
        std::cout << "Map, found: " << itOrdered->second << std::endl;
    } else {
        std::cout << "Map, not found." << std::endl;
    }

    // Lookup in unordered map
    auto itUnordered = carLengthUnordered.find(query2);
    if (itUnordered != carLengthUnordered.end()) {
        std::cout << "Unordered map, found: " << itUnordered->second << std::endl;
    } else {
        std::cout << "Unordered map, not found." << std::endl;
    }

    return 0;
}

void printCars(const std::vector<std::string>& vec) {
    for (const std::string& item : vec) {
        std::cout << item << ", ";
    }
    std::cout << std::endl;
}
