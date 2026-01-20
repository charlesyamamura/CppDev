#include "House2.h"
#include <iostream>
using namespace std;

House2::House2() {
    this->numStories = 1;
    this->numWindows = 4;
    this->color = "white";
}// end no-arg ctor

House2::House2(int numStories, int numWindows, string color) {
    this->numStories = numStories;
    this->numWindows = numWindows;
    this->color = color; 
}// end parameterized ctor

House2::~House2() {
    cout << "The "<< color << " house with " << numStories << " stories"
        << " and " << numWindows << " windows is being destroyed." << endl;
}

void House2::setNumStories(int numStories) {
    this->numStories = numStories;
}

void House2::setNumWindows(int numWindows) {
    this->numWindows = numWindows;
}

void House2::setColor(string color) {
    this-> color = color;
} 

int House2::getNumStories() const {
    return numStories;
}

int House2::getNumWindows() const {
    return numWindows;
}

string House2::getColor() const {
    return color;
}                

void House2::print() const {
    cout << "The house is " << color
    << " and has " << numStories
    << " stories and " << numWindows
    << " windows." << endl;
}