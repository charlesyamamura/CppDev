#include <iostream>
using namespace std;

void threeTimes(int& input, int& output);

int main() {

    int myInput = 369;
    int myOutput;

    threeTimes(myInput, myOutput);
    
    cout << "Input: " << myInput << " times 3 = " << myOutput << ". " << endl;

    return 0;
}

void threeTimes(int& input, int& output) {
    output = input * 3;
}