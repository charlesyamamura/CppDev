#include <iostream>
#include <array>
#include <iomanip>  // for rounding
using namespace std;

int main() {

    const int days = 7;
    array<double, days> temp{};

    for (int day = 0; day < days; day++ ) {
        // cout << "Enter temperature in F for day: " << day + 1 << endl;
        cout << "Enter the temperature today (C): " << day + 1 << endl;
        cin >> temp[day];
    }

    cout << fixed << setprecision(1); // round all future doubles to 1 decimal

    cout << "Here are the temperatures and their conversions: " << endl;

    for (int day = 0; day < days; day++){
        // double F = temp[day];
        // double C = (F - 32) * 5.0 / 9.0;
        double C = temp[day];
        double F = (C * 9.0 / 5.0) + 32;

        cout << "Day " << day + 1 << ": ";
        // cout << "Temp in F: " << F << ". ";
        // cout << "Temp in C: " << C;
        cout << "Temp in C: " << C << ". ";
        cout << "Temp in F: " << F;
        cout << "\n";
    }

    return 0;
}
