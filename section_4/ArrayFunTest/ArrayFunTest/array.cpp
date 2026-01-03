#include <iostream>
#include <array>
using namespace std;

int main() {

    array<int, 5> myArray{1, 2};

    myArray[0] = 2;
    myArray[1] = 5;
    myArray[2] = 10;
    myArray[3] = 1;
    myArray[4] = 17;

    for (int a : myArray){
        cout << a << endl;
    }

    cout << "Size of the array: " << myArray.size() << endl;
    
    return 0;
}

