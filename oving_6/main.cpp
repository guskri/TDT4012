//
// This is example code from Chapter 2.2 "The classic first program" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//
// This program outputs the message "Hello, World!" to the monitor

#include "std_lib_facilities.h"
#include "Read.h"
#include <map>
#include "emnekatalog.h"
#include "bouncingBall.h"

//------------------------------------------------------------------------------'
const map<string, string> capitalsMap {
{"Norway", "Oslo"},
{"Sweden", "Stockholm"},
{"Denmark", "Copenhagen"}
};
string getCapital(const string& country) {
return capitalsMap.at(country);

}
// C++ programs start by eecuting the function main
int main() {
    //writeFile();
    //addLineNumber();
    
cout << "Capitals:" << endl;
for (pair<const string, const string> elem : capitalsMap) {
cout << getCapital(elem.first) << endl;
}
CourseCatalog catalog;

catalog.addCourse("TDT4102", "Informasjonsteknologi");
catalog.storeCourse(catalog);
cout << catalog;
    
    bouncingBall();
    
return 0;
}
//------------------------------------------------------------------------------
