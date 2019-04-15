/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

/******************************************************************************
 * This function will get names, ages, genders from an infile and create a 
 * doubly linked list which is alphabetized.
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of the new list
 * OUTPUT:
 *          ordered linked list
 *****************************************************************************/

#include "header.h"

void inputfile(perNode *&head)
{
    ifstream infile;     //IN   - inputfile variable
    perNode *searchPtr;  //CALC - searching ptr, for adding to middle of list
    perNode *perPtr;     //CALC - ptr to keep track of new nodes
    perNode *tail;       //CALC - for finding tail of list
    bool found = false;  //CALC - determine if location to add to middle found
    

    infile.open("input.txt");

    cout << endl;

    while(infile)
    {
        perPtr = new perNode;
        getline(infile, perPtr->name);
        infile.get(perPtr->gender);
        infile >> perPtr->age;
        infile.ignore(1000,'\n');
        infile.ignore(1000,'\n');

        cout << "Adding : " << perPtr->name << endl;
        
        searchPtr = NULL;
        if(head == NULL)
        {
            perPtr->next = head;
            perPtr->prev = NULL;
            head = perPtr;
            perPtr = NULL;
        }
        else if(head->name > perPtr->name)
        {
            perPtr->next = head;
            perPtr->prev = NULL;
            head->prev = perPtr;
            head = perPtr;
            perPtr = NULL;
        }
        else
        {
            searchPtr = head;
            found = false;
            while(searchPtr->next != NULL && !found)
            {
                if(searchPtr->next->name > perPtr->name)
                {
                    found = true;
                }
                else
                {
                    searchPtr = searchPtr->next;
                }
            }
            if(searchPtr->next == NULL)
            {
                tail = head;
                while(tail->next != NULL)
                {
                    tail = tail->next;
                }
                perPtr->next = NULL;
                perPtr->prev = tail;
                tail->next = perPtr;
                tail = perPtr;
                perPtr = NULL;
            }
            else
            {
                perPtr->next = searchPtr->next;
                perPtr->prev = searchPtr;
                searchPtr->next->prev = perPtr;
                searchPtr->next = perPtr;
                searchPtr = NULL;
                perPtr = NULL;
            }
        }
    }   
    infile.close();
}