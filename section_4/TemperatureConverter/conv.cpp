#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main() {

    const int days = 7;
    int day;
    array<double, days> temp{};

    for (int day = 0; day < days; day++ ) {
        cout << "Enter the temperature (C) for day " << day + 1 << ": ";
        cin >> temp[day];
    }

    cout << fixed << setprecision(1);
    cout << "\nHere are the temperatures and their conversions:\n";

    // for (int day = 0; day < days; day++) {
    //     double C = temp[day];

    int i = 0;
    for (double C: temp) {
        double F = (C * 9.0 / 5.0) + 32;
        // cout << "Day " << day + 1 << ": ";
        cout << "Day " << (i + 1) << ": ";
        cout << "Temp in C: " << C << ". ";
        cout << "Temp in F: " << F << "\n";
        i++;
    }

    return 0;
}
