//This C++ program implementats Bubble sort 
#include <stdio.h> 
#include <iostream> 
#include <stdlib.h>     /* srand, rand functions*/
#include <time.h>       /* time */   
#include <chrono>

//Functions prototypes
void swap(int *xp, int *yp); 
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

using namespace std; 
using namespace std::chrono; 

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
    bubbleSort(arr, n);
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
  
// A function to implement bubble sort algorithm 
void bubbleSort(int arr[], int n) 
{  
   bool swapped; //This variable will hold true if items were swaped
   for (int i = 0; i < n-1; i++) 
   { 
     swapped = false; //False by default
     //This implementation will sort array in ascendent order
     for (int j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] < arr[j+1]) //If element at position j is greater than element at position j+1, then we need to swap the elements
        { 
           swap(&arr[j], &arr[j+1]); //Call to swap function
           swapped = true; //We set swaped centinel to true, cause a swap occured
        } 
     } 
     // If no elements were swapped by inner loop, then break cause array is already sorted 
     if (swapped == false) 
        break; 
   } 
} 
  
/* Function to print an array content */
void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        cout<<arr[i]<<endl;
} 
  
