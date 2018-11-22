//This C++ program implementats selection sort 
#include <stdio.h> 
#include <iostream>  

//Functions prototypes
void swap(int *xp, int *yp); 
void selectionSort(int arr[], int n);
void printArray(int arr[], int size);

using namespace std;

// Main program to test sorting functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Unsorted array (Before selection sort): \n"); 
    printArray(arr, n); 
    selectionSort(arr, n);
    cout<<"\n\n";
    printf("Sorted array (After selection sort): \n"); 
    printArray(arr, n); 
    return 0; 
} 

//This function will swap items accoring to sorting algotirm
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement selection sort algorithm 
void selectionSort(int arr[], int n) 
{ 
    int max_idx; 
    // One by one move boundary of unsorted subarray 
    for (int i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        max_idx = i; 
        for (int j = i+1; j < n; j++) 
          if (arr[j] > arr[max_idx]) 
            max_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[max_idx], &arr[i]); 
    } 
} 
  
/* Function to print an array content */
void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        cout<<arr[i]<<endl;
} 
  
