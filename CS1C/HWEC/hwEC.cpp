#include "sorts.h"

const int SIZE = 100;

int main()
{
    int list1[SIZE];
    int list2[SIZE];
    int list3[SIZE];
    srand (time(NULL));

    /* 
       NOTE: MERGE AND QUICK SORT ARE RECURSIVE
       AND HAVE ADDITIONAL OVERHEAD, RESULTING 
       IN HIGHER EXECUTION TIME
    */

    for(int i = 0; i < SIZE ;i++)
    {
        list3[i] = rand() % 100 +1;
    }
    
    comps = 0;
    asigns = 0;
    cout << "******BUBBLE SORT******\n";
    printAr(list3, SIZE);
    totalClock = clock();
    bubbleSort(list3, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list3, SIZE);

    for(int i = 0; i < SIZE ;i++)
    {
        list3[i] = rand() % 100 +1;
    }

    comps = 0;
    asigns = 0;
    cout << "******SELECTION SORT******\n";
    printAr(list3, SIZE);
    totalClock = clock();
    selectionSort(list3, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list3, SIZE);

    for(int i = 0; i < SIZE ;i++)
    {
        list3[i] = rand() % 100 +1;
    }

    comps = 0;
    asigns = 0;
    cout << "******INSERTION SORT******\n";
    printAr(list3, SIZE);
    totalClock = clock();
    insertionSort(list3, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list3, SIZE);

    for(int i = 0; i < SIZE ;i++)
    {
        list3[i] = rand() % 100 +1;
    }

    comps = 0;
    asigns = 0;
    cout << "******MERGE SORT******\n";
    printAr(list3, SIZE);
    totalClock = clock();
    mergeSort(list3, 0, SIZE-1);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list3, SIZE);

    for(int i = 0; i < SIZE ;i++)
    {
        list3[i] = rand() % 100 +1;
    }

    comps = 0;
    asigns = 0;
    cout << "******QUICK SORT******\n";
    printAr(list3, SIZE);
    totalClock = clock();
    quickSort(list3, 0, SIZE-1);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list3, SIZE);

    /* list 2 */
    for(int i = 0; i < SIZE ;i++)
    {
        list2[i] = 100-i;
    }
    
    comps = 0;
    asigns = 0;
    cout << "******BUBBLE SORT******\n";
    printAr(list2, SIZE);
    totalClock = clock();
    bubbleSort(list2, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list2, SIZE);

    for(int i = 0; i < SIZE ;i++)
    {
        list2[i] = 100-i;
    }

    comps = 0;
    asigns = 0;
    cout << "******SELECTION SORT******\n";
    printAr(list2, SIZE);
    totalClock = clock();
    selectionSort(list2, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list2, SIZE);

    for(int i = 0; i < SIZE ;i++)
    {
        list2[i] = 100-i;
    }

    comps = 0;
    asigns = 0;
    cout << "******INSERTION SORT******\n";
    printAr(list2, SIZE);
    totalClock = clock();
    insertionSort(list2, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list2, SIZE);

    for(int i = 0; i < SIZE ;i++)
    {
        list2[i] = 100-i;
    }

    comps = 0;
    asigns = 0;
    cout << "******MERGE SORT******\n";
    printAr(list2, SIZE);
    totalClock = clock();
    mergeSort(list2, 0, SIZE-1);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list2, SIZE);

    for(int i = 0; i < SIZE ;i++)
    {
        list2[i] = 100-i;
    }

    comps = 0;
    asigns = 0;
    cout << "******QUICK SORT******\n";
    printAr(list2, SIZE);
    totalClock = clock();
    quickSort(list2, 0, SIZE-1);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list2, SIZE);


    for(int i = 0; i < SIZE ;i++)
    {
        list1[i] = i+1;
    }

    /* list 1 */
    comps = 0;
    asigns = 0;
    cout << "******BUBBLE SORT******\n";
    printAr(list1, SIZE);
    totalClock = clock();
    bubbleSort(list1, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list1, SIZE);


    comps = 0;
    asigns = 0;
    cout << "******SELECTION SORT******\n";
    printAr(list1, SIZE);
    totalClock = clock();
    selectionSort(list1, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list1, SIZE);

    comps = 0;
    asigns = 0;
    cout << "******INSERTION SORT******\n";
    printAr(list1, SIZE);
    totalClock = clock();
    insertionSort(list1, SIZE);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list1, SIZE);


    comps = 0;
    asigns = 0;
    cout << "******MERGE SORT******\n";
    printAr(list1, SIZE);
    totalClock = clock();
    mergeSort(list1, 0, SIZE-1);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list1, SIZE);


    comps = 0;
    asigns = 0;
    cout << "******QUICK SORT******\n";
    printAr(list1, SIZE);
    totalClock = clock();
    quickSort(list1, 0, SIZE-1);
    cout << "Sort time: " << 1000000000*(clock()-totalClock)/float(CLOCKS_PER_SEC) << " ns" << endl << endl; //outputs sort time in nano-seconds
    cout << "Comparisons: " << comps << endl << endl;
    cout << "Assignments: " << asigns << endl << endl;
    printAr(list1, SIZE);

}