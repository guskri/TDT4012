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

double discriminant(double a, double b, double c) {
    return pow(b,2)-(4*a*c); //b**2 -4ac
}

void printRealRoots(double a, double b, double c){
    if (discriminant(a,b,c) > 0) {
        cout << "2 løsninger: \n";
        double x1 = (-b + sqrt(discriminant(a,b,c)))/2*a;
        double x2 = (-b - sqrt(discriminant(a,b,c)))/2*a;
        cout << "rot1: " << x1 << "rot2: " << x2;
    }  else if (discriminant(a,b,c) == 0) {
        cout << "1 løsning: \n";
        double x3 = (-b + sqrt(discriminant(a,b,c)))/2*a;
        cout << x3;
    } else {
        cout << "ingen løsning";
    }
}

void solveQuadraticEquation(){
    cout << "skriv inn 3 desimaltall du vil løse (x**2 +bx +c) \n";
    double a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    return printRealRoots(a,b,c);
}

vector<int> calculateBalance(){
    int rente,inskudd,aar;
    cout << "skriv inn renten (heltall): \n";
    cin >> rente;
    cout << "legg inn inskudd: \n";
    cin >> inskudd;
    cout << "antall aar: \n";
    cin >> aar;
    vector<int> resultat{}; // starter med tom vektor

    for (int i = 0; i < aar; ++i){
        int balanse = static_cast<int>(inskudd * pow(1 + static_cast<double>(rente) / 100, i));
        resultat.push_back(balanse);
    }

    return resultat;
}

void printBalance(vector<int> resultat){
    cout << "år   saldo \n";
    for (int i = 0; i < resultat.size(); ++i){
        cout << i << "    "<< resultat.at(i) << "\n";
    }
}

