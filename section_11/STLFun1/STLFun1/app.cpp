#include <iostream>
#include <deque>

void printDeque(const std::deque<int>& deck);

int main() {
    std::deque<int> myDeck;

    myDeck.push_back(1);
    myDeck.push_back(5);
    myDeck.push_back(10);

    std::cout << "First print: " << std::endl;
    printDeque(myDeck);

    myDeck.push_front(20);
    myDeck.push_front(50);
    myDeck.push_front(100);

    std::cout << "Next print: " << std::endl;
    printDeque(myDeck);

    return 0;
}

void printDeque(const std::deque<int>& deck) {
    for (int num : deck) {
        std::cout << num << std::endl;
    }
    std::cout << std::endl;
}