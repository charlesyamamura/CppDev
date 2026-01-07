#include <iostream>
using namespace std;

int counter = 100;

void modifyGlobal();

int main() {
    cout << "Before: " << counter << endl;
    for(int i = 0; i < 100; i++) {
        modifyGlobal();
    }
    cout << "After: " << counter << endl;

    return 0;
}

void modifyGlobal() {
    counter++;
}