#include "header.h"

void clearList(perNode *&head)
{
    perNode *perPtr;
    if(head != NULL)
    {
        perPtr = head;
        while(perPtr != NULL)
        {
            cout << "CLEARING LIST:\n";
            cout << "Removing " << perPtr->name << endl;
            head = perPtr->next;
            delete perPtr;
            perPtr = perPtr->next;
        }
    }
}