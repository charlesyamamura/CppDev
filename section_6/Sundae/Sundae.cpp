#include "Sundae.h"
#include <iostream>

using namespace std;

Sundae::Sundae(const string& flavor)
    : flavor(flavor) {}

void Sundae::addTopping(const string& topping) {
    toppings.push_back(topping);
}

string Sundae::getFlavor() const {
    return flavor;
}

vector<string> Sundae::getToppings() const {
    return toppings;
}

void Sundae::printSundae() const {
    cout << "Your sundae flavor is " << flavor << ". Toppings: ";

    if (toppings.empty()) {
        cout << "none";
    } else {
        for (size_t i = 0; i < toppings.size(); ++i) {
            cout << toppings[i];
            if (i < toppings.size() - 1)
                cout << ", ";
        }
    }

    cout << "." << endl;
}
