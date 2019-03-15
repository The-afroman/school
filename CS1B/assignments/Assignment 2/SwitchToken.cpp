/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

/******************************************************************************
 * This function will switch the player token X or O after every round
 *----------------------------------------------------------------------------
 * INPUT:
 *          token
 * OUTPUT:
 *          none
 *****************************************************************************/

#include "header.h"

char SwitchToken(char token) // IN - current player's token ('X' or 'O')
{
    if(token == 'X')
    {
        token = 'O';
    }
    else
    {
        token = 'X';
    }
    return token;
}