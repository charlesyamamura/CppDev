/* Keyboard Input */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string fullName;

    cout << "Please enter your full name: " << endl;
    getline(cin, fullName);  // read name first

    cout << "Please enter your age: " << endl;
    cin >> age;              // read age
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer

    cout << "Hello, " << fullName << "! You are " << age << " years old." << endl;

    return 0;
}
