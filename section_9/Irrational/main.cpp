#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream namefile("names.txt");
    std::ifstream numfile("numbers.txt");
    std::ofstream outfile("output.tx");

    if (!namefile || !numfile) {
        std::cerr << "File not found. Exiting." << std::endl;
        return 1;
    }

    std::string tempName;
    double tempNum;

    while (getline(namefile, tempName) && (numfile >> tempNum)) {
        outfile << tempName << "\n" 
        << tempNum << "\t" << (tempNum*100) << std::endl;
    }

    namefile.close();
    numfile.close();
    outfile.close();
    std::cout << "Done writing outfile. " << std::endl;

    return 0;
}