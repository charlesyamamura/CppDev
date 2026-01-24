#include <iostream>

int imBroken(int num1, int num2);

int main() {
    int a;

    try {
        a = imBroken(10, 5);
        std::cout << a << std::endl;

        a = imBroken(10, 0);
        std::cout << a << std::endl;
    }
    catch (std::invalid_argument& err) {
        std::cout << err.what() << std:: endl;
    }

    return 0;
}

int imBroken(int num1, int num2) {
    int result = 0;

    if (num2 != 0) {
        result = num1 / num2;
    }
    else {
        throw std::invalid_argument("Cannot divide by 0");
    }

    return result;
}