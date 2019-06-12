#include "deckClass.h"
/* Constructor */
deckClass::deckClass()
{
    int i = 0;

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

void deckClass::printDeck() const
{
    int i = 0;
    while(i < deck_size)
    {
        std::string outR;
        std::string outS;

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

void deckClass::perfectShuffle()
{
    cards shuffDeck;
    for(int i, j = 0; i < deck_size/2; i++, j+=2)
    {
        shuffDeck.rank[j] = deck.rank[i]; 
        shuffDeck.suit[j] = deck.suit[i];
        shuffDeck.rank[j+1] = deck.rank[i+deck_size/2]; 
        shuffDeck.suit[j+1] = deck.suit[i+deck_size/2];
    }
    deck = shuffDeck;
}

deckClass::cards deckClass::makeCopy() const
{return deck;}

bool deckClass::compareDecks(const deckClass& otherDeck) const
{
    cards deck2;
    bool decksEqual = true;
    int i = 0;
    deck2 = otherDeck.makeCopy();

    while(decksEqual && i < deck_size)
    {
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





