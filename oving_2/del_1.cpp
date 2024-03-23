#include "del_1.h"

void inputAndPrintInteger() {
    cout << "skriv inn et tall \n";
    int n;
    cin >> n;
    cout << "du skrev " << n;
}

int inputInteger(){
    cout << "skriv inn et tall \n";
    int n;
    cin >> n;
    return n;
}

void inputIntegerAndPrintSum() {
    int a = inputInteger();
    int b = inputInteger();
    cout << "sum er " << a+b;
}

bool isOdd(int n){
    if (n % 2 == 0)
        return true;
    else 
        return false;
}

void sumNumbers() {
    cout << "skriv antall tall du vil summere";
    int n = inputInteger();
    for (int i; i < n; ++i){
        int sum;
        int a = inputInteger();
        sum += a;
        cout << "sum er: " << sum;
    }
}