#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(nullptr));

    for (int roll = 1; roll <=10; roll++) {
        int die = rand() % 6 + 1;
        cout << "Roll # " << roll << " : Die = " << die << endl;
    }
    return 0;
}
