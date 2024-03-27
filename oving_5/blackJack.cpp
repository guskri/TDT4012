#include "blackJack.h"
#include "card.h"
#include "cardDeck.h"
#include <iostream>
#include <string>
#include <vector>

bool Blackjack::isAce(Card& card) {
    return card.getRank() == Rank::ace;
}

int Blackjack::getCardValue(Card& card) {
    Rank verdi = card.getRank();
    if (isAce(card)) {
        return 11; 
    } else if (verdi >= Rank::jack && verdi <= Rank::king) {
        return 10;
    } else {
        return static_cast<int>(verdi);
    }
}

int Blackjack::getHandScore(vector<Card>& hand) {
    int sum = 0;
    int aceCount = 0;

    for (Card card : hand) {
        if (isAce(card)) {
            aceCount += 1;
            sum += 11;
        } else {
            sum += getCardValue(card);
        }
    }

    while (sum > 21 && aceCount > 0) {
        sum -= 10;
        aceCount -= 1;
    }

    return sum;
}

Blackjack::Blackjack() {
}


bool Blackjack::askPlayerDrawCard() {
    std::cout << "Nytt kort? Skriv ja for nytt kort" << std::endl;
    std::string svar;
    std::cin >> svar;
    return svar == "ja";
}

void Blackjack::drawPlayerCard() {
    Card nykort = deck.drawCard();
    playerHand.push_back(nykort);
    playerHandSum = getHandScore(playerHand);
}
void Blackjack::drawDealerCard() {
    Card nykort1 = deck.drawCard();
    dealerHand.push_back(nykort1);
    dealerHandSum = getHandScore(dealerHand);
}

void Blackjack::playGame() {
    CardDeck deck;


    deck.shuffle();
    deck.print();

    // trekking av kort første runde
    drawPlayerCard(); 
    drawPlayerCard();

    cout << "din hand: " << playerHandSum << endl;
    drawDealerCard();
    cout << "dealer hand " << dealerHandSum << endl;


    // spiller sin tur
    while (playerHandSum <= 21 && askPlayerDrawCard()) {
        drawPlayerCard();
    cout << "din hand: " << playerHandSum << endl;
    }
    // dealer



    while (dealerHandSum < 17) {
        drawDealerCard();
        cout << "Dealer's hand: " << dealerHandSum << endl;
 
    }   
        cout << "resultat" << endl;
        cout << "din hand: " << playerHandSum << endl;
        cout << "Dealer hand: " << dealerHandSum << endl;

if (playerHandSum > 21) {
        cout << "bust , dealer vinner." << endl;
    } else if (dealerHandSum > 21) {
        cout << "Dealer bust. Du winner" << std::endl;
    } else if (playerHandSum > dealerHandSum) {
        cout << "You win!" << endl;
    } else if (dealerHandSum > playerHandSum) {
        cout << "Dealer vinner." << endl;
    } else {
        cout << "uanvgjort" << endl;
    }
}