#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void printFormatted(ofstream& outfile, int high);

int main() {

    int high = 0;
    cout << "Enter the high value for the range: ";
    cin >> high;

    cout << "Writing to file." << endl;

    ofstream outfile("output.txt");

    if (!outfile) {
        cerr << "Could not open file for writing." << endl;
        return 1;
    }

    cout << fixed << showpoint;
    outfile << fixed << showpoint;

    printFormatted(outfile, high);

    outfile.close();
    cout << "Done." << endl;

    return 0;
}

void printFormatted(ofstream& outfile, int high) {
    for (int i = 1; i <= high; i++) {
        double value1 = i * 2.71828;
        double value2 = i * 3.14159265;

        cout << setw(12) << setprecision(5) << value1
             << setw(12) << setprecision(6) << value2 << endl;

        outfile << setw(12) << setprecision(5) << value1
                << setw(12) << setprecision(6) << value2 << endl;
    }
}
