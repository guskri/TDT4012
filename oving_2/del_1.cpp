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
    cout << "skriv antall tall du vil summere \n ";
    int n = inputInteger();
    cout << "skriv inn tall du vil summere\n";
    int sum = 0;
    for (int i = 0; i < n; ++i){

        int a = inputInteger();
        sum += a;

    }

    cout << "sum er: " << sum;
}

void intUntilZero() {
    int sum = 0;
    int tall= inputInteger();

    while (tall != 0){
    cout << "skriv 0 for stopp\n";

        sum += tall;

        tall = inputInteger();
    }

    cout << "sum er:" << sum;
}

double inputDouble() {
    cout << "skriv inn double: ";
    double n;
    cin >> n;
    return n;
}

void convertNOKToEUR(){
    cout << "skriv inn mengde nok som du vil konvertere \n";
    double nok = inputDouble();
    if (nok < 0){
        cout << "negativt tall, skriv inn på nytt\n";
        double nok = inputDouble();
        //convertNOKtoEUR(); rekursjon?
    }
    const double kurs = 9.75;
    double eur;
    eur = nok / 9.75;
    cout << "ditt beløp i euro blir: " << eur;
    // teori: bruker double fordi her bruker vi desimaltall, int vil alltid runde ned
}

void gangetabell() {
    cout << "skriv inn bredde så hoyde \n";
    int bredde,hoyde;
    cin >> bredde;
    cin >> hoyde;
    for (int i= 1; i <= bredde; ++i) {
        for (int j = 1; j <= hoyde; ++j){ 
        cout << i * j << "  "; //produkt rad
        }
          cout << "\n"; // nylinje   
    }
}