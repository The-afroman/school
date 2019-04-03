#include "header.h"

void getInput(int &menuOpt, perNode *&head)
{
    cin >> menuOpt;
    cin.ignore(100, '\n');

    switch (menuOpt)
    {
        case EXIT:
            break;
        case PUSH:   
            push(head);
            break;
        case POP:
            pop(head);
            break;
        case ISEMPTY:
            isEmpty(head);
            break;
        case PEEK:
            peek(head);
            break;
        case SIZE:
            cout << size(head);
            break;
    }
}