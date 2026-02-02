#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student {
public:
    Student();
    Student(std::string firstName, std::string lastName, double gpa);
    std::string getFullName() const;
    double getGPA() const;

private:
    std::string firstName;
    std::string lastName;
    double gpa;
};

#endif