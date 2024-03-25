#pragma once
#include <iostream>
#include <random>
using namespace std;

int incrementByValueNumTimes(int startValue, int increment, int numTimes);
void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes);
void swapNumbers(int &a, int &b);
void printStudent(struct Student stu);
bool isInProgram(struct Student stu, string studie);
void testString();
string randomizeString(int lengde,int nedre, int ovre);
string readInputToString(int lengde, int nedre, int ovre);
int countChar(string count, char type);

struct Student
{
    string name;
    string studyProgram;
    int age;
};

