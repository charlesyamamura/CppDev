#include <iostream>
#include <string>
#include "Swapper.h"
using namespace std;

int main() {
    Swapper<int> intSwapper(3, 7);
    Swapper<string> strSwapper("Harold", "Hilton");

    cout << "Before swap: " << endl;
    cout << "\t" << intSwapper.getFirst() << ", "
        << intSwapper.getSecond() << endl;
    cout << "\t" << strSwapper.getFirst() << ", "
        << strSwapper.getSecond() << endl;

    intSwapper.swap();
    strSwapper.swap();

    cout << "\nAfter swap: " << endl;
    cout << "\t" << intSwapper.getFirst() << ", "
        << intSwapper.getSecond() << endl;    
    cout << "\t" << strSwapper.getFirst() << ", "
        << strSwapper.getSecond() << endl;    

    cout << "\nSmaller (int): " << intSwapper.getSmaller() << endl;
    cout << "\nSmaller (str): " << strSwapper.getSmaller() << endl;

    return 0;
}