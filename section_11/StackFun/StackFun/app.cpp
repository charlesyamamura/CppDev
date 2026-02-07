#include <iostream>
#include <stack>
#include <string>

void storeReverse(const std::string& originString, std::stack<char>& reverseStack);
bool isPalindrome(const std::string& originString);
void printResult(const std::string& originString);

int main() {

    std::string strArray[5] = { "racecar", "fudge", "civic", "bob", "dogs"};

    for (const std::string& str : strArray) {
        printResult(str);
        std::cout << std::endl;
    }

    return 0;
}

void storeReverse(const std::string& originString, std::stack<char>& reverseStack) {
    for(char c : originString) {
        reverseStack.push(c);
    }
}

bool isPalindrome(const std::string& originString) {
    std::stack<char> reverseStack;
    storeReverse(originString, reverseStack);

    for (char c : originString) {
        if (reverseStack.top() != c) {
            return false;
        }
        reverseStack.pop();
    }

    return true;
}

void printResult(const std::string& originString) {
    std::cout << "is \"" << originString << "\" a palindrome? "
        << std::boolalpha << isPalindrome(originString) << std::endl;
}