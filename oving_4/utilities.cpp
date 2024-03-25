#include "utilities.h"
#include <cctype>

int incrementByValueNumTimes(int startValue, int increment, int numTimes) {
    for (int i = 0; i < numTimes; i++) {
        startValue += increment;
    }
    return startValue;
}

void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes) {
    for (int i = 0; i < numTimes; i++) {
        startValue += increment;
    }
}

void swapNumbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
// for å endre variablene må man bruke pass-by-refrence
// fordi pass-by-value vil ikke endre de orginale variablene

void printStudent(struct Student stu){
    cout << stu.name << "er "<< stu.age << " år gammel og går " << stu.studyProgram<< "\n"; 
}

bool isInProgram(struct Student stu, string studie) {
    if (stu.studyProgram == studie) {
        cout << "studenten går på"<< studie << "\n";
        return true;
    } else {
        cout << "studenten går ikke på " << studie << "\n";
        return false;
        
    }
}

void testString(){
    string grades = randomizeString(20,'A','F');
    cout << grades << "\n";
    vector<int> gradeCount;

    for (char i = 'A'; i <= 'F'; ++i){
        gradeCount.push_back(countChar(grades,i));
    }

    char grade = 'A';
    double sum = 0;
    for (int i = 0; i < 6; ++i){
        cout << grade << ": " << gradeCount.at(i) << "\n";
        sum += gradeCount.at(i) * (5-i);
        ++grade;
    }
    double gjennomsnitt = sum / grades.size();
    cout << "gjennomsnitt er " << gjennomsnitt;
}


string randomizeString(int lengde,int nedre, int ovre){
    string string = "";

    for (int i = 0; i < lengde; ++i){
        random_device device;
        unsigned long randomSeed = device();
        default_random_engine engine(randomSeed);
        uniform_int_distribution integerDistribution(nedre,ovre);
        string += integerDistribution(engine);
    }
    return string;
}


string readInputToString(int lengde, int nedre, int ovre) {
    string resultat;
    cout << "Skriv inn bokstaver til strengen: \n";
    cout << "Mellom " << static_cast<char>(nedre) << " og " << static_cast<char>(ovre) << ":\n";
    int i = 0;
    while (i < lengde) {
        char input;
        cin >> input;

        if (input >= nedre && input <= ovre) {
            resultat += input;
            ++i;
        } else {
            cout << "Feil input, vennligst skriv inn et tegn mellom " << static_cast<char>(nedre)
                 << " og " << static_cast<char>(ovre) << ":\n";
        }
    }
    /*for (char &c : resultat) {
        c = tolower(c);
    }*/
    return resultat;
}

int countChar(string count, char type){
    int sum = 0;
    for (char c : count) {
        if(c == type){
            sum += 1;
        } 
    }
    return sum;
}
