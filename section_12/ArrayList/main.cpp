#include <iostream>
#include <string>
#include "ArrayList.h"
using namespace std;

int main() {
    ArrayList myList;

    for (int i = 0; i < 15; i++) {
        myList.add(i * 10);
    }

    myList.printList();

    cout << endl << "Size is " << myList.size() << endl;

    myList.add(555, 15);

    myList.printList();
    cout << "Now size is " << myList.size() << endl;

    myList.set(987, 3);

    myList.printList();

    myList.add(1000);

    return 0;
}