#include "header.h"

void inputfile(perNode *&head)
{
    ifstream infile;
    perNode *searchPtr;
    perNode *perPtr;
    perNode *tail;
    bool found = false;
    

    infile.open("input.txt");

    while(infile)
    {
        perPtr = new perNode;
        getline(infile, perPtr->name);
        infile.get(perPtr->gender);
        infile >> perPtr->age;
        infile.ignore(1000,'\n');
        infile.ignore(1000,'\n');
        
        searchPtr = NULL;
        //cout <<name<<endl<<gender<<endl<<age;
        if(head == NULL)
        {
            perPtr->next = head;
            perPtr->prev = NULL;
            head = perPtr;
            perPtr = NULL;
        }
        else if(head->name > perPtr->name)
        {
            perPtr->next = head;
            perPtr->prev = NULL;
            head->prev = perPtr;
            head = perPtr;
            perPtr = NULL;
        }
        else
        {
            searchPtr = head;
            found = false;
            while(searchPtr->next != NULL && !found)
            {
                if(searchPtr->next->name > perPtr->name)
                {
                    found = true;
                }
                else
                {
                    searchPtr = searchPtr->next;
                }
            }
            if(searchPtr->next == NULL)
            {
                tail = head;
                while(tail->next != NULL)
                {
                    tail = tail->next;
                }
                perPtr->next = NULL;
                perPtr->prev = tail;
                tail->next = perPtr;
                tail = perPtr;
                perPtr = NULL;
            }
            else
            {
                perPtr->next = searchPtr->next;
                perPtr->prev = searchPtr;
                searchPtr->next->prev = perPtr;
                searchPtr->next = perPtr;
                searchPtr = NULL;
                perPtr = NULL;
            }
        }
    }   
    infile.close();
}