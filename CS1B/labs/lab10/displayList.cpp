#include "header.h"

void displayList(perNode *&head)
{
    perNode *perPtr;
    int i = 1;
    if(head!=NULL)
    {
        cout << left;
        cout << setw(3) << '#';
        cout << setw(25) << "NAME";
        cout << setw(7) << "GENDER";
        cout << "AGE\n";
        cout <<"-- ------------------------ ------ ---\n";
        perPtr = head;

        while(perPtr != NULL)
        {
            cout << setw(3) << i;
            cout << setw(25) << perPtr->name;
            cout << setw(7) << perPtr->gender;
            cout << perPtr->age;
            cout << endl;
            i++;
            perPtr = perPtr->next;
        }
    }
}