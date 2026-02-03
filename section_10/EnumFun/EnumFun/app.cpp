#include <iostream>
using namespace std;

int main() {

    enum Direction { BOW, STERN, PORT, STARBOARD, STANDING };

    Direction myDirection = STERN;
    cout << myDirection << endl;   // prints 0 because UP = 0 by default

    if (myDirection == BOW) {
        cout << "Bow!" << endl;
    }
    else if (myDirection == STERN) {
        cout << "Stern!" << endl;
    }
    else if (myDirection == PORT) {
        cout << "Port!" << endl;
    }
    else if (myDirection == STARBOARD) {
        cout << "Starboard!" << endl;
    }

    else if (myDirection == STANDING) {
        cout << "Standing!" << endl;
    }

    return 0;
}
