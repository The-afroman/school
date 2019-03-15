/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Tick Tac Toe
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

/******************************************************************************
 * This function will initialize the board with a ' ' at every index of the array
 *----------------------------------------------------------------------------
 * INPUT:
 *          boardAR
 * OUTPUT:
 *          none
 *****************************************************************************/

#include "header.h"

void InitBoard(char boardAr[][3], const int AR_SIZE)
{
    int i;
    int j;

    i = 1;
    j = 1;

    for(i=0;i<AR_SIZE;i++)
    {
        for(j=0;j<3;j++)
        {
            boardAr[i][j] = ' ';
        }
    }
}