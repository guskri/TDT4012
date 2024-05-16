#include "Read.h"
#include "std_lib_facilities.h"
#include <fstream>

void writeFile(){
    std::filesystem::path test{"myfile.txt"};
    std::ofstream outputstream{test};

    std::cout << "skriv inn ord du vil skrive til fil; " << endl;
    std::string userInput;
    while(userInput != "quit"){
    cin >> userInput;
    outputstream << userInput << std::endl;
    }

}

void addLineNumber(){
    std::ifstream inputStream{"myfile.txt"};

    if (!inputStream) {
        std::cout << "could not open file " << endl;
    }

    std::filesystem::path newFilepath{"myfile2.txt"};
    std::ofstream outputStream{newFilepath};
    
    std::string line;

    int LineNumber = 1;

    while(std::getline(inputStream, line)) {
        outputStream << LineNumber << ":" << line << std::endl; 
        LineNumber ++;
    }

}

