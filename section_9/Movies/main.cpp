#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>

int main() {
    std::ifstream infile("genres.txt");

    if (!infile) {
        std::cout << "File not found." << std::endl;
        return 1;
    }

    std::map<std::string,int> genreCounts;
    std::string genre;
    int total = 0;

    while (infile >> genre) {
        genreCounts[genre]++;
        total++;
    }

    infile.close();

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Movie Genre Preferences" << std::endl;
    std::cout << " ---------------------------- " << std::endl;
    std::cout << std::left << std::setw(15) << "Genre "
            << std::right << std::setw(10) << "Count "
            << std::setw(12) << "Ratio " << std::endl;

    for (const auto& pair: genreCounts) {
        double ratio = static_cast<double> (pair.second) / total;
        std::cout << std::left << std::setw(15) << pair.first
                << std::right << std::setw(10) << pair.second
                << std::setw(12) << ratio << std::endl;

    }

    std::cout << " ----------------------------- " << std::endl;
    std::cout << "Total responses: " << total << std::endl; 

    return 0;
}