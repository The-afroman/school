#include "header.h"

void isEmpty(perNode *&head)
{
    if(head == NULL)
    {
        cout << "Yes, the stack is empty";
    }
    else
    {
        cout << "The stack is NOT empty";
    }
    
}