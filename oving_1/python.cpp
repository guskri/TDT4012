#include "python.h"
#include <iostream>
#include <string>
using namespace std;

void triangleNumbersBelow(int n) {
    int acc = 1;
    int num = 2;
    std::cout << "Triangle numbers below" << n << ": ";
    while (acc < n){
        std::cout << acc << std::endl;
        acc += num;
        num += 1;
    }
}

bool isPrime(int n) {
    for (int i = 2; i < n; ++i) {
        if (n % i == 0)
        return false;
    }
    return true;
}

void naivePrimeNumberSearch(int n) {
    for (int number = 2; number < n; ++number) {
        if (isPrime(number)) {
            std::cout << number << " is a prime \n";
        }
    }
}

void inputAndPrintNameAndAge() {
    std::cout << "skriv inn navn og alder:";
    std::string name;
    int age;
    cin >> name;
    cin >> age;
    std::cout << "Ditt navn er " << name << "og du er" << age << " år gammel";
}

