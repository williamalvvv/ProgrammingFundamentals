//Preprocesor directive for basic input output manipulation
#include <iostream>
//Preprocesor directive for string manipulation
#include <string.h>
//This includes functions as cin, cout for write/read functions
using namespace std;

//Program body
int main(){
	char myChar;
	cout<<"Please input a character: ";
	cin>>myChar;
	switch(myChar){
		case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': case '0':
			cout<<"So this is a number.";
		break;
		case 'A': case 'a': case 'B': case 'b': case 'C': case 'c': case 'D': case 'd': case 'E': case 'e': case 'F': case 'f': case 'G': case 'g':
		case 'H': case 'h': case 'I': case 'i': case 'J': case 'j': case 'K': case 'k': case 'L': case 'l': case 'M': case 'm': case 'N': case 'n':
		case 'O': case 'o': case 'P': case 'p': case 'Q': case 'q': case 'R': case 'r': case 'S': case 's': case 'T': case 't': case 'U': case 'u':
		case 'V': case 'v': case 'W': case 'w': case 'X': case 'x': case 'Y': case 'y': case 'Z': case 'z':	
				cout<<"So this is a char."<<endl<<endl;
		break;
		default:
				cout<<"So this is a special character"<<endl<<endl;
		break;
		} 
	
}
