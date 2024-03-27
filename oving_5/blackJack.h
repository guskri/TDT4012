#pragma once
#include "card.h"
#include "cardDeck.h"


class Blackjack{
    private:

    CardDeck deck; //klassen som inneholder funksjoner som shufle og drawcard

    vector<Card> playerHand;
    vector<Card> dealerHand;
    int playerHandSum;
    int dealerHandSum;

    public:
     //konstrukt
    Blackjack();
    // medlem
    bool isAce(Card& card);
    int getHandScore(vector<Card>& hand);
    int getCardValue(Card& card);
    bool askPlayerDrawCard();
    void drawPlayerCard();
    void drawDealerCard();
    void playGame();
};