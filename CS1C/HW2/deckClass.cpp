#include "deckClass.h"
/* Constructor */
deckClass::deckClass()
{
    const int suit_num = 4;
    const int rank_num = 13;
    while(int i = 0 < deck_size)
    {
        for(int j = 0;j < clubs;j++)
        {
            for(int k = 0;k < ACE;k++)
            {
                deck.rank[i] = rank(k);
                deck.suit[i] = suit(j);
                i++;
            }
        } 
    }
}

/* Destructor */
deckClass::~deckClass()
{}


