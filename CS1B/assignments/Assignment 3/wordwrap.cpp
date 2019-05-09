/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will word wrap a string to the specified MAX length
 *----------------------------------------------------------------------------
 * INPUT:
 *          searchPtr - node where string to wrap is
 *          output    - output device to use
 * OUTPUT:
 *          word wrapped string
 *****************************************************************************/
#include "header.h"

void wordWrap(ostream &output, movNode *&searchPtr)
{
    const int MAX = 75;
    int i;
    int j;
    string word;
    string line;
    for(i=0;i < searchPtr->synopsis.size();i++)
    {
        if(searchPtr->synopsis[i] != ' ')
        {
            word += searchPtr->synopsis[i];
        }
        else
        {
            if (word.size() + line.size() > MAX)
            {
                output << line;
                output << endl;
                line.clear();
            }
            line += word + ' ';
            word.clear();
        }
        if(i == searchPtr->synopsis.size()-1)
        {
            output << line << word << endl;
        }
    }
}