#include "deckClass.h"
/* Constructor */
deckClass::deckClass()
{
    const int suit_num = 4;
    const int rank_num = 13;
    int i = 0;

    for(int j = 0;j <= clubs;j++)
    {
        for(int k = 0;k <= ACE;k++)
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

void deckClass::printDeck()
{
    int i = 0;
    while(i < deck_size)
    {
        std::cout << std::endl;
        std::cout << deck.rank[i];
        std::cout << deck.suit[i];
        std::cout << std::endl;
        i++;
    }
}





