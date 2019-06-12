#include <stdio.h>
#include <iostream>
#include <string>

class deckClass
{
    static const int deck_size = 52;
    typedef enum
    {
        ACE,
        KING,
        QUEEN,
        JACK,
        TEN,
        NINE,
        EIGHT,
        SEVEN,
        SIX,
        FIVE,
        FOUR,
        THREE,
        TWO
    }erank;

    typedef enum
    {
        clubs,
        diamonds,
        hearts,
        spades
    }esuit;

    
public:
    deckClass();
    ~deckClass();
 
    typedef struct
    {
        erank rank[deck_size];
        esuit suit[deck_size];
    }cards;

    void printDeck() const;
    bool compareDecks(const deckClass& otherDeck) const;
    cards makeCopy() const;
    void perfectShuffle();

private:
    cards deck; 
};

