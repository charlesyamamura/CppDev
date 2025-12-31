#include <iostream>
using namespace std;

int main() {

    // int count = 0;

    // while (count < 10) {
    //     if (count % 2 != 0) {
    //         count++;
    //         continue;
    //     }
    //     cout << count << endl;
    //     count++;
    // }

    for (int count = 0; count < 10; count++) {
    if (count % 2 != 0) continue;
    cout << count << endl;
}

    return 0;
}