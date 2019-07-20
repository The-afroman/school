#include <iostream>
#include <cassert>
template <typename T>
class queue
{
public:
    queue() // creates a queue with dynamically allocated array of maxSize
    {
        front = back = 0;
        pQueue = new T[maxSize];
    }
    ~queue() // dynimically allocated queue is deleted
    {
       delete [] pQueue;
    }
    void enqueue(T obj)
    {
        try{
        if(back >= maxSize)
        {
            std::cerr << "exception: out of bounds, tried to add to full queue\n\n";
            throw 1;
        }
        pQueue[back] = obj;
        back++;
        }
        
        catch(int)
            {back = maxSize-1;}
        
        
    }

    T dequeue() //from front
    {
        try{
            front++;
            if(back == front-1)
            {
                std::cout << "exception: the queue is empty can't dequeue\n\n";
                throw 2;
            }
            size--; //size decreases when item is dequeued, because queue is non circular
        }
        catch(int)
            {front--;}
                
        return(pQueue[front-1]);
    }

    T getFront() //returns from front
    {
        assert(!isEmpty());     //assert statement evals false when nothing in front
        return(pQueue[front]);
    }

    int getSize() //size of queue
    {
        return(size);
    }

    bool isEmpty()
    {
        return(front == back);
    }

    bool isFull()
    {
        return(back == maxSize);
    }
    
    void print()
    {
        if(isEmpty())
        {
            std::cout << "queue is empty\n\n";
        }
        else
        {
            for(int i = 0; i < back-front; i++)
                std::cout << "Item " << i+1 << ": " << pQueue[front+i] << std::endl;
            std::cout << std::endl;
        }
    }

private:
    T* pQueue;
    int front, back;
    int size = 36;
    const int maxSize = 36;
};

