//This C++ program implementats insertion sort 
#include <stdio.h> 
#include <iostream>  

//Functions prototypes
void insertionSort(int arr[], int n);
void printArray(int arr[], int size);

using namespace std;

// Main program to test sorting functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Unsorted array (Before insertion sort): \n"); 
    printArray(arr, n); 
    insertionSort(arr, n);
    cout<<"\n\n";
    printf("Sorted array (After insertion sort): \n"); 
    printArray(arr, n); 
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
       while (j >= 0 && arr[j] > key) //If item at position j is greater than key item
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
  
