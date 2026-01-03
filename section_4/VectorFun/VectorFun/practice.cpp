#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<string> cars{"Mazda", "Subaru", "Kia", "Renault", "VW"};

    cars.insert(cars.begin(), "Ford");

    cars.pop_back();

    // for (string car : cars) {
    //     cout << car << endl;
    // }

    cout << endl;

    cars.insert(cars.end(), "Aston Martin");
    cars.insert(cars.begin() + 6, "Rolls-Royce");

    cars.push_back("Saab");
    cars.push_back("Suzuki");

    cars.erase(cars.begin() + 6);
    cars.insert(cars.begin() + 5, "Skoda");

    cars.erase(remove(cars.begin(), cars.end(), "Aston Martin"), cars.end());

    // for (const string car : cars) {
    for (auto car : cars) {
        cout << car << endl;
    }

    cout << "\n";

    return 0;
}