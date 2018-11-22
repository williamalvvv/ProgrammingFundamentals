//This C++ program implementats Bubble sort 
#include <stdio.h> 
#include <iostream>  

//Functions prototypes
void swap(int *xp, int *yp); 
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

using namespace std;

// Main program to test sorting functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Unsorted array (Before Bubble sort): \n"); 
    printArray(arr, n); 
    bubbleSort(arr, n);
    cout<<"\n\n";
    printf("Sorted array (After Bubble sort): \n"); 
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
        if (arr[j] > arr[j+1]) //If element at position j is greater than element at position j+1, then we need to swap the elements
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
  
