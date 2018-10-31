//Preprocesor directive for basic input output manipulation
#include <iostream>
//Libs needed to generate random data input
#include <math.h>
#include<stdlib.h>
#include<time.h>

//Using C++ standard namespace functions
using namespace std;

//Program body
//This program will print a series of numbers from 0 to user input, only if user input number is less than 100
int main(){
	int num; //This variable will keep input from user
	srand(time(NULL));
	num=rand()%10; //This limit number range between 0 - 100
	int inputNum;
	while(num!=inputNum){
			cout<<"A RANDOM NUMBER HAS BEEN GENERATED, GUESS THE NUMBER: ";
			cin>>inputNum;
			if(num==inputNum)
				cout<<"Number is correct"<<endl;
			else
				cout<<"Try again"<<endl<<endl;
	}
}
