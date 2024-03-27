#include "card.h"
#include "cardDeck.h"
#include <random>

CardDeck::CardDeck() {
    // fylle CardDeck med 52 riktige kort
    for (int suit = static_cast<int>(Suit::clubs); suit <= 4; suit++) {
        for (int rank = static_cast<int>(Rank::two); rank <= 14; rank++){
            cards.push_back(Card(static_cast<Suit>(suit), static_cast<Rank>(rank)));
        }
    }
}

//funksjon for å printe korstokken
void CardDeck::print() {
    for (int i = 0; i < cards.size(); i++){
        cout << cards[i].toString() << endl;
    }
}

// funksjon for å stokke kort
void CardDeck::shuffle() { 
    

    random_device rd;
    // default_random_engine generator(rd());
    mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(0,cards.size()-1);
    std::shuffle(cards.begin(), cards.end(), generator);

    /*for(int i = 0; i < cards.size(); i++){
        int random = distribution(generator);

        Card temp = cards[i];
        cards[i] = cards[random];
        cards[random]= temp;
    }
*/
}

 Card CardDeck::drawCard(){
    random_device rd;
    // default_random_engine generator(rd());
    mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(0,cards.size()-1);
    std::shuffle(cards.begin(), cards.end(), generator);

    Card trektkort = cards[cards.size()-1];

    cards.pop_back();
    /*cards.resize(cards.size()-1);*/

    cout << "Ditt trekte kort er " << trektkort.toString() << endl;
    return trektkort;
} 