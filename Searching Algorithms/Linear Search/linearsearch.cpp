// C++ code for linearly search x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 
  
#include <iostream> 
using namespace std; 
  
bool search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return true; 
    return false; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 43; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    bool result = search(arr, n, x); 
   if(!result) 
   		cout<<"Element is not present in array"; 
    else
		cout<<"Element is present in array"; 
   return 0; 
} 
