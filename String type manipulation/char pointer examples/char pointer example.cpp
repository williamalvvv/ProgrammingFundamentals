// CPP program to illustrate *char array usage
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // pointer str points to const string literal "Hello". No need to declare size. 
    char* str = "This is char* string example"; 
    cout << str << endl; 
    int size = 40; 
    // can allocate a fixed size dynamically, in this case, it locates 40 bytes in memory 
    char* str2 = (char*)malloc(sizeof(char) * size); 
    str2 = "This is just another example"; 
    cout << str2<<endl; 
  	char* str3; //This creates an empty string that cannot be changed, due to constant restrictions
  	cout<<"New value for str3: ";
  	cin>>str3; //when user tries to input string 3 value program trows an runtime error
  	cout<<str3; //this line never executes due to error
    return 0; 
} 
