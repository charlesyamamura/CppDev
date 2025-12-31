#include <iostream>
using namespace std;

int main() {

    int age;
    char gender;

    cout << "Welcome the retired women's club" << endl;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your gender (m/f): ";
    cin >> gender;

/*  if ((gender == 'f' || gender == 'F') && (age >= 60)) {
        cout << "You are eligible!" << endl;
    }
    else if ((gender == 'm' || gender == 'M') || (age < 60)) {
        cout << "You are not eligible!" << endl;
    }
    else {
        cout << "Wrong character. Please do it again." << endl;
    } */

    if ((gender == 'f' || gender == 'F') && age >= 60) {
        cout << "You are eligible!" << endl;
    }
    else if (age >= 60 && (gender == 'm' || gender == 'M')) {
        cout << "You are not eligible!" << endl;
    }
    else if (age < 60 && (gender == 'f' || gender == 'F' || gender == 'm' || gender == 'M')) {
        cout << "You are not eligible!" << endl;
    }
    else {
        cout << "Wrong input. Please do it again." << endl;
    }

    return 0;
}
