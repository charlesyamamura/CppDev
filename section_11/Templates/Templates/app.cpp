#include <iostream>
#include <string>
using namespace std;

// double getBigger(double a, double b);
// int getBigger(int a, int b);
// string getBigger(string a, string b);

// templace <typename T>

template <class T>
T getBigger(T a, T b) {
    return (a > b) ? a : b;
}

template <class T>
T getSmaller(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    double d1 = 3.14159;
    double d2 = 2.71828;
    int i1 = 27;
    int i2 = 93;
    string s1 = "Lauren";
    string s2 = "Sophia";

    double bigDub = getBigger(d1, d2);
    int bigInt = getBigger(i1, i2);
    string bigStr = getBigger(s1, s2);
    double smallDub = getSmaller(d1, d2);
    int smallInt = getSmaller(i1, i2);
    string smallStr = getSmaller(s1, s2);


    cout << "Bigger: " << endl;
    cout << "\t" << bigDub << "\n\t" << bigInt << "\n\t" << bigStr << endl;

    cout << "\nSmaller: " << endl;
    cout << "\t" << smallDub << "\n\t" << smallInt << "\n\t" << smallStr << endl;

    return 0;
}

// double getBigger(double a, double b) {
//     return (a > b) ? a : b;
// }

// int getBigger(int a, int b) {
//     return (a > b) ? a : b;
// }

// string getBigger(string a, string b) {
//     return (a > b) ? a : b;
// }
