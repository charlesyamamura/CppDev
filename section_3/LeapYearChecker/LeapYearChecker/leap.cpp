#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Please enter a starting year: ";
    cin >> start;

    cout << "Please enter an ending year: ";
    cin >> end;

    cout << "\nLeap years:\n";

    for (int year = start; year <= end; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " is a leap year.\n";
        }
        else {
            cout << year << " in not a leap year.\n";
        }
    }

    return 0;
}
