/* Logical Operators 251224 */

#include <iostream>
using namespace std;


int main() {

    bool isRaining = true;
    bool isWarm = true;

    cout << boolalpha;

    cout << "is Raining AND is Warm: " << (isRaining && isWarm) << endl;
    cout << "is Raining OR is Warm: " << (isRaining || isWarm) << endl;
    cout << "NOT is Raining: " << (! isRaining) << endl;
    cout << "is Raining AND NOT is Warm: " << (isRaining && (! isWarm)) << endl;
    cout << "is Raining OR NOT is Warm: " << (isRaining || (! isWarm)) << endl;

    return 0;
}