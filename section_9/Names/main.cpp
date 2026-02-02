#include <iostream>
#include <fstream>
#include <string>


int main() {
    std::ifstream nameFile("names.txt");
    std::ifstream ageFile("ages.txt");
    std::ofstream outfile("output.txt");

    if (!nameFile || !ageFile) {
        std::cerr << "Problem opening an input file. Exiting. " << std::endl;
        return 1;
    }

    std::string tempName;
    int tempAge;

    while (getline(nameFile, tempName) && (ageFile >> tempAge)) {
        outfile << tempName << " " << tempAge << std::endl;
    }

    nameFile.close();
    ageFile.close();
    outfile.close();
    std::cout << "Finished writing to output.txt" << std::endl;

    return 0;
}