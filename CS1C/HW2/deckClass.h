#include <stdio.h>
#include <iostream>
#include <string>

class deckClass
{
public:
    deckClass();
    ~deckClass();

    void printDeck();
    bool compareDecks(const deckClass& otherDeck) const;
    void perfectShuffle();
    static const int deck_size = 52;

private:
    

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
        QUEEN,
        KING,
        ACE
    }erank;

    typedef enum
    {
        spades,
        hearts,
        diamonds,
        clubs
    }esuit;

    typedef struct
    {
        erank rank[deck_size];
        esuit suit[deck_size];

    }cards;

    cards deck; 
};

