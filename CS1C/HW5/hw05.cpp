#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <ctime>

const int NUM_SPACES = 51;
const int WINNERS = 6;

std::vector<int> Loto(int spaces, int winners)
{
    std::srand(unsigned(std::time(0)));
    std::vector<int> lotoVector;
    std::vector<int> winnersVector;
    
    // create initial vector of all spots
    for (int i = 0; i < spaces; i++)
        lotoVector.push_back(i+1);

    // shuffle spots
    std::random_shuffle(lotoVector.begin(), lotoVector.end());

    // make new vector for winners from shuffled vector
    for(int i = 0; i < winners; i++)
        winnersVector.push_back(lotoVector[i]);
    
    return winnersVector;
}

int main()
{
    std::vector<int> lotoV; 

    lotoV = Loto(NUM_SPACES, WINNERS);

    std::cout << "param vals: " << NUM_SPACES << ", " << WINNERS << std::endl;
    std::cout << "loto vector:";
    for (std::vector<int>::iterator it=lotoV.begin(); it!=lotoV.end(); ++it)
        std::cout << ' ' << *it;
    
    std::cout << std::endl;

    return 0;
}


