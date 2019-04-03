#include "header.h"

void pop(perNode *&head)
{
    perNode *perPtr;
    if(head != NULL)
    {
        perPtr = head;
        head = perPtr->next;
        delete perPtr;
    }
    perPtr = NULL;
}