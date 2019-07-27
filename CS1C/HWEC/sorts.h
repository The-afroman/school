#include <chrono>
#include <iostream>
#include <random>

using namespace std; 

int totalClock;
int comps;
int asigns;

// for swaping array elements
void swap(int *xp, int *yp)  
{  
    int temp = *xp; 
    *xp = *yp;  
    *yp = temp;
    asigns+=3;  
}  

// for printing arrays
void printAr(int arr[], int n)
{
    for(int i = 0; i < 10 ;i++)
        cout << arr[i] << " ";

    cout << " .... ";

    for(int i = n-10; i < n ;i++)
        cout << arr[i] << " ";

    cout << endl << endl;
}

/* This function takes random element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
// partition for quick sort
int partition (int arr[], int low, int high)  
{  
    // Generate a random number in between 
    // low .. high 
    srand(time(NULL)); 
    int random = low + rand() % (high - low); asigns++;
  
    // Swap A[random] with A[high] 
    swap(arr[random], arr[high]); 
  
    int pivot = arr[high]; asigns++; // pivot 
    int i = (low - 1); asigns++;// Index of smaller element 
  
    for (int j = low; j <= high - 1; j++) { 
        comps++;
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) { 
  
            i++; // increment index of smaller element 
            swap(arr[i], arr[j]); 
        }
        comps++;
    }
    comps++; 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
}

// bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)
    {
        comps++;
        for (j = 0; j < n-i-1; j++)
        {
            comps++;  
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);  
            comps++;
        }
        comps++;
    }
    comps++;
}

//insertion sort
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        comps++;
        key = arr[i];  asigns++;
        j = i - 1;  asigns++;
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {
            comps++;  
            arr[j + 1] = arr[j]; asigns++;  
            j = j - 1;  asigns++;
        }
        comps++;  
        arr[j + 1] = key; asigns++;  
    }
    comps++;
}

//selection sort
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n- 1; i++, comps++)  
    {   
        // Find the minimum element in unsorted array  
        min_idx = i;   
        for (j = i+1;  j < n; j++)
        {  
            comps++;
            if (arr[j] < arr[min_idx]) 
            {
                min_idx =  j;
                asigns++;
            }
            comps++;
        }
        comps++;
        // Swap the found minimum element with the first element  
        swap(&arr[min_idx], &arr[i]);  
    }  
} 

//quick sort
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high); asigns++;  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
    comps++;
}

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
    {
        comps++; 
        L[i] = arr[l + i];
        asigns++;
    }
    comps++;
    for (j = 0; j < n2; j++) 
    {
        R[j] = arr[m + 1+ j]; asigns++;
        comps++;
    }
    comps++;
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j])
        { 
            arr[k] = L[i]; asigns++; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; asigns++; 
            j++; 
        } 
        k++;
        comps+=2; 
    } 
    comps++;
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1)
    { 
        comps++;
        arr[k] = L[i]; asigns++;
        i++; 
        k++; 
    } 
    comps++;
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2)
    { 
        comps++;
        arr[k] = R[j]; 
        j++; 
        k++; 
    }
    comps++; 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{
    if (l < r)
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; asigns++;
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    }
    comps++;
} 
