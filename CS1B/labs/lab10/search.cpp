#include "header.h"

void searchNode(perNode *&head,
                perNode *&searchPtr,
                string search)
{
    searchPtr = head;
    bool found = false;

    while(!found  && searchPtr != NULL)
    {
        if(searchPtr->name == search)
        {
            found = true;
        }
        else
        {
            searchPtr = searchPtr->next;
        }
    }
}