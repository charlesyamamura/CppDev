#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::ifstream infile("salaries.txt");
    std::ofstream outfile("report.txt");

    if (!infile) {
        std::cerr << "File not found. Exit." << std::endl;
        return 1;
    }

    double salary;
    double totalPayroll = 0;
    int counter = 0;
    int highPay = 0;
    int invalidCount = 0;

    while (infile >> salary) {

        // Ignore invalid or negative salaries
        if (salary <= 0) {
            invalidCount++;
            continue;
        }

        counter++;
        totalPayroll += salary;

        if (salary > 100000) {
            highPay++;
        }
    }
    infile.close();

    double avgSalary = (counter > 0) ? totalPayroll / counter : 0.0;
    outfile << std::fixed << std::showpoint << std::setprecision(2);
    outfile << "Employee Salary Report" << std::endl;
    outfile << "----------------------------------" << std::endl;

    outfile << "Number of valid employees: " << counter << "\n";
    outfile << "Total payroll: $" << totalPayroll << "\n";

    outfile << "Average wage: $" << avgSalary << "\n";

    outfile << "Employees earning over $100,000: " << highPay << "\n";
    outfile << "Invalid salary entries ignored: " << invalidCount << "\n";

    return 0;
}
