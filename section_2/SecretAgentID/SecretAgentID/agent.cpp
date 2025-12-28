/* Project 2: Secret Agent */

#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    string alias;
    int age;
    int level;
    string gadget;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your secret alias: ";
    getline(cin, alias);

    cout << "Enter your age: ";
    cin >> age;
    //cin.get();

    cout << "Enter your agent level (from 1 to 10): ";
    cin >> level;
    //cin.get();

    cin.ignore(); // clears buffer so getline works next

    cout << "What's your favorite gadget? ";
    getline(cin, gadget);

    cout << "============================" << endl;
	cout << "   S.E.C.R.E.T.  A.G.E.N.T." << endl;
	cout << "============================" << endl;
	cout << "Agent Name: " << name << endl;
	cout << "Alias: " << alias << endl;
	cout << "Age: " << age << endl;
	cout << "Level: " << level << endl;
	cout << "Preferred Gadget: " << gadget << endl;
	cout << "============================" << endl;
	cout << "Mission Status: CLASSIFIED" << endl;

    return 0;
}
