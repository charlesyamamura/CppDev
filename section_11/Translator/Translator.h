#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <map>
#include <string>
using namespace std;

class Translator {
public:
    void addTranslation(const string& englishWord,
                        const string& translatedWord);

    string getTranslation(const string& englishWord) const;

    void printAll() const;

private:
    map<string, string> translations;
};

#endif
