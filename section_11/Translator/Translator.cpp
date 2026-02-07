#include "Translator.h"
#include <iostream>
#include <string>
using namespace std;

void Translator::addTranslation(const string& englishWord, const string& translatedWord) {
    translations[englishWord] = translatedWord;
}

std::string Translator::getTranslation(const string& englishWord) const {
    auto it = translations.find(englishWord);
    if (it != translations.end()) {
        return it-> second;
    }
    else {
        return "NOT FOUND";
    }
}

void Translator::printAll() const {
    for (const auto& pair : translations) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}