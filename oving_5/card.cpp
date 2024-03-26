#include "card.h"

string suitToString(Suit card){

const std::map<enum class Suit, string> suitToString{
    {Suit::clubs, "clubs"},
    {Suit::diamonds, "diamonds"},
    {Suit::hearts, "hearts"},
    {Suit::spades, "spades"}
    };  
    return suitToString.at(card);
}

string rankToString(Rank card){
    const std::map<enum class Rank, string> rankToString{
        {Rank::one, "one"},
        {Rank::two, "two"},
        {Rank::three, "three"},
        {Rank::four, "four"},
        {Rank::five, "five"},
        {Rank::six, "six"},
        {Rank::seven, "seven"},
        {Rank::eight, "eight"},
        {Rank::nine, "nine"},
        {Rank::ten, "ten"},
        {Rank::jack, "jack"},
        {Rank::queen, "queen"},
        {Rank::king, "king"},
        {Rank::ace, "ace"}
    };
    return rankToString.at(card);
}