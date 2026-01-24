#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {

    vector<int> myNums;

    try {
        //this will throw a length error
        myNums.resize(myNums.max_size() + 1);
    }
    catch (const length_error& err) {
        cerr << "Detected a length_error "
            << err.what() << endl;
    }
        cout << "It's a big vector." << endl;

    return 0;
}
