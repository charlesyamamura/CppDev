#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int powResult = pow(2, 3);
    int sqrtResult = sqrt(25);
    int ceilResult = ceil(4.2);
    int floorResult = floor(4.2);
    double log2Result = log2(512);

    cout << "2 ^ 3 = " << powResult << endl;
    cout << "sqrt(25) = " << sqrtResult << endl;
    cout << "ceiling(4.2) = " << ceilResult << endl;
    cout << "floor(4.2) = " << floorResult << endl;
    cout << "log2(8) = " << log2Result << endl; 

    return 0;
}

