/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 02		:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/13/19
 *****************************************************************************/

#include "deckClass.h"
/*
 * This program will create a deck object and output all cards in the deck object and
 * Perform enough perfect shuffles to return the deck to its original state.
*/
int main()
{
    int numShuffles = 0; //CALC - counts total cumber of shuffles
    deckClass deck1;     //CALC & OUT - first deck object 
    deckClass deck2;     //CALC - seccond deck object

    std::cout << "\ninitial deck:\n\n";
    deck1.printDeck();
    std::cout << "\nshuffling...\n\n";
    deck1.perfectShuffle();
    numShuffles++;
    deck1.printDeck();

    //loop exits once deck1 and deck2 are equivalant
    while(!deck1.compareDecks(deck2))
    {
        deck1.perfectShuffle();
        numShuffles++;
    }

    std::cout << "\nfinal deck:\n\n";
    deck1.printDeck();
    std::cout << "\nit took " << numShuffles << " shuffle(s) to restore deck\n\n"; 

    return 0;
}