#include "Buffer.h"
#include <iostream>

int main() {
    std::cout << "=== Create A ===\n";
    Buffer a("Hello");

    std::cout << "\n=== Copy construct B from A ===\n";
    Buffer b = a;          // copy constructor

    std::cout << "\n=== Create C ===\n";
    Buffer c("World");

    std::cout << "\n=== Copy assign C = A ===\n";
    c = a;                // copy assignment

    std::cout << "\n=== Move construct D from A ===\n";
    Buffer d = std::move(a);   // move constructor

    std::cout << "\n=== Move assign B = D ===\n";
    b = std::move(d);         // move assignment

    std::cout << "\n=== End of scope ===\n";
    return 0;
}
