#include <iostream>
#include "Library.h"

int main() {
    // Create a Library card with an initial number of books
    // Library myLibrary("Alice", 2);
    Library myLibrary("John", 5);

    // Initial state
    std::cout << "Initial state:" << std::endl;
    myLibrary.printLibraryCard();

    // Check out a book
    std::cout << "\nChecking out a book..." << std::endl;
    myLibrary.checkoutBook();
    myLibrary.printLibraryCard();

    // Return a book
    std::cout << "\nReturning a book..." << std::endl;
    myLibrary.returnBook();
    myLibrary.printLibraryCard();

    // Return books until zero (edge case)
    std::cout << "\nReturning books until none remain..." << std::endl;
    myLibrary.returnBook();
    myLibrary.returnBook();  // should not go below zero
    myLibrary.printLibraryCard();

    // Test getters
    std::cout << "\nTesting getters:" << std::endl;
    std::cout << "Card holder: " << myLibrary.getCardName() << std::endl;
    std::cout << "Books checked out: "
              << myLibrary.getBooksCheckedOut()
              << std::endl;

    std::cout << "\nAll tests completed successfully." << std::endl;

    return 0;
}
