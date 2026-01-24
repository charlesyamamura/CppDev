#include <iostream>
#include <stdexcept>
#include <string>

std::string getMonthName(int monthNum);

int main() {
    int month;

    std::cout << "Please enter a month number from 1 to 12: ";
    std::cin >> month;

    try {
        std::string monthName = getMonthName(month);
        std::cout << "Month: " << monthName << std::endl;
    }
    catch (const std::out_of_range& err) {
        std::cerr << "Error: " << err.what() << std::endl;
    }

    // Optional test cases
    try {
        std::cout << getMonthName(5) << std::endl;
        std::cout << getMonthName(12) << std::endl;
        std::cout << getMonthName(0) << std::endl;   // throws
    }
    catch (const std::out_of_range& err) {
        std::cerr << "Test error: " << err.what() << std::endl;
    }

    return 0;
}

std::string getMonthName(int monthNum) {
    if (monthNum < 1 || monthNum > 12) {
        throw std::out_of_range("Month must be between 1 and 12.");
    }

    static const std::string months[12] {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    return months[monthNum - 1];
}
