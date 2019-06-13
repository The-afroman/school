/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 02		:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/13/19
 *****************************************************************************/
#ifndef DECK_CLASS
#define DECK_CLASS
#include "deckClass.h"

/* Constructor */
/* will initialze a deck of 52 unique cards one suit at a time in decending rank*/
deckClass::deckClass()
{
    int i = 0; //CALC - incriments after rank and suit are set

    for(int j = 0;j <= spades;j++)
    {
        for(int k = 0;k <= TWO;k++)
        {
            deck.rank[i] = erank(k);
            deck.suit[i] = esuit(j);
            i++;
        }
    } 
    
}

/* Destructor */
deckClass::~deckClass()
{}

/* will print out all cards in deck data member to console */
void deckClass::printDeck() const
{
    int i = 0;        //CALC - LCV in while loop
    std::string outR; //OUT - used to output rank string 
    std::string outS; //OUT - used to output suit string
    while(i < deck_size)
    {
        switch(deck.rank[i])
        {
            case TWO: outR = "Two"; break;
            case THREE: outR = "Three"; break;
            case FOUR: outR = "Four"; break;
            case FIVE: outR = "Five"; break;
            case SIX: outR = "Six"; break;
            case SEVEN: outR = "Seven"; break;
            case EIGHT: outR = "Eight"; break;
            case NINE: outR = "Nine"; break;
            case TEN: outR = "Ten"; break;
            case JACK: outR = "Jack"; break;
            case QUEEN: outR = "Queen"; break;
            case KING: outR = "King"; break;
            case ACE: outR = "Ace"; break;
        }

        switch(deck.suit[i])
        {
            case spades: outS = "spades"; break;
            case hearts: outS = "hearts"; break;
            case diamonds: outS = "diamonds"; break;
            case clubs: outS = "clubs"; break;
        }
        std::cout << outR << " of ";
        std::cout << outS;
        std::cout << std::endl;
        i++;
    }
}

/* performs one perfect shuffle on deck data member */
void deckClass::perfectShuffle()
{
    cards shuffDeck; //CALC - stores shuffled deck to be coppied to main deck
    for(int i = 0, j = 0; i < deck_size/2; i++, j+=2)
    {
        shuffDeck.rank[j] = deck.rank[i]; 
        shuffDeck.suit[j] = deck.suit[i];
        shuffDeck.rank[j+1] = deck.rank[i+deck_size/2]; 
        shuffDeck.suit[j+1] = deck.suit[i+deck_size/2];
    }
    deck = shuffDeck;
}

/*returns a copy of the deck data member*/
deckClass::cards deckClass::makeCopy() const
{return deck;}

/* returns a bool t/f if decks are equal or not */
bool deckClass::compareDecks(const deckClass& otherDeck) const
{
    cards deck2;            //CALC - struct to make coppy of deck being compared
    bool decksEqual = true; //CALC & OUT - stays true if decks are equ.
    int i = 0;              //CALC - LCV in whil/e loop

    //copy cards struct of other deck into deck2
    deck2 = otherDeck.makeCopy();

    while(decksEqual && i < deck_size)
    {
        //compare deck elements
        if(deck2.rank[i] == deck.rank[i] && deck2.suit[i] == deck.suit[i])
        {
            i++;
        }
        else
        {
            decksEqual = false;
        }
    }

    return decksEqual;
}
#endif