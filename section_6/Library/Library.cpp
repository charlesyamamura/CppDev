#include "Library.h"
#include <iostream>

Library::Library(const std::string& cardName, int booksCheckedOut): 
        cardName(cardName), booksCheckedOut(booksCheckedOut) {}

void Library::checkoutBook() {
    if (booksCheckedOut < 5) {
        booksCheckedOut++;
    }
    else {
        std::cout << "You have borrowed 5 books already." << std::endl;
    }   
}

void Library::returnBook() {
    if (booksCheckedOut > 0) {
        booksCheckedOut--;
    }
    else {
        std::cout << "No books to return." << std::endl;
    }     
}

std::string Library::getCardName() const {
    return cardName;
}

int Library::getBooksCheckedOut() const {
    return booksCheckedOut;
}

void Library::printLibraryCard() const {
    std::cout << cardName << " has " << booksCheckedOut 
    << " books checked out." << std::endl;
}
