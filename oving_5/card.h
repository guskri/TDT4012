#pragma once
#include <iostream>
#include <map>
#include <string>
using namespace std;

enum class Suit {
            clubs,
            diamonds,
            hearts,
            spades
};

enum class Rank {
            one = 1,
            two,
            three,
            four,
            five,
            six,
            seven,
            eight,
            nine,
            ten,
            jack,
            queen,
            king,
            ace
};



string suitToString(Suit);



