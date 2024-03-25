#include "utilities.h"
#include "tests.h"
#include "mastermind.h"
#include "masterVisual.h"
#include <iostream>



int main() {


    cout << "1) testcallbyvalue: \n";
    cout << "2) testcallbyvalueref: \n";
    cout << "3) printstudent: \n";
    cout << "4) random string: \n";
    cout << "5) teststrig: \n";
    cout << "6) mastermind: \n";
    cout << "7) mastermindvisal: \n";



    int n;
    cin >> n;

    switch (n){
        case 1:
            testCallByValue();
        break;
        case 2:
            testCallByReference();
        break;
        case 3: {
            Student stu{"Gustav", "BIAIS", 23};
            printStudent(stu);
            isInProgram(stu, "BIAIS");
        }
        break;
        case 4:
            testString();
            readInputToString(5,'A','z');
        break;
        case 5:
            testString();
        break;
        case 6:
            playMastermind();
        break;
        case 7:
            playMastermindVisual();
        break;

        default:
        cout << "invalid input";
    }

    return 0;
}

//------------------------------------------------------------------------------
