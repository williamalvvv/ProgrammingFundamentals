//This C++ program implementats selection sort 
#include <stdio.h> 
#include <iostream>
#include <stdlib.h>     /* srand, rand functions*/
#include <time.h>       /* time */  
#include <chrono>
//Functions prototypes
void swap(int *xp, int *yp); 
void selectionSort(int arr[], int n);
void printArray(int arr[], int size);
using namespace std::chrono;
using namespace std;

// Main program to test sorting functions 
int main() 
{ 
    int arr[2000]; 
	/* initialize random seed: */
  	srand (time(NULL));
  	int n = sizeof(arr)/sizeof(arr[0]); 
	/* generate random number between 1 and 200 and assign that value to array at position i */
	for(int i=0;i<2000;i++)
		arr[i]=rand() % 200 + 1;
   printf("2000 elements have been generated and inserted into array\nSorting the array...\n");
    //starts counting execution time
	auto start = high_resolution_clock::now();
    selectionSort(arr, n);
    //stop counting execution time
    auto stop = high_resolution_clock::now();
	//calculates execution time 
    auto duration = duration_cast<microseconds>(stop - start);
   cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;  
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
  
