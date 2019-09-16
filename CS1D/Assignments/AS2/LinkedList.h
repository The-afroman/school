/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 2 : Stacks
 * CLASS		: CS1D
 * SECTION 		: MW 5PM
 * DUE DATE		: 09/16/19
 *****************************************************************************/

#include <iostream>
#include <ostream>
#include <stack>

using std::cout;
using std::endl;

template <typename T>
class LinkedList
{
    struct node{ // node struct
        T data;
        node* back;
        node* next;
    };

    node* bottom = nullptr; // points to last item in list
    node* top = bottom; // points to first item in list
    node* nPtr = nullptr; // pointer for adding/traversing gets assigned to new nodes
    node* sPtr = nullptr; // pointer for searching through list
    int size = 0; // size of list

public:
    
    LinkedList(){}

    ~LinkedList(){
    if(top != nullptr){
        while(top != nullptr)
        {
            nPtr = top;
            top = nPtr->next;
            delete nPtr;
        }
        bottom = nullptr;
    }
    }

    void push(T i){ // adds new node to front
        nPtr = new node;
        nPtr->data = i;
        if(top != nullptr){ // handles non empty list
            {
                nPtr->next = top;
                nPtr->back = nullptr;
                nPtr->next->back = nPtr;
                top = nPtr;
            }
        }
        else{ // handles empty list
            nPtr->next = top;
            top = nPtr;
            nPtr->back = nullptr;
            bottom = nPtr;
            nPtr = nullptr;
        }
        size++;
        nPtr = nullptr;
    }

    void pushMid(T i){ // pushes to middle of list
        nPtr = new node;
        nPtr->data = i;
        sPtr = top;
        if(top != nullptr){ // pushes node to 1 after size/2 
            for(int i = 0; i < size/2; i++)
            {
               sPtr = sPtr->next;
            }
            nPtr->next = sPtr;
            sPtr->back->next = nPtr;
            nPtr->back = sPtr->back;
            sPtr->back = nPtr;
        }
        else{ // handles empty list
            nPtr->next = top;
            top = nPtr;
            nPtr->back = nullptr;
            nPtr = nullptr;
        }
        sPtr = nullptr;
        nPtr = nullptr;
        size++;
    }

    void pop_3rd(){ // removes 3rd node
        if(top->next->next->next != nullptr){
            nPtr = top->next->next->next;
            nPtr->back->next = nPtr->next;
            if(nPtr->next != nullptr)
                nPtr->next->back = nPtr->back;
            delete nPtr;
        }
        nPtr = nullptr;
    }

    void pop(){ // removes first node
        if(top != nullptr){
            nPtr = top;
            top = nPtr->next;
            delete nPtr;
        }
        nPtr = nullptr;
    }

    int getSize(){ // returns size
        return size;
    }

    void print(){
        if(top != nullptr){
            nPtr = top;
            while(nPtr != nullptr)
            {
                cout << nPtr->data << " ";
                nPtr = nPtr->next;
            }
            cout << endl;
        }
    }

    LinkedList(LinkedList& obj){ // copy constructor
        obj.nPtr = obj.bottom; // add from back of other list
        size = obj.size;
        while(obj.nPtr != nullptr)
        {
            nPtr = new node;
            nPtr->data = {obj.nPtr->data}; // copy data
            if(top != nullptr){ // add to front
                
                    this->nPtr->next = this->top;
                    this->nPtr->back = nullptr;
                    this->nPtr->next->back = this->nPtr;
                    this->top = this->nPtr;
                
            }
            else{ // handles empty list & add to front
                this->nPtr->next = this->top;
                this->top = this->nPtr;
                this->nPtr->back = nullptr;
                this->bottom = this->nPtr;
                nPtr = nullptr;
            }
            obj.nPtr = obj.nPtr->back; // next element by going back
        }
    }

    LinkedList &operator=(LinkedList& obj){ // copy assignment

        if(top != nullptr){ // delete all elems in current list
            while(top != nullptr)
            {
                nPtr = top;
                top = nPtr->next;
                delete nPtr;
            }
        }
        obj.nPtr = obj.bottom; // add from back of other list
        size = obj.size;
        while(obj.nPtr != nullptr)
        {
            nPtr = new node;
            nPtr->data = {obj.nPtr->data}; // copy data
            if(top != nullptr){
                
                    this->nPtr->next = this->top;
                    this->nPtr->back = nullptr;
                    this->nPtr->next->back = this->nPtr;
                    this->top = this->nPtr;
                
            }
            else{
                this->nPtr->next = this->top;
                this->top = this->nPtr;
                this->nPtr->back = nullptr;
                this->bottom = this->nPtr;
                nPtr = nullptr;
            }
            obj.nPtr = obj.nPtr->back; // go to next elem to copy 
        }
        return *this;
    }

    LinkedList &copyRev(LinkedList& obj){ // reverse copy

        if(top != nullptr){ // empty list if not empty
            while(top != nullptr)
            {
                nPtr = top;
                top = nPtr->next;
                delete nPtr;
            }
        }
        obj.nPtr = obj.top; // add starting from other top to get rev order
        size = obj.size;
        while(obj.nPtr != nullptr)
        {
            nPtr = new node;
            nPtr->data = {obj.nPtr->data}; // copy data
            if(top != nullptr){
                
                    this->nPtr->next = this->top;
                    this->nPtr->back = nullptr;
                    this->nPtr->next->back = this->nPtr;
                    this->top = this->nPtr;
                
            }
            else{
                this->nPtr->next = this->top;
                this->top = this->nPtr;
                this->nPtr->back = nullptr;
                this->bottom = this->nPtr;
                nPtr = nullptr;
            }
            obj.nPtr = obj.nPtr->next; // go to next elem in other list
        }
        return *this;
    }
};

std::ostream & operator<<(std::ostream & os, std::stack<double> my_stack) //function header
{
    while(!my_stack.empty()) //body
    {
        os << my_stack.top() << " ";
        my_stack.pop();
    }
    os << endl;
    return os; // end of function
}

std::ostream & operator<<(std::ostream & os, std::stack<std::string> my_stack) //function header
{
    while(!my_stack.empty()) //body
    {
        os << my_stack.top() << " ";
        my_stack.pop();
    }
    os << endl;
    return os; // end of function
}

