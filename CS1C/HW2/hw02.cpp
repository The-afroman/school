#include "deckClass.h"

int main()
{
    int numShuffles = 0;
    deckClass deck1;
    deckClass deck2;

    std::cout << "\ninitial deck:\n\n";
    deck1.printDeck();
    std::cout << "\nshuffling...\n\n";
    deck1.perfectShuffle();
    deck1.printDeck();

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