//This C++ program implementats insertion sort 
#include <stdio.h> 
#include <iostream>
#include <stdlib.h>     /* srand, rand functions*/
#include <time.h>       /* time */  
#include <chrono>
//Functions prototypes
void insertionSort(int arr[], int n);
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
    insertionSort(arr, n);
    //stop counting execution time
    auto stop = high_resolution_clock::now();
	//calculates execution time 
    auto duration = duration_cast<microseconds>(stop - start);
   cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;  
    return 0; 
} 
  
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
   int key, j; 
   for (int i = 1; i < n; i++) 
   { 
       key = arr[i]; //Takes element at first position as key value
       j = i-1; //Takes item in the left as item to be sorted
       // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position 
       while (j >= 0 && arr[j] < key) //If item at position j is greater than key item
       { 
           arr[j+1] = arr[j]; //Swap items
           j = j-1; 
       } 
       arr[j+1] = key; //Set new key value
   } 
}  
  
/* Function to print an array content */
void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        cout<<arr[i]<<endl;
} 
  
