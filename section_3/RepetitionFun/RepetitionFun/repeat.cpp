/* Repetition Control Statements */

#include <iostream>
using namespace std;

int main() {

    // while
    int count = 0;
   
    while (count < 10) {
        cout << "Count: " << count << endl;
        count++;
    }

    // do-while
    int count2 = 100;

    do {
        cout << "Count2: " << count2 << endl;
        count2++;
    } while (count2 < 10);

    // for loop
    for (int i = 0; i < 10; i++) {
        cout << "i is " << i << endl;
    }

    // sentinel-controlled repetition

    int input;

    cout << "Enter a non-negative integer (or a negative number to quit): ";
    cin >> input;

    while (input >=0){
        cout << "You've entered: " << input << endl;
        cout << "Enter another (or negative to quit): ";
        cin >> input;
    }

    return 0;
}