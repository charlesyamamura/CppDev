#include <iostream>
#include <queue>
#include <string>

void printQueue(std::queue<std::string> q);

int main() {

    std::queue<std::string> names;
    
    names.push("John");
    names.push("Sally");
    names.push("Bob");
    names.push("Sam");
    names.push("Ali");
    names.push("Karen");

    std::cout << "First queue:\n";
    printQueue(names);

    std::cout << "Front element: " << names.front() << std::endl;

    names.pop();   // remove John
    std::cout << std::endl;

    std::cout << "Next queue:\n";
    printQueue(names);

    names.push("Alice");

    std::cout << "Final state:\n";
    printQueue(names);

    return 0;
}

void printQueue(std::queue<std::string> q) {
    while (!q.empty()) {
        std::cout << q.front() << std::endl;
        q.pop();
    }
    std::cout << std::endl;
}
