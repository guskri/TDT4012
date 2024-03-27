#include "card.h"
#include "blackJack.h"

map<Suit, string>

suitToStringMap = {
    {Suit::clubs, "Clubs"},
    {Suit::diamonds, "diamonds" },
    {Suit::hearts , "hearts"},
    {Suit::spades, "spades" }
};

map<Rank, string>

rankToStringMap = {
    {Rank::two, "two"},
    {Rank::three, "three"},
    {Rank::four, "four"},
    {Rank::five, "five"},
    {Rank::six, "six"},
    {Rank::seven,"seven"},
    {Rank::eight, "eight"},
    {Rank::nine, "nine"},
    {Rank::ten, "ten"},
    {Rank::jack, "jack"},
    {Rank::queen, "queen"},
    {Rank::king, "king"},
    {Rank::ace, "ace"},
 };

string suitToString(Suit suit){
    return suitToStringMap.at(suit);
}

string rankToString(Rank rank){
    return rankToStringMap.at(rank);
}

Card::Card(Suit suit, Rank rank) : s(suit), r(rank){
    
}

string Card::toString() {
    return rankToString(r) + " of " + suitToString(s);
}