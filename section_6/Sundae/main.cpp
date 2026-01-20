#include "Sundae.h"
#include <iostream>

int main() {
    Sundae s("Chocolate");

    s.addTopping("Chocolate");
    s.addTopping("Sprinkles");
    s.addTopping("Whipped cream");
    s.addTopping("Cherries");
    s.addTopping("Cookies");

    s.printSundae();

    Sundae b("Butterscotch");

    b.addTopping("Chocolate");
    b.addTopping("Oreos");
    b.addTopping("Blue berries");
    b.addTopping("Buterscotch schnapps");

    b.printSundae();

    Sundae v("Vanilla");
    v.printSundae();

    return 0;
}
