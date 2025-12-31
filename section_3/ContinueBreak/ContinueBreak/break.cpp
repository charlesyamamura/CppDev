#include <iostream>
using namespace std;

int main() {

    int count = 0;

    while (count <= 10) {
        if (count == 5) {
            count++;
            //continue;
            break;
        }

        cout << count << endl;
        count++;
    }

    return 0;
}
