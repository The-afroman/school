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
    string infileName;
    
    cout << "which input file would you like to use (d for default) ?: ";
    getline(cin, infileName);
    if(infileName == "d")
    {
        infileName = "infile.txt";
    }
    infile.open(infileName);

    cout << endl;

    while(infile)
    {
        perPtr = new perNode;
        getline(infile, perPtr->title);
        getline(infile, perPtr->lActor);
        getline(infile, perPtr->sActor);
        getline(infile, perPtr->genre);
        getline(infile, perPtr->sGenre);
        infile >> perPtr->year;
        infile.ignore(1000, '\n');
        infile >> perPtr->rating;
        infile.ignore(1000, '\n');
        getline(infile, perPtr->synopsis);
        infile.ignore(1000, '\n');

        cout << "Adding : " << perPtr->title << endl;
        
        searchPtr = NULL;
        perPtr->next = head;
        head = perPtr;
        perPtr = NULL;
    }
    infile.close();
}