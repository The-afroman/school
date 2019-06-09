#include <stdio.h>
#include <iostream>
#include <string>

class deckClass
{
public:
    deckClass();
    ~deckClass();

    void printDeck();
    void perfectShuffle();


private:
    static const int deck_size = 52;

    typedef enum
    {
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JOKER,
        KING,
        ACE
    }rank;

    typedef enum
    {
        spades,
        hearts,
        diamonds,
        clubs
    }suit;

    typedef struct
    {
        rank rank[deck_size];
        suit suit[deck_size];

    }cards;

    cards deck;
};

