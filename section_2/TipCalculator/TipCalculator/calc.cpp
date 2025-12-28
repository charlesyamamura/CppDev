/* Project: Tip Calculator */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double billAmount;
    double tipPercentage;

    cout << fixed << setprecision(2);

    cout << "Bill amount: $";
    cin >> billAmount;

    cout << "Tip percentage (%): ";
    cin >> tipPercentage;

    double tipAmount = billAmount * (tipPercentage / 100.0);
    double totalAmount = billAmount + tipAmount;

    cout << "Tip amount = $" << tipAmount << endl;
    cout << "Total bill, including tip = $" << totalAmount << endl;

    return 0;
}
