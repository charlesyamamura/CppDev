#include <iostream>
#include <string>
#include "Student.h"

Student::Student() {
    firstName = "";
    lastName = "";
    gpa = 0.0;
}

Student::Student(std::string firstName, std::string lastName, double gpa) {
    this-> firstName = firstName;
    this-> lastName = lastName;
    this-> gpa = gpa;
}

std::string Student::getFullName() const {
    return firstName + " " + lastName;
}

double Student::getGPA() const {
    return gpa;
}