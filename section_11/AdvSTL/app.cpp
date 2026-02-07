#include <iostream>
#include <vector>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string name, int age) : name(name), age(age) {
        std::cout << "Constructed: " << name << std::endl;
    }

    Person(const Person& other) : name(other.name), age(other.age) {
        std::cout << "Copied: " << name << std::endl;
    }

    Person& operator=(const Person& other) {
        name = other.name;
        age = other.age;
        std::cout << "Assigned: " << name << std::endl;
        return *this;
    }
};

int main() {
    std::vector<Person> people;

    std::cout << "\nUsing push_back:\n";
    Person p1("Lauren", 25);
    people.push_back(p1);

    std::cout << "\nUsing emplace_back:\n";
    people.emplace_back("Emma", 30);

    return 0;
}
