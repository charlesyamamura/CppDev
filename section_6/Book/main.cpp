#include <iostream>
#include "Book.h"
using namespace std;

int main() {

    Book b1("Herman Melville", "Moby Dick", "epic", 1000);
    Book b2("Marcel Proust", "A la recherche du temps perdu", "philosophical fiction", 4000);
    Book b3("Thomas Mann", "The Magic Mountain", "novel of ideas", 1000);
    Book b4("William Shakespeare", "Hamlet", "tragic play", 200);
    Book b5("Jane Austen", "Pride and Prejudice", "historic romance", 700);

    b1.printBookInfo();
    b2.printBookInfo();
    b3.printBookInfo();
    b4.printBookInfo();
    b5.printBookInfo();

    return 0;
}


