#ifndef DOG_H
#define DOG_H
#include <string>

class Dog {
public:
    Dog(std::string name, std::string breed);
    std::string getName() const;
    std::string getBreed() const;

private:
    std::string name;
    std::string breed;
};

#endif