#ifndef SUNDAE_H
#define SUNDAE_H

#include <string>
#include <vector>

class Sundae {
public:
    Sundae(const std::string& flavor);

    void addTopping(const std::string& topping);
    std::string getFlavor() const;
    std::vector<std::string> getToppings() const;
    void printSundae() const;

private:
    std::string flavor;
    std::vector<std::string> toppings;
};

#endif
