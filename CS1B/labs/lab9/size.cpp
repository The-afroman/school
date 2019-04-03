#include"header.h"

int size(perNode *&head)
{
    perNode *ptr = head;
    int nodes = 0;

    while(ptr != NULL)
    {
        ptr = ptr->next;
        nodes++;
    }
    ptr = NULL;

    return nodes;
}