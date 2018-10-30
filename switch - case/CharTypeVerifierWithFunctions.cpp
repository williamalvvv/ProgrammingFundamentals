//Preprocesor directive for basic input output manipulation
#include <iostream>
//Preprocesor directive for char manipulation
#include <cctype>
//This includes functions as cin, cout for write/read functions
using namespace std;

//Program body
int main(){
	char myChar;
	int value;
	cout<<"Please input a character: ";
	cin>>myChar;
	if(isdigit(myChar)){
		value =1;
	}
	else if(isalpha(myChar)){
		value =3;
	}
	else{
		value =2;
	}
	switch(value){
		case 1: 
			cout<<"So this is a number.";
		break;
		case 2:
				cout<<"So this is a special char."<<endl<<endl;
		break;
		default:
				cout<<"So this is a character"<<endl<<endl;
		break;
		} 
	
}
