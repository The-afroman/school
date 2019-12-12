#include <chrono>
#include <iostream>
#include <random>
#include <array>

using namespace std; 

//int totalClock;
int comps;
int asigns;
long statements = 0;

// for swaping array elements
void swap(int *xp, int *yp)  
{  
    int temp = *xp; 
    *xp = *yp;  
    *yp = temp;
    statements+=3;
}

// for printing arrays
void printAr(std::vector<int> arr, int n)
{
    cout << "\t\t";
    for(int i = 0; i < 5 ;i++)
        cout << arr[i] << " ";

    cout << " .... ";

    for(int i = n-5; i < n ;i++)
        cout << arr[i] << " ";

    cout << endl;
}

/* This function takes random element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
// partition for quick sort
int partitionRand(std::vector<int> &arr, int low, int high)  
{  
    // Generate a random number in between 
    // low .. high 
    srand(time(NULL)); 
    int random = low + rand() % (high - low); statements+=2;
  
    // Swap A[random] with A[high] 
    swap(arr[random], arr[high]); statements++;
  
    int pivot = arr[high]; statements++; // pivot 
    int i = (low - 1); statements+=2;// Index of smaller element 
  
    for (int j = low; j <= high - 1; j++) { 
        statements++;
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) { 
            statements+=2;
            i++; // increment index of smaller element 
            swap(arr[i], arr[j]);
            statements++; 
        }
    }
    statements+=2;
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
}

/* This function takes first element as a pivot */
// partition for quick sort
int partitionFirst(std::vector<int> &arr, int low, int high)  
{  
    // Generate a random number in between 
    // low .. high 
    //srand(time(NULL)); 
    int first = low; // pivot  
    int i = (low - 1); statements+=2; // Index of smaller elemen
    //Swap A[random] with A[high] 
    swap(arr[first], arr[high]); statements++;
    int pivot = arr[high];

    for (int j = low; j <= high - 1; j++) { 
        statements++;
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) { 
            statements+=2;
            i++; // increment index of smaller element 
            swap(arr[i], arr[j]);
            statements++; 
        }
    }
    statements+=2;
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
}

/* This function takes middle element as a pivot */
// partition for quick sort
int partitionMiddle(std::vector<int> &arr, int low, int high)  
{  
    // Generate a random number in between 
    // low .. high 
    //rand(time(NULL)); 
    int middle = (low+high)/2;
  
    // Swap A[random] with A[high] 
    swap(arr[middle], arr[high]); statements++;
  
    int pivot = arr[high]; statements++; // pivot
    int i = (low - 1); statements+=2;// Index of smaller element 
  
    for (int j = low; j <= high - 1; j++) { 
        statements++;
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) { 
            statements+=2;
            i++; // increment index of smaller element 
            swap(arr[i], arr[j]);
            statements++; 
        }
    }
    statements+=2;
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
}

enum pivots
{RAND, FIRST, MIDDLE};

//quick sort
void quickSort(std::vector<int> &arr, int low, int high, int pivotType)  
{
    if (low < high)
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi;
        switch(pivotType)
        {
            case RAND: pi = partitionRand(arr, low, high); asigns++;
                    break;
            case FIRST: pi = partitionFirst(arr, low, high); asigns++;
                    break;
            case MIDDLE: pi = partitionMiddle(arr, low, high); asigns++;
                    break;
        }
        statements++;
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1, pivotType);
        statements++;
        quickSort(arr, pi + 1, high, pivotType);
        statements++;  
    }  
    comps++;
}

