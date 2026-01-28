#include <iostream>
#include "Dog.h"

int main() {

    Dog* myDogPtr = new Dog("Moana", "Scotish Golden Retriever");
    Dog* yourDogPtr = new Dog("Rover", "German Shepherd");
    Dog* theirDogPtr = new Dog("Snoopy", "English Beagle");

    std::cout << "Using arrow operator: " << std::endl;
    std::cout << myDogPtr->getName() << " - "
        << myDogPtr->getBreed() << std::endl;
    std::cout << yourDogPtr->getName() << " - "
        << yourDogPtr->getBreed() << std::endl;
    std::cout << theirDogPtr->getName() << " - "
        << theirDogPtr->getBreed() << std::endl;

    std::cout << "\nUsing dereference and dot operator: " << std::endl;
    std::cout << (*myDogPtr).getName() << " - "
        << (*myDogPtr).getBreed() << std::endl;
    std::cout << (*yourDogPtr).getName() << " - "
        << (*yourDogPtr).getBreed() << std::endl;
    std::cout << (*theirDogPtr).getName() << " - "
        << (*theirDogPtr).getBreed() << std::endl;
 
    delete myDogPtr;
    myDogPtr = nullptr;
    delete yourDogPtr;
    yourDogPtr = nullptr;
    delete theirDogPtr;
    theirDogPtr = nullptr;

    return 0;
}
