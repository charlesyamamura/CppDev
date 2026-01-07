#include <iostream>
#include <string>
using namespace std;

void printSomething();
void printName();

int main() {

    printSomething(); //call or invocation
    printName();

    return 0;
}

void printSomething() {
    cout << "Hey! Look. I'm here!" << endl;
}

void printName() {
    string name;
    cout << "I am " << name;
    cin >> name;
    cout << "I am " << name << endl;
}
