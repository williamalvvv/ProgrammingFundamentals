#include <iostream> 
#include <cstring> 
using namespace std; 
  
int main() 
{ 
char s1[10] = "Hello"; 
 	// return length of s1 
cout << strlen(s1) << endl; 
 	char s2[50]; 
    	// copies s1 into s2 
    	strcpy(s2, s1); 
    	cout << s2 << endl;
	return 0;
}

