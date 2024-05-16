#include "emnekatalog.h"



void CourseCatalog::addCourse(string emnekode, string emneNavn){
emnekatalog.insert({emnekode,emneNavn});
}

void CourseCatalog::removeCourse(string kurs){
emnekatalog.erase({kurs});
}

void CourseCatalog::getCourse(string kurs){
    string Output = emnekatalog.at(kurs);
    cout << Output << endl;
}

std::ostream& operator<<(std::ostream& os, const CourseCatalog& c){
    for (const auto& m: c.emnekatalog){
        os << m.first << "  " << m.second << endl;
    }
    return os;
}
void CourseCatalog::storeCourse(const CourseCatalog c){
    std::filesystem::path fileName{"CourseCatalog.txt"};
    std:: ofstream outpustream{fileName};

    for (const auto& m:c.emnekatalog){
        outpustream << m.first << " :  " << m.second << std::endl;
    }
}

void CourseCatalog::loadCourse() {
    std::ifstream inputstream("CourseCatalog.txt");

    if (!inputstream) {
        std::cerr << "Error opening file for reading." << std::endl;
        return;
    }

    std::string line;
    emnekatalog.clear();
    while (std::getline(inputstream, line)) {
        size_t delimPos = line.find(" : ");
        if (delimPos != std::string::npos) {
            std::string emnekode = line.substr(0, delimPos);
            std::string emneNavn = line.substr(delimPos + 3);
            emnekatalog[emnekode] = emneNavn;
        }
    }
}
