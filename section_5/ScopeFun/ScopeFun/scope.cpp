/* Variable Scope and Lifetime */

#include <iostream>
using namespace std;

void myFun(int param);

double global = 3.14159;

int main() {
        
    int localToMain = 20;

    cout << "The local to main variable is " << localToMain << endl;
    cout << "The global double (to main) is " << global << endl;

    myFun(25);
    myFun(28);
    myFun(32);

    // cout << local << endl;

    return 0;
}

void myFun(int param) {
    int local = 100;
    local++;

    static int myStatic = 500;
    myStatic++;

    global++;

    cout << "My local number is " << local << endl;
    cout << "My param is " << param << endl;
    cout << "My global is " << global << endl;
    cout << "My static is " << myStatic << endl;

    // localToMain++;
}