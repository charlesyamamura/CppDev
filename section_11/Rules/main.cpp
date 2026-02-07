#include <iostream>
#include <utility>     // <-- required for std::move
#include "Rules.h"

using namespace std;

int main() {

    cout << "\n*** Rule of Three ***" << endl;
    RuleOfThree a("Alpha");
    RuleOfThree b = a;
    b = a;

    cout << "\n*** Rule of Five ***" << endl;
    RuleOfFive c("Beta");
    RuleOfFive d = std::move(c);   // FIXED
    RuleOfFive e;
    e = std::move(d);             // FIXED

    cout << "\n*** Rule of Zero ***" << endl;
    RuleOfZero f("Gamma");
    f.print();

    return 0;
}