void quickSortIterative(std::vector<int> & arr, int l, int h, int pivotType) 
{ 
    // Create an auxiliary stack 
    int stack[h - l + 1];
  
    // initialize top of stack 
    int top = -1; asigns++; 
  
    // push initial values of l and h to stack 
    stack[++top] = l; asigns++; 
    stack[++top] = h; asigns++;
  
    // Keep popping from stack while is not empty 
    while (top >= 0) { 
        comps++;
        // Pop h and l 
        h = stack[top--]; asigns++;
        l = stack[top--]; asigns++;
  
        // Set pivot element at its correct position 
        // in sorted array 
        int pi;
        switch(pivotType)
        {
            case RAND: pi = partitionRand(arr, l, h); asigns++;
                    break;
            case FIRST: pi = partitionFirst(arr, l, h); asigns++;
                    break;
            case MIDDLE: pi = partitionMiddle(arr, l, h); asigns++;
                    break;
        } 
        asigns++;
  
        // If there are elements on left side of pivot, 
        // then push left side to stack 
        if (pi - 1 > l) { 
            stack[++top] = l; 
            stack[++top] = pi - 1; 
        }
        comps++;
  
        // If there are elements on right side of pivot, 
        // then push right side to stack 
        if (pi + 1 < h) { 
            stack[++top] = pi + 1; 
            stack[++top] = h; 
        } 
        comps++;
    }
    comps++; 
}

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(std::vector<int> & arr, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    statements+=3;
    /* create temp arrays */
    int L[n1], R[n2]; 
    statements++;
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
        statements++;
    }
    statements++;
    for (j = 0; j < n2; j++) 
    {
        R[j] = arr[m + 1+ j];
        statements++;
    }
    statements++;
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j])
        { 
            arr[k] = L[i]; 
            i++;
            statements++;
            statements++;
        }
        else
        { 
            arr[k] = R[j];
            j++;
            statements++;
            statements++;
        } 
        k++;
        statements++; 
    } 
    statements++;
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1)
    { 
        arr[k] = L[i]; asigns++;
        i++; 
        k++;
        statements++;
        statements++;
        statements++;
    }
    statements++;
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2)
    { 
        arr[k] = R[j]; 
        j++; 
        k++;
        statements++;
        statements++;
        statements++;
    }
    statements++;
}

void mergeSort(std::vector<int> & arr, int l, int r) 
{
    if (l < r)
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; statements++;
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r);
        statements+=3;
    }
    statements++;
}

// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(std::vector<int> & arr, int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
    statements+=3;
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest])
    {
        largest = l; 
        statements++;
    }
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
        statements++; 
    }
    statements+=2;
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest);
        statements+=2; 
    }
    statements++;
} 
  
// main function to do heap sort 
void heapSort(std::vector<int> & arr, int n) 
{ 
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
        statements++;
    }
    statements++;
    // One by one extract an element from heap 
    for (int i=n-1; i>=0; i--) 
    { 
        // Move current root to end 
        swap(arr[0], arr[i]);
        statements++; 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0);
        statements++; 
    }
    statements++;
}

// A utility function to get maximum value in arr[] 
int getMax(std::vector<char> & arr, int n) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
    return mx; 
} 
  
// A function to do counting sort of arr[] according to 
// the digit represented by exp. 
void countSort(std::vector<char> & arr, int n, int exp) 
{ 
    int output[n]; // output array 
    int i, count[10] = {0}; 
  
    // Store count of occurrences in count[] 
    for (i = 0; i < n; i++) 
        count[ (arr[i]/exp)%10 ]++; 
  
    // Change count[i] so that count[i] now contains actual 
    //  position of this digit in output[] 
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    // Build the output array 
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    } 
  
    // Copy the output array to arr[], so that arr[] now 
    // contains sorted numbers according to current digit 
    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 
  
// The main function to that sorts arr[] of size n using  
// Radix Sort 
void radixsort(std::vector<char> & arr, int n) 
{ 
    // Find the maximum number to know number of digits 
    int m = getMax(arr, n); 
  
    // Do counting sort for every digit. Note that instead 
    // of passing digit number, exp is passed. exp is 10^i 
    // where i is current digit number 
    int pass = 0;
    for (int exp = 1; m/exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);
        pass++;
        cout << "pass#: " << pass << " ";
        for (auto i : arr)
            cout << i;
        cout << "\n";
    }
} 