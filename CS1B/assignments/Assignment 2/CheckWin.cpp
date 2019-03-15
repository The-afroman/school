/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

/******************************************************************************
 * This function will check for win conditions based on the given state of the board
 * and output the token for the winner 'N' if it's a tie
 *----------------------------------------------------------------------------
 * INPUT:
 *          boardAr
 *          AR_SIZE
 * OUTPUT:
 *          winner
 *****************************************************************************/

#include "header.h"

char CheckWin(const char boardAr[][3], const int AR_SIZE) // IN - tic tac toe board
{
    bool win;
    int i;
    int j;
    char winner;

    i = 0;
    j = 0;

    win = false;

    if(boardAr[0][2] != ' ' && boardAr[1][1] != ' ' && boardAr[2][0] != ' ')
    {
        if(boardAr[0][2] == boardAr[1][1] && boardAr[1][1] == boardAr[2][0])
        {
            win = true;
            winner = boardAr[1][1];
        }
    
    }

    if(boardAr[0][0] != ' ' && boardAr[1][1] != ' ' && boardAr[2][2] != ' ')
    {
        if(boardAr[0][0] == boardAr[1][1] && boardAr[1][1] == boardAr[2][2])
        {
            win = true;
            winner = boardAr[0][0];
        }
    }

   

    while(!win && i < AR_SIZE)
    {
        if(boardAr[i][0] != ' ' && boardAr[i][1] != ' ' && boardAr[i][2] != ' ')
        {
            if(boardAr[i][0] == boardAr[i][1] && boardAr[i][1] == boardAr[i][2])
            {
                win = true;
                winner = boardAr[i][0];
            }
        }
        i++;
    }

    while(!win && j < AR_SIZE)
    {
        if(boardAr[0][j] != ' ' && boardAr[1][j] != ' ' && boardAr[2][j] != ' ')
        {
            if(boardAr[0][j] == boardAr[1][j] && boardAr[1][j] == boardAr[2][j])
            {
                win = true;
                winner = boardAr[0][j];
            }
            
        }
        j++;
    }

    if(!win)
    {
        winner = 'N';
    }

    return winner;
}