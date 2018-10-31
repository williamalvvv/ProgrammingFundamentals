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
	num=rand()%100; //This limit number range between 0 - 100
	cout<<"Please, input a number for me to count to: "<<num<<endl;
	//cin>>num;
	if(num<100){
		for(int i=0;i<=num;i++)
			cout<<i<<endl;
	}
	else{
		cout<<"Number can't be equals or greater than 100'"<<endl;
	}
}
