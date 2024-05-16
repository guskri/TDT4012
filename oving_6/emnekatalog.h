#pragma once
#include <map>
#include "std_lib_facilities.h"






class CourseCatalog{
public:
 map<string,string> emnekatalog{
{"TDT4102","Programmering"}, 
{"IFYT", "Fysikk"}};

friend ostream& operator<<(ostream& os, const CourseCatalog& c);

void addCourse(string emnekode, string emneNavn);
void removeCourse(string kurs);
void getCourse(string kurs);
void storeCourse(const CourseCatalog c);
void loadCourse();
};