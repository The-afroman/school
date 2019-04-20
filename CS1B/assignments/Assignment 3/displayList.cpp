/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

/******************************************************************************
 * This function will display contents of a linked list
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of linked list
 * OUTPUT:
 *          the contents of linked list to console
 *****************************************************************************/

#include "header.h"

void displayList(perNode *&head)
{
    perNode *perPtr; //CALC - pointer to display nodes in list 
    int i = 1;
    perPtr = head;
    while(perPtr != NULL) //MAIN LOOP
    {
        //getInput(menuOpt, head, ofile);
        cout << perPtr->title << endl;
        cout << perPtr->lActor << endl;
        cout << perPtr->sActor << endl;
        cout << perPtr->genre << endl;
        cout << perPtr->sGenre << endl;
        cout << perPtr->year << endl;
        cout << perPtr->rating << endl;
        cout << endl;
        perPtr = perPtr->next;
    }
    
}