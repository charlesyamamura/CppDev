#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

class Library {
public:
    Library(const std::string& cardName, int booksCheckedOut);

    void checkoutBook();
    void returnBook();
    
    std::string getCardName() const;
    int getBooksCheckedOut() const;

    void printLibraryCard() const;
    
private: 
    std::string cardName;
    int booksCheckedOut; 
};

#endif