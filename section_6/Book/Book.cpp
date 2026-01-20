#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(const string& author,
           const string& title,
           const string& genre,
           int numPages)
    : author(author),
      title(title),
      genre(genre),
      numPages(numPages) {}

string Book::getAuthor() const {
    return author;
}

string Book::getTitle() const {
    return title;
}

string Book::getGenre() const {
    return genre;
}

int Book::getNumPages() const {
    return numPages;
}

void Book::printBookInfo() const {
    cout << title << " was written by " << author << ". "
         << "It belongs to the " << genre << " genre and has "
         << numPages << " pages." << endl;
}

