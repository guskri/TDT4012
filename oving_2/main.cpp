#include "del_1.h"
#include "grafikk.h"

int main() {
    cout << " skriv inn tall for oppgave \n";
    cout << " 1) input og print int \n";
    cout << " 2) input og return int \n";
    cout << " 3) input og return sum \n";
    cout << " 4) isOdd \n";
    cout << " 5) sum of numbers \n";
    cout << " 6) int until zero \n";
    cout << " 7) convertNOKToEUR() \n";
    cout << " 8) gangetabell \n";
    cout << " 9) andregreadslgning \n";
    cout << " 10) pythagoras \n";
    cout << " 11) renter \n";


    int n = 0;
    cin >> n;

    switch (n) {
        case 1:
            inputAndPrintInteger();
        break;
        case 2:
            n = inputInteger();
            cout << " du skrev: " << n;
        break;
        case 3:
            inputIntegerAndPrintSum();
        break;
        case 4:
            for (int i = 0; i < 15; ++i){
            cout << (isOdd(i) ? "true" : "false");
            }
        break;
        case 5:
            sumNumbers();
        break;
        case 6:
            intUntilZero();
        break;
        case 7:
            convertNOKToEUR();
        break;
        case 8:
            gangetabell();
        break;
        case 9:
            solveQuadraticEquation();
        break;
        case 10:
            pythagoras();
        break;
        case 11: {
            vector<int> resultat1 = calculateBalance();
            printBalance(resultat1);
        }
        break;
        default:
        cout << "feil inntast \n";
    }

    return 0;
}