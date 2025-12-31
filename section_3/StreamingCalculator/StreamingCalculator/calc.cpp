#include <iostream>
using namespace std;

int main() {

    char plan;
    int devices;
    int amount = 0; // initialize to avoid garbage value

    cout << "Please choose your monthly plan (A, B, or C): ";
    cin >> plan;

    cout << "How many devices did you use? ";
    cin >> devices;

    if (plan == 'A' || plan == 'a') {
        amount = (devices - 1) * 6 + 9;
    }
    else if (plan == 'B' || plan == 'b') {
        amount = (devices - 3) * 4 + 14;
    }
    else if (plan == 'C' || plan == 'c') {
        amount = (devices - 5) * 2 + 20;
    }
    else {
        cout << "Wrong input. Please try again." << endl;
        return 1; // exit to avoid printing uninitialized amount
    }

    cout << "Your total amount is: " << amount << endl;

    return 0;
}
