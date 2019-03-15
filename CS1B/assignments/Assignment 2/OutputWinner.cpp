/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

/******************************************************************************
 * This function will out put the winner of the game
 *----------------------------------------------------------------------------
 * INPUT:
 *          whoWon
 *          playerX
 *          playerO
 * OUTPUT:
 *          winner to console
 *****************************************************************************/

#include "header.h"

void OutputWinner(char whoWon,    // IN - represents the winner or a value indicating a tied game.
				  string playerX, // OUT - player X's name
				  string playerO) // OUT - player O'x name)
{
    switch (whoWon)
    {
        case 'X':
            cout << endl << playerX << " won the game!\n\n";
            break;
        case 'O':
            cout << endl << playerO << " won the game!\n\n";
            break;
        case 'N':
            cout << "\nIt was a tie!\n\n";
            break;
    }
}