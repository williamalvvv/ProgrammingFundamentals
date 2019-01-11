#include <iostream> 
#include <cstring>
#include <conio.h>
#include <string>
 
using namespace std; 
  
int main() 
{ 
char s1[10] = "Hello"; 
 	// return length of s1 
cout << "Longitud cadena: "<< strlen(s1) << endl; 
 	char s2[50];
	 	cout<<"s1 initial value: "<<s1<<endl; 
    	cout<<"s2 value before copy: "<<s2<<endl;
		// copies s1 into s2 
    	strcpy(s2, s1);
		cout<<"s2 value after copy: "<<s2<<endl; 
    	cout<<"Type s1 value again: ";
    	cin.getline(s1, 10);
    	cout<<"New S1 value: "<<s1<<endl;
	return 0;
}

