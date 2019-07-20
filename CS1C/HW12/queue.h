#include <iostream>

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
        if(!isFull())
        {
            pQueue[back] = obj;
            back++;
        }
        else
        {
            std::cout << "the queue is full can't enqueue\n\n";
        }
        
    }

    T dequeue() //from front
    {
        if(!isEmpty())
        {
            front++;
            size--; //size decreases when item is dequeued, because queue is non circular
        }
        else
        {
            std::cout << "the queue is empty can't dequeue\n\n";
        }
        return(pQueue[front-1]);
        
    }

    T getFront() //returns from front
    {
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

