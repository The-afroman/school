/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Stacks
 * CLASS		: CS1D
 * SECTION 		: MW 5PM
 * DUE DATE		: 09/16/19
 *****************************************************************************/
\
/*
deque, queue, stack assignment
create, pop and pop_back from LinkedLists
*/


#include "LinkedList.h"

using std::cout;
using std::string;

int main()
{
    LinkedList<string> slStack;
    LinkedList<double> dlStack;


    dlStack.push_back(983.3);
    dlStack.push_back(44.44);
    dlStack.push_back(888.55);
    dlStack.push_back(99.99);
    dlStack.push_back(123.123);
    dlStack.push_back(8.445);

    slStack.push_back("Mark");
    slStack.push_back("Alan");
    slStack.push_back("Jennifer");
    slStack.push_back("Sony");
    slStack.push_back("Eric");
    slStack.push_back("JoAnn");
    slStack.push_back("Bill");

    cout << "\n***PART A***\n";
    /* BEFORE POP */
    cout << "Before pop:\n";
    // print doubles
    dlStack.print();
    // print strings
    slStack.print();
    cout << "\n***PART B***\n";
    // pop until Sonny removed
    slStack.pop();
    slStack.pop();
    slStack.pop();
    slStack.pop();
    // pop until 99.99 removed
    dlStack.pop();
    dlStack.pop();
    dlStack.pop();
    dlStack.pop();
    
    /* AFTER POP */
    cout << "After pop:\n";
    // print doubles
    dlStack.print();
    // print strings
    slStack.print();

    LinkedList<string> sdStack;
    LinkedList<double> ddStack;

    ddStack.push(983.3);
    ddStack.push(44.44);
    ddStack.push(888.55);
    ddStack.push(99.99);
    ddStack.push(123.123);
    ddStack.push(8.445);

    sdStack.push("Mark");
    sdStack.push("Alan");
    sdStack.push("Jennifer");
    sdStack.push("Sony");
    sdStack.push("Eric");
    sdStack.push("JoAnn");
    sdStack.push("Bill");

    cout << "\n***PART C***\n";
    /* BEFORE POP */
    cout << "Before pop:\n";
    // print doubles
    ddStack.print();
    // print strings
    sdStack.print();
    cout << "\n***PART D***\n";
    // pop until Sonny removed
    sdStack.pop();
    sdStack.pop();
    sdStack.pop();
    sdStack.pop();
    // pop until 99.99 removed
    ddStack.pop_back();
    ddStack.pop_back();
    ddStack.pop_back();
    ddStack.pop_back();
    
    /* AFTER POP */
    cout << "After pop:\n";
    // print doubles
    ddStack.print();
    // print strings
    sdStack.print();


}