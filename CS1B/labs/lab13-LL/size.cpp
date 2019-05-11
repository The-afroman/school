/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
 *****************************************************************************/

/******************************************************************************
 * This function will find the size of list given head.
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of list
 * OUTPUT:
 *          nodes - number of nodes in list
 *****************************************************************************/

#include"header.h"

int size(perNode *&head)
{
    perNode *ptr = head; //CALC       - temp pointer
    int nodes = 0;       //CALC & OUT - num of nodes in list

    while(ptr != NULL)
    {
        ptr = ptr->next;
        nodes++;
    }
    ptr = NULL;

    return nodes;
}