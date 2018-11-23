// CPP program to illustrate *char array usage
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // pointer str points to const string literal "Hello". No need to declare size. 
    char* str = "This is char* string example"; 
    cout << str << endl; 
    int size = 30; 
    // can allocate size dynamically. 
    char* str2 = (char*)malloc(sizeof(char) * size); 
    str2 = "GeeksForGeeks For Everyone"; 
    cout << str2; 
  	char* str3;
  	cin>>str3;
  	cout<<str3;
    return 0; 
} 
