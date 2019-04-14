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
    if(head!=NULL)
    {
        cout << endl;
        cout << left;
        cout << setw(3) << '#';
        cout << setw(25) << "NAME";
        cout << setw(7) << "GENDER";
        cout << "AGE\n";
        cout <<"-- ------------------------ ------ ---\n";
        perPtr = head;

        while(perPtr != NULL)
        {
            cout << setw(3) << i;
            cout << setw(25) << perPtr->name;
            cout << setw(7) << perPtr->gender;
            cout << perPtr->age;
            cout << endl;
            i++;
            perPtr = perPtr->next;
        }
    }
    else
    {
        cout << "\nCan't display an empty list!\n";
    }
    
}