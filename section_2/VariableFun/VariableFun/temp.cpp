#include <iostream>
//using namespace std;

int main() 
{

    int myInt; // declaration
    myInt = 15; // initialization

    double myDouble = 3.14159;

    int x = 10; // copy initialization (assignment)
    int y(10); // direct initialization
    int z{ 10 }; // uniform (brace) initialization

    // int ok = 3.14;
    // int bad{ 3.14 };

    double pi = 3; // widening conversion (no loss of data)

    double stateTaxRate = 0.06; //state_tax_rate


    std::cout << myInt << std::endl;
    std::cout << myDouble << std::endl;
    std::cout << pi << std::endl;
    std::cout << stateTaxRate << std::endl;

    return 0;
}