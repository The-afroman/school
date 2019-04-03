#include "header.h"

void peek(perNode *&head)
{
    if(head != NULL)
    {
        cout << "PEEKING AT\n";
        cout << left;
        cout << setw(14) << "Name:" << head->name << endl;
        cout << setw(14) << "Gender:" << head->gender << endl;
        cout << setw(14) << "Age:" << head->age << endl;
    }
}