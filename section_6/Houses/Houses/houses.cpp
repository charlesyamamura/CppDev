#include <iostream>
#include <string>
#include "House2.h"
using namespace std;

// House class
// class House2 {
//     public:
//         void setNumStories(int numStories) {
//             this->numStories = numStories;
//         }

//         void setNumWindows(int numWindows) {
//             this->numWindows = numWindows;
//         }

//         void setColor(string color) {
//             this-> color = color;
//         } 

//         int getNumStories() const {
//             return numStories;
//         }

//         int getNumWindows() const {
//             return numWindows;
//         }

//         string getColor() const {
//             return color;
//         }

//     private:
//         int numStories;
//         int numWindows;
//         string color;
// };

// void printHouseData(const House2& house);

// main function
int main() {
    // House2 myHouse;
    House2 theirHouse(5, 20, "acqua blue");

    theirHouse.print();

    // cout << "Before calling any setters..." << endl;
    // myHouse.print();

    // //no call settings
    // myHouse.setNumStories(2);
    // myHouse.setNumWindows(6);
    // myHouse.setColor("orange");

    // cout << "\nAfter call setters..." << endl;
    // myHouse.print();

    // House2 yourHouse;
    // House2 myHouse;

    // myHouse.setNumStories(2);
    // myHouse.setNumWindows(6);
    // myHouse.setColor("blue");

    // yourHouse.setNumStories(3);
    // yourHouse.setNumWindows(10);
    // yourHouse.setColor("yellow");

    // cout << "My house is " << myHouse.getColor()
    //     << " and has " << myHouse.getNumStories()
    //     << " stories and " << myHouse.getNumWindows()
    //     << " windows." << endl;

    // cout << "Your house is " << yourHouse.getColor()
    //     << " and has " << yourHouse.getNumStories()
    //     << " stories and " << yourHouse.getNumWindows()
    //     << " windows." << endl;

    // printHouseData(myHouse);
    // printHouseData(yourHouse);

    // myHouse.print();
    // yourHouse.print();

    return 0;
}

// void printHouseData(const House2& house) {
//     cout << "The house is " << house.getColor()
//     << " and has " << house.getNumStories()
//     << " stories and " << house.getNumWindows()
//     << " windows." << endl;
// }
