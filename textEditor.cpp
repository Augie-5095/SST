#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ofstream file;
    std::string fileName;
    std::string input;

    if (argc < 2)
    {
        std::cerr << "Error: Argument expected" << std::endl;
        std::cerr << "Usage: " << argv[0] << " <string>" << std::endl;
    }

    fileName = argv[1];

    file.open(fileName, std::ios_base::app);
    std::cout << fileName << " opened" << std::endl << ": ";
    std::getline(std::cin, input);

    file << input + "\n";
    file.close();

    return 0;
}
