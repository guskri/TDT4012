#pragma once
#include "std_lib_facilities.h"
#include <map>
#include <string>

enum class Suit { clubs = 1 , diamonds , hearts , spades};
enum class Rank {two = 2, three , four, five , six , seven , eight , nine , ten , jack , queen , king , ace};

string suitToString(Suit suit);
string rankToString(Rank rank);

class Card {
private:
    Suit s;
    Rank r;

public:
   Card(Suit suit, Rank rank); // konstruktør
   
string toString();

Suit getSuit() {
    return s;
}
Rank getRank() {
    return r;
}
};