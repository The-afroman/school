#include "sorts.h"
#include <array>
#include <algorithm>

int f1()
{ 
    static int i = 0;
    return i++;
}
int f2()
{ 
    static int j = 0;
    return j++;
}
int f3()
{ 
    static int k = 0;
    return k++;
}
int f4()
{ 
    static int l = 0;
    return l++;
}

int main()
{

    std::vector<int> list1(5000);
    std::vector<int> list2(10000);
    std::vector<int> list3(50000);
    std::vector<int> list4(75000);
    std::generate(list1.begin(), list1.end(), f1);
    std::generate(list2.begin(), list2.end(), f2);
    std::generate(list3.begin(), list3.end(), f3);
    std::generate(list4.begin(), list4.end(), f4);

    cout << "PART 1: \n\n";
    //printAr(list, 10000);
    //IN-ORDER
    cout << "IN-ORDER: \n";
    
    //RAND-PIVOT
    cout << "\t\t\t\tRAND-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    printAr(list1, 5000);
    clock_t startTime = clock();
    quickSortIterative(list1, 0, 4999,RAND);
    clock_t endTime = clock();
    clock_t duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,RAND);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,RAND);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
        cout << "\t\t\t\tMIDDLE-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    printAr(list1, 5000);
     startTime = clock();
    quickSortIterative(list1, 0, 4999,MIDDLE);
     endTime = clock();
     duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,MIDDLE);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,MIDDLE);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

            cout << "\t\t\t\tFIRST-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    printAr(list1, 5000);
     startTime = clock();
    quickSortIterative(list1, 0, 4999,FIRST);
     endTime = clock();
     duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,FIRST);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,FIRST);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "REVERSE-ORDER: \n";
    //RAND-PIVOT
    cout << "\t\t\t\tRAND-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    std::reverse(list1.begin(), list1.end());
    printAr(list1, 5000);
    startTime = clock();
    quickSortIterative(list1, 0, 4999,RAND);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    std::reverse(list2.begin(), list2.end());
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,RAND);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    std::reverse(list3.begin(), list3.end());
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,RAND);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "\t\t\t\tMIDDLE-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    std::reverse(list1.begin(), list1.end());
    printAr(list1, 5000);
    startTime = clock();
    quickSortIterative(list1, 0, 4999,MIDDLE);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    std::reverse(list2.begin(), list2.end());
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,MIDDLE);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    std::reverse(list3.begin(), list3.end());
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,MIDDLE);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "\t\t\t\tRAND-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    std::reverse(list1.begin(), list1.end());
    printAr(list1, 5000);
    startTime = clock();
    quickSortIterative(list1, 0, 4999,FIRST);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    std::reverse(list2.begin(), list2.end());
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,FIRST);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    std::reverse(list3.begin(), list3.end());
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,FIRST);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "RANDOM-ORDER: \n";
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //RAND-PIVOT
    cout << "\t\t\t\tRAND-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    std::shuffle(list1.begin(), list1.end(),std::default_random_engine(seed));
    printAr(list1, 5000);
    startTime = clock();
    quickSortIterative(list1, 0, 4999,RAND);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    std::shuffle(list2.begin(), list2.end(),std::default_random_engine(seed));
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,RAND);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    std::shuffle(list3.begin(), list3.end(),std::default_random_engine(seed));
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,RAND);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "\t\t\t\tMIDDLE-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    std::shuffle(list1.begin(), list1.end(),std::default_random_engine(seed));
    printAr(list1, 5000);
    startTime = clock();
    quickSortIterative(list1, 0, 4999,MIDDLE);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    std::shuffle(list2.begin(), list2.end(),std::default_random_engine(seed));
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,MIDDLE);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    std::shuffle(list3.begin(), list3.end(),std::default_random_engine(seed));
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,MIDDLE);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "\t\t\t\tFIRST-PIVOT: \n"
        << "________________________________________________________________________________\n";
    cout << "\tSIZE: 5000\n";
    statements = 0;
    std::shuffle(list1.begin(), list1.end(),std::default_random_engine(seed));
    printAr(list1, 5000);
    startTime = clock();
    quickSortIterative(list1, 0, 4999,FIRST);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list1, 5000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    cout << "\tSIZE: 10000\n";
    
    statements = 0;
    std::shuffle(list2.begin(), list2.end(),std::default_random_engine(seed));
    printAr(list2, 10000);
    startTime = clock();
    quickSortIterative(list2, 0, 9999,FIRST);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list2, 10000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "\tSIZE: 50000\n";
    statements = 0;
    std::shuffle(list3.begin(), list3.end(),std::default_random_engine(seed));
    printAr(list3, 50000);
    startTime = clock();
    quickSortIterative(list3, 0, 49999,FIRST);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "PART 2: \n\n";
    cout << "\t\t\t\tORDERED: \n"
        << "________________________________________________________________________________\n";
    cout << "HEAP SORT:\n";
    cout << "\tSIZE: 50000\n";
    statements = 0;
    printAr(list3, 50000);
    startTime = clock();
    heapSort(list3, 50000);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "MERGE SORT:\n";
    statements = 0;
    printAr(list3, 50000);
    startTime = clock();
    mergeSort(list3,0,49999);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "HEAP SORT\n";
    cout << "\tSIZE: 75000\n";
    statements = 0;
    printAr(list4, 75000);
    startTime = clock();
    heapSort(list4, 75000);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list4, 75000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "MERGE SORT\n";
    statements = 0;
    printAr(list4, 75000);
    startTime = clock();
    mergeSort(list4, 0, 74999);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list4, 75000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "\t\t\t\tREVERSE-ORDERED: \n"
        << "________________________________________________________________________________\n";
    cout << "HEAP SORT:\n";
    cout << "\tSIZE: 50000\n";
    statements = 0;
    std::reverse(list3.begin(), list3.end());
    printAr(list3, 50000);
    startTime = clock();
    heapSort(list3, 50000);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "MERGE SORT:\n";
    statements = 0;
    std::reverse(list3.begin(), list3.end());
    printAr(list3, 50000);
    startTime = clock();
    mergeSort(list3,0,49999);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "HEAP SORT\n";
    cout << "\tSIZE: 75000\n";
    statements = 0;
    std::reverse(list4.begin(), list4.end());
    printAr(list4, 75000);
    startTime = clock();
    heapSort(list4, 75000);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list4, 75000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "MERGE SORT\n";
    statements = 0;
    std::reverse(list4.begin(), list4.end());
    printAr(list4, 75000);
    startTime = clock();
    mergeSort(list4, 0, 74999);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list4, 75000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;


    cout << "\t\t\t\tRANDOM-ORDERED: \n"
        << "________________________________________________________________________________\n";
    cout << "HEAP SORT:\n";
    cout << "\tSIZE: 50000\n";
    statements = 0;
    std::shuffle(list3.begin(), list3.end(),std::default_random_engine(seed));
    printAr(list3, 50000);
    startTime = clock();
    heapSort(list3, 50000);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "MERGE SORT:\n";
    statements = 0;
    std::shuffle(list3.begin(), list3.end(),std::default_random_engine(seed));
    printAr(list3, 50000);
    startTime = clock();
    mergeSort(list3,0,49999);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list3, 50000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;
    
    cout << "HEAP SORT\n";
    cout << "\tSIZE: 75000\n";
    statements = 0;
    std::shuffle(list4.begin(), list4.end(),std::default_random_engine(seed));
    printAr(list4, 75000);
    startTime = clock();
    heapSort(list4, 75000);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list4, 75000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "MERGE SORT\n";
    statements = 0;
    std::shuffle(list4.begin(), list4.end(),std::default_random_engine(seed));
    printAr(list4, 75000);
    startTime = clock();
    mergeSort(list4, 0, 74999);
    endTime = clock();
    duration = double(endTime - startTime)/CLOCKS_PER_SEC*1000;
    printAr(list4, 75000);
    cout << "\t\tElapsed time: " << duration << " ms" << endl
         << "\t\tStatements: " << statements << endl;

    cout << "PART 3:\n\n";
    cout << "NOTE:\n"
         << "only three passes of counting sort to perform radix  are required because" 
         " my implimentation uses the ascii value of characters which"
         "is 2 digits EX: a = 97\n\n";
    //"acdes asdsd ksjtr  kerpt absqa zabaa rkdsb qqqqq kdfaa zedsd"
    vector<char> radix1{'a','c','d','e','s'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 

    radix1 = {'a','s','d','s','d'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 

    radix1 = {'k','s','j','t','r'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 

    radix1 = {'k','e','r','p','t'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 

    radix1 = {'a','b','s','q','a'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 

    radix1 = {'z','a','b','a','a'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n";

    radix1 = {'r','k','d','s','b'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 

    radix1 = {'q','q','q','q','q'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 

    radix1 = {'k','d','f','a','a'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 
    
    radix1 = {'z','e','d','s','d'};
    cout << "sorting : ";
    for(auto i : radix1)
        cout << i << " ";
    cout << "\n"; 
    radixsort(radix1, radix1.size());
    cout << "\n"; 

    return 0;
}
