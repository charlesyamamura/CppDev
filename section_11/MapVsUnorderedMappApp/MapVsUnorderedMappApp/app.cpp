#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main() {
    std::cout << "*** std::map ***" << std::endl;

    std::map<std::string, int> orderedMap;
    orderedMap["banana"] = 3;
    orderedMap["apple"] = 5;
    orderedMap["cherry"]= 2;
    orderedMap["plum"] = 9;
    orderedMap["pineapple"] = -7;
    orderedMap["sweet passion fruit"] = 11;
    orderedMap["tangerine"] = -1;
    
    std::cout << "Contents of ordered map (keys will be sorted): " << std::endl;
    for (const auto& pair : orderedMap) {
        std::cout << pair.first << " : " <<  pair.second << std::endl;
    }

    std::cout << "\nLooking up 'pineapple' in orderedMap: ";
    auto it1 = orderedMap.find("pineapple");
    if (it1 != orderedMap.end()) {
        std::cout << "Found, value = " << it1->second << std::endl;
    }
    else {
        std::cout << "Not found!" << std::endl;
    }

    std::cout << std::endl << std::endl;
    std::cout << "*** std::unordered_map ***" << std::endl;
    std::unordered_map<std::string, int> unorderedMap;
    unorderedMap["banana"] = 3;
    unorderedMap["apple"] = 5;
    unorderedMap["cherry"]= 2;
    unorderedMap["plum"] = 9;
    unorderedMap["pineapple"] = -7;
    unorderedMap["sweet passion fruit"] = 11;
    unorderedMap["tangerine"] = -1;

    std::cout << "Contents of unordered map (no guaranteed order): " << std::endl;
    for (const auto& pair: unorderedMap) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    std::cout << "\nLooking up 'pinapple' in unorderedMap: ";
    auto it2 = unorderedMap.find("pineapple");
    if (it2 != unorderedMap.end()) {
        std::cout << "Found, value = " << it2->second << std::endl;
    }
    else {
        std::cout << "Not found!" << std::endl;
    }

    return 0;
}