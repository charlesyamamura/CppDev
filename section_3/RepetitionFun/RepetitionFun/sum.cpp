#include <iostream>
using namespace std;

int main() {
    int input;
    int sum = 0;

    cout << "Please enter a non-negative integer (or a negative to quit): ";
    cin >> input;

    /* do {
        if (input < 0) break;  // quit before adding negative
        sum += input;
        cout << "Your cumulative sum is: " << sum << endl;

        cout << "Please enter another (or negative to quit): ";
        cin >> input;

    } while (input >= 0);  // allows 0, exits on negative */

    while (input >=0) {
        sum += input;
        cout << "Enter another (or negative to quit): ";
        cin >> input;
    }

    cout << "The sum of all values is: " << sum << endl;

    return 0;
}