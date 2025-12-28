/* Relational operators */

#include <iostream>
using namespace std;

int main() {

    cout << boolalpha;

    int a = 15;
    int b = 20;

    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    bool areEqual = (a == b);
    cout << "a and b are equal: " << areEqual << endl;

    bool notEqual = (a != b);
    cout << "a and b are NOT equal: " << notEqual << endl;

    int age = 31;
    int lauren = 20;
    bool adult = (age >= 21);
    cout << "Am I an adult? " << adult << endl;

    return 0;
}