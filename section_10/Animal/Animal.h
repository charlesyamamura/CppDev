#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal(std::string name, double weight);

    virtual ~Animal() = default;

    std::string getName() const;
    void setName(std::string name);
    double getWeight() const;
    void setWeight(double weight);
    virtual std::string makeNoise() const = 0;
    virtual std::string eat() const = 0;

private:
    std::string name;
    double weight;
};

#endif