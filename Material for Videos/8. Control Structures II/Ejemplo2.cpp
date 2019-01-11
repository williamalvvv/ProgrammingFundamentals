//Preprocesor directive for basic input output manipulation
#include <iostream>
//Using C++ standard namespace functions
using namespace std;

//Program body
//This program will print a series of numbers from 0 to user input, only if user input number is less than 100
int main(){
	int num; //This variable will keep input from user
	int contador;
	cout<<"Please, input a number for me to count to: ";
	cin>>num;
	if(num<100){
		while(contador<=num){
			cout<<contador<<endl;
			
		}
	}
	else{
		cout<<"Number can't be equals or greater than 100'"<<endl;
	}
}
