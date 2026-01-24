#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
public:
    Person(std::string name);
    std::string getName() const noexcept;
    void setName(std::string name);

private:
    std::string name;
};

#endif