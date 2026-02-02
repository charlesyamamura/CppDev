#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "Student.h"

int main() {
    std::ifstream infile("students.txt");
    std::ofstream outfile("roster.txt");

    if (!infile) {
        std::cerr << "File not found. Exit. " << std::endl;
        return 1;
    }

    std::vector<Student*> roster;
    std::string first;
    std::string last;
    double gpa;

    while(infile >> first >> last >> gpa) {
        if (gpa >= 0 && gpa <= 4.0) {
            Student* s = new Student(first, last, gpa);
            roster.push_back(s);
        }
    }

    infile.close();

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Student Roster" << std::endl;
    std::cout << "---------------------" << std::endl;

    outfile << std::fixed << std::showpoint << std::setprecision(2);
    outfile << "Student Roster" << std::endl;
    outfile << "---------------------" << std::endl;

    double sum = 0.0;
    int honors = 0;

    for (Student* s : roster) {
        std::cout << std::setw(20) << std::left << s -> getFullName()
        << ". GPA: " << s -> getGPA() << std::endl;
        outfile << std::setw(20) << std::left << s -> getFullName()
        << ". GPA: " << s -> getGPA() << std::endl;

        sum += s -> getGPA();

        if (s -> getGPA() > 3.5) {
            honors++;
        }
    }

    double avgGPA = (roster.size() > 0) ? sum / roster.size() : 0.0;

    std::cout << "\nAverage GPA: " << avgGPA << std::endl;
    std::cout << "Honor students: " << honors << std::endl;

    outfile << "\nAverage GPA: " << avgGPA << std::endl;
    outfile << "Honor students: " << honors << std::endl;

    for (Student*s : roster) {
        delete s;
    }

    roster.clear();

    return 0;
}