#pragma once
#include "card.h"
#include <vector>
#include <utility>
#include <iostream>
#include <random>
using namespace std;

class CardDeck{
private:
vector<Card> cards;

void swap(int a, int b){
    std::swap(cards[a], cards[b]);
}
public:
// konstruktør
CardDeck();

void print();
void shuffle();
Card drawCard();
};