#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(const std::string& author,
         const std::string& title,
         const std::string& genre,
         int numPages);

    std::string getAuthor() const;
    std::string getTitle() const;
    std::string getGenre() const;
    int getNumPages() const;

    void printBookInfo() const;

private:
    std::string author;
    std::string title;
    std::string genre;
    int numPages;
};

#endif
