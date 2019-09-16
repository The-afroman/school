/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Stacks
 * CLASS		: CS1D
 * SECTION 		: MW 5PM
 * DUE DATE		: 09/16/19
 *****************************************************************************/

#include "LinkedList.h"

using std::cout;
using std::stack;
using std::string;


string parseParenthesis(string s)
{
    string o;
    for (int i=0; i<s.length(); i++) 
    {
        if (s[i]=='('||s[i]=='['||s[i]=='{'||s[i]==')'||s[i]==']'||s[i]=='}') 
        { 
            o+=s[i];
        } 
    }
    return o;
}

// check if paranthesis are balanced 
bool ParanthesisCheck(string expr) 
{
    stack<char> s; 
    char x; 

    expr = parseParenthesis(expr);

    // Traversing the Expression 
    for (int i=0; i<expr.length(); i++) 
    {
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            // Push the element
            s.push(expr[i]); 
            continue; 
        } 

        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
        return false; 

        switch (expr[i]) 
        { 
        case ')': 

            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 

        case '}': 

            // Store the top element in b 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 

        case ']': 

            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 

    // Check Empty Stack 
    return (s.empty()); 
}

int main()
{
    stack<string> sStack; //{"Mark", "Alan", "Jennifer", "Sonny", "Eric", "JoAnn", "Bill"};
    stack<double> dStack; //{983.3, 44.44, 888.55, 99.99, 123.123, 8.445}
    LinkedList<string> slStack;
    LinkedList<double> dlStack;

    dStack.push(983.3);
    dStack.push(44.44);
    dStack.push(888.55);
    dStack.push(99.99);
    dStack.push(123.123);
    dStack.push(8.445);

    sStack.push("Mark");
    sStack.push("Alan");
    sStack.push("Jennifer");
    sStack.push("Sony");
    sStack.push("Eric");
    sStack.push("JoAnn");
    sStack.push("Bill");

    dlStack.push(983.3);
    dlStack.push(44.44);
    dlStack.push(888.55);
    dlStack.push(99.99);
    dlStack.push(123.123);
    dlStack.push(8.445);

    slStack.push("Mark");
    slStack.push("Alan");
    slStack.push("Jennifer");
    slStack.push("Sony");
    slStack.push("Eric");
    slStack.push("JoAnn");
    slStack.push("Bill");
    cout << "STL STACK:\n\n";
    cout << "\n***PART A***\n";
    /* BEFORE POP */
    cout << "Before pop:\n";
    // print doubles
    cout << dStack;
    // print strings
    cout << sStack;

    cout << "\n***PART B***\n";
    // pop until Sonny removed
    sStack.pop();
    sStack.pop();
    sStack.pop();
    sStack.pop();
    // pop until 99.99 removed
    dStack.pop();
    dStack.pop();
    dStack.pop();
    
    /* AFTER POP */
    cout << "After pop:\n";
    // print doubles
    cout << dStack;
     // print strings
    cout << sStack;
    
    cout << "\n\nCUSTOM STACK:\n\n";
    cout << "\n***PART C***\n";
    /* BEFORE POP */
    cout << "Before pop:\n";
    // print doubles
    dlStack.print();
    // print strings
    slStack.print();
    cout << "\n***PART D***\n";
    // pop until Sonny removed
    slStack.pop();
    slStack.pop();
    slStack.pop();
    slStack.pop();
    // pop until 99.99 removed
    dlStack.pop();
    dlStack.pop();
    dlStack.pop();
    
    /* AFTER POP */
    cout << "After pop:\n";
    // print doubles
    dlStack.print();
    // print strings
    slStack.print();

    cout << "\n***PART E***\n";
    cout << "\n0 for false 1 for true:\n\n";
    /*
        TESTS:
            a.  {2x - 8) (12x + 6)
            b. {{8x+5) - 5x[9x+3]})
            c.  {2x + 5} (6x+4) 
            d.  (((4x+8) - x[4x+3])))
            e.  [(5x - 5) - 4x[6x + 2]]
            f.  {(8x+5) - 6x[9x+3]]
            g.  (12x + 6) (2x - 4) 
    */

   cout << "TEST a: " << ParanthesisCheck("{2x - 8) (12x + 6)") << endl;
   cout << "TEST b: " << ParanthesisCheck("{{8x+5) - 5x[9x+3]})") << endl;
   cout << "TEST c: " << ParanthesisCheck("{2x + 5} (6x+4)") << endl;
   cout << "TEST d: " << ParanthesisCheck("(((4x+8) - x[4x+3])))") << endl;
   cout << "TEST e: " << ParanthesisCheck("[(5x - 5) - 4x[6x + 2]]") << endl;
   cout << "TEST f: " << ParanthesisCheck("{(8x+5) - 6x[9x+3]]") << endl;
   cout << "TEST g: " << ParanthesisCheck("(12x + 6) (2x - 4)") << endl;







}