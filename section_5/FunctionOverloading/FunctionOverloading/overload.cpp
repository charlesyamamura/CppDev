#include <iostream>
#include <string>
using namespace std;

int result(int num1, int num2);
string result(string str1, string str2);
int result(int num);

int main() {

    int resultNum = result(30, 20);
    string resultName = result("John", "Baugh");
    int resultCube = result(81);

    cout << "Result num is " << resultNum << endl;
    cout << "Result name is " << resultName << endl;
    cout << "Result cube is " << resultCube << endl;

    return 0;
}

int result(int num1, int num2) {
    return num1 * num2;
}

string result(string str1, string str2) {
    return str1 + " " + str2;
}

int result(int num) {
    return (num * num * num);
}