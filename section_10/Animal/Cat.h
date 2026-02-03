#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include <string>

class Cat : public Animal {
public:
    Cat(std::string name, double weight);
    std::string makeNoise() const override;
    virtual std::string eat() const override;
    void chaseMouse() const;
};

#endif