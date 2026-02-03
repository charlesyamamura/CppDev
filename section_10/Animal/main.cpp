#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <string>

int main() {

    // Animal myAnimal("Sue", 15000);
    Dog dog("Rover", 70, "Greyhound"); 

    Animal* dogPtr = new Dog("Moana", 80, "Golden Retriever");
    std::cout << "Dog's name: " << dogPtr->getName() << std::endl;
    std::cout << "Dog's weight: " << dogPtr->getWeight() << std::endl;
    std::cout << "Make noise? " << dogPtr->makeNoise() << std::endl;
    std::cout << "What would you like to eat? " << dogPtr->eat() << std::endl;

    delete dogPtr;
    dogPtr = nullptr;

    Animal* catPtr = new Cat("Felix", 12);
    
    std::cout << "Cat's name: " << catPtr->getName() << std::endl;
    std::cout << "Cat's weight: " << catPtr->getWeight() << std::endl;
    std::cout << "Make noise? " << catPtr->makeNoise() << std::endl;
    std::cout << "What would like to eat? " << catPtr->eat() << std::endl;

    Cat* realCat = dynamic_cast<Cat*>(catPtr);
    if (realCat) {
    realCat->chaseMouse();
}

    delete catPtr;
    catPtr = nullptr;

    // std::cout << "Animal name: " << myAnimal.getName() << std::endl;
    // std::cout << "Animal weight: " << myAnimal.getWeight() << std::endl;
    // std::cout << "Animal noise: " << myAnimal.makeNoise() << std::endl;

    // std::cout << "Dog name: " << dog.getName() << std::endl;
    // std::cout << "Dog weight: " << dog.getWeight() << std::endl;
    // std::cout << "Dog breed: " << dog.getBreed() << std::endl;
    // std::cout << "Dog noise: " << dog.makeNoise() << std::endl;
    // std::cout << "Dog action: "; 
    // dog.digHole();
    // std::cout << "Dog another action: ";
    // dog.chaseCat();

    return 0;
}