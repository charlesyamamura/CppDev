#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, std::string> contacts;

    contacts["Bob Bondurant"] = "313-555-5555";
    contacts["Lauren Landers"] = "734-555-5550";
    contacts["Sally Snorkle"] = "810-555-8888";

    // for(std::pair<std::string, std::string> element : contacts) {
    for (auto element : contacts) {
        std::cout << element.first << " = " << element.second << std::endl;
    }

    return 0;
}