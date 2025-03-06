#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file;
    std::string fileName;
    std::string input;

    std::cout << "Please Enter the filename (example.txt)" << std::endl << ": ";
    std::getline(std::cin, fileName);

    file.open(fileName, std::ios_base::app);
    std::cout << fileName << " opened" << std::endl << ": ";
    std::getline(std::cin, input);

    file << input + "\n";
    file.close();

    return 0;
}
