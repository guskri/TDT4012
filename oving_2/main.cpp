#include "del_1.h"

int main() {
    cout << " skriv inn tall for oppgave \n";
    cout << " 1) input og print int \n";
    cout << " 2) input og return int \n";
    cout << " 3) input og return sum \n";
    cout << " 4) isOdd \n";
    cout << " 5) sum of numbers \n";

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
            for (int i; i < 15; ++i){
            cout << (isOdd(i) ? "true" : "false");
            }
        break;
        case 5:
            sumNumbers();
        break;
        default:
        cout << "feil inntast \n";
    }

    return 0;
}