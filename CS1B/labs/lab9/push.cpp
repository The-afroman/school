#include "header.h"

void push(perNode *&head)
{
    perNode *perPtr;

    perPtr = new perNode;
    perPtr->next = head;
    head = perPtr;
    perPtr = NULL;

    cout << "\nwho would you like to add?\n\n";
    cout << left << setw(14) << "enter Name:";
    getline(cin, head->name);
    cout << setw(14) << "enter Gender:";
    cin.get(head->gender);
    cout << setw(14) << "enter Age:";
    cout << right;
    cin >> head->age;
    cout << endl;
}