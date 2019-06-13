/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 02		:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/13/19
 *****************************************************************************/

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

    /* ACCESSORS*/
    void printDeck() const;
    bool compareDecks(const deckClass& otherDeck) const;
    cards makeCopy() const;
    
    /* MUTATORS */
    void perfectShuffle();

private:
    cards deck; 
};

