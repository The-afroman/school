#include "queue.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{

    queue<int> qI;
    queue<double> qD;
    queue<std::string> qS;
    /* test isEmpty */
    if(qI.isEmpty())
    {
        cout << "\nqI queue is empty\n";
    }
    else
    {
        cout << "\nqI queue is full\n";
    }
    
    if(qD.isEmpty())
    {
        cout << "\nqD queue is empty\n";
    }
    else
    {
        cout << "\nqD queue is full\n";
    }

    if(qS.isEmpty())
    {
        cout << "\nqS queue is empty\n\n";
    }
    else
    {
        cout << "\nqS queue is full\n\n";
    }
    
    /* test int */
    
    qI.enqueue(10);
    qI.print();
    qI.enqueue(11);
    qI.print();
    qI.enqueue(12);
    qI.print();
    qI.enqueue(13);
    qI.print();
    qI.enqueue(14);
    qI.print();
    qI.enqueue(15);
    qI.print();

    cout << "dequeued: " << qI.dequeue() << endl;
    qI.print();
    cout << "dequeued: " << qI.dequeue() << endl;
    qI.print();
    cout << "dequeued: " << qI.dequeue() << endl;
    qI.print();
    cout << "dequeued: " << qI.dequeue() << endl;
    qI.print();

    qI.enqueue(16);
    qI.print();
    qI.enqueue(17);
    qI.print();
    qI.enqueue(18);
    qI.print();
    qI.enqueue(19);
    qI.print();
    qI.enqueue(20);
    qI.print();

    qI.dequeue();
    qI.dequeue();
    qI.dequeue();
    qI.dequeue();
    qI.dequeue();
    qI.dequeue();
    qI.dequeue();

    int sizeI = qI.getSize();
    for(int i = 0; i< sizeI; i++)
    {
        qI.enqueue(i);
    }
    qI.print();
    if(qI.isFull())
    {
        cout << "queue qI is full\n\n";
    }
    for(int i = 0; i < sizeI; i++)
    {
        qI.dequeue();
    }
    qI.dequeue();
    

    /* test double */

    qD.enqueue(10.01);
    qD.print();
    qD.enqueue(11.01);
    qD.print();
    qD.enqueue(12.01);
    qD.print();
    qD.enqueue(13.01);
    qD.print();
    qD.enqueue(14.01);
    qD.print();
    qD.enqueue(15.01);
    qD.print();

    cout << "dequeued: " << qD.dequeue() << endl;
    qD.print();
    cout << "dequeued: " << qD.dequeue() << endl;
    qD.print();
    cout << "dequeued: " << qD.dequeue() << endl;
    qD.print();
    cout << "dequeued: " << qD.dequeue() << endl;
    qD.print();

    qD.enqueue(16.01);
    qD.print();
    qD.enqueue(17.01);
    qD.print();
    qD.enqueue(18.01);
    qD.print();
    qD.enqueue(19.01);
    qD.print();
    qD.enqueue(20.01);
    qD.print();

    qD.dequeue();
    qD.dequeue();
    qD.dequeue();
    qD.dequeue();
    qD.dequeue();
    qD.dequeue();
    qD.dequeue();


    int sizeD = qD.getSize();
    for(int i = 0; i < sizeD; i++)
    {
        qD.enqueue(i+0.01);
    }
    qD.print();
    qD.enqueue(11.11);
    if(qD.isFull())
    {
        cout << "queue qD is full\n\n";
    }
    for(int i = 0; i <sizeD; i++)
    {
        qD.dequeue();
    }
    qD.dequeue();

    /* test string */

    qS.enqueue("str #1");
    qS.print();
    qS.enqueue("str #2");
    qS.print();
    qS.enqueue("str #3");
    qS.print();
    qS.enqueue("str #4");
    qS.print();
    qS.enqueue("str #5");
    qS.print();
    qS.enqueue("str #6");
    qS.print();

    cout << "dequeued: " << qS.dequeue() << endl;
    qS.print();
    cout << "dequeued: " << qS.dequeue() << endl;
    qS.print();
    cout << "dequeued: " << qS.dequeue() << endl;
    qS.print();
    cout << "dequeued: " << qS.dequeue() << endl;
    qS.print();

    qS.enqueue("str #7");
    qS.print();
    qS.enqueue("str #8");
    qS.print();
    qS.enqueue("str #9");
    qS.print();
    qS.enqueue("str #10");
    qS.print();
    qS.enqueue("str #11");
    qS.print();

    qS.dequeue();
    qS.dequeue();
    qS.dequeue();
    qS.dequeue();
    qS.dequeue();
    qS.dequeue();
    qS.dequeue();
    
    int sizeS = qS.getSize();
    for(int i = 0; i < sizeS; i++)
    {
        qS.enqueue("string #" + std::to_string(i));
    }
    qS.print();
    qS.enqueue("test");
    if(qS.isFull())
    {
        cout << "queue qI is full\n\n";
    }
    for(int i = 0; i < sizeS; i++)
    {
        qS.dequeue();
    }
    qS.dequeue();

    /* testing front */

    queue<int> qI2;
    
    qI2.enqueue(100);
    cout << "Front test: " << qI2.getFront() << endl << endl;
    qI2.enqueue(200);
    cout << "dequeueing: " << qI2.dequeue() << endl << endl;
    cout << "Front test #2: " << qI2.getFront() << endl << endl;

    return 0;
}