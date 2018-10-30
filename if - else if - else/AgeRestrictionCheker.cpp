//Preprocesor directive for basic input output manipulation
#include <iostream>
//This includes functions as cin, cout for write/read functions
using namespace std;

//Program body
int main(){
	//Age ratio calculator
	int age;//this will keep input from user
	cout<<"Please input your age (just numbers): ";
	cin>>age;//input read
	//Verification for age restriction
	if(age<18){ //if less than 18
		cout<<"You're a kiddo"<<endl;
	}
	else{ //if condition is false, so age is greater or equal than 18 
		cout<<"You got an ID number?"<<endl;
	}
}
