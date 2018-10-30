//Preprocesor directive for basic input output manipulation
#include <iostream>
//Preprocesor directive for string manipulation
#include <string.h>
//This includes functions as cin, cout for write/read functions
using namespace std;

//Program body
int main(){
	//Age ratio calculator
	int age;//this will keep input from user
	string password="pa$$w0rd";
	string inputPassword;
	char response;
	cout<<"Please input your age (just numbers): ";
	cin>>age;//input read
	//Verification for age restriction
	if(age<18){ //if less than 18
		cout<<"You're a kiddo'"<<endl;
	}
	else{ //if condition is false, so age is greater or equal than 18 
		cout<<"You got the password to watch this?"<<endl<<endl;
		cout<<"input \"Y\" if you know it, \"N\" if you dont: "<<endl;
		cin>>response;
		if(response=='Y'){
			cout<<"Oh i see, so, please enter the password: ";
			cin>>inputPassword;
			cout<<endl;
			if(password==inputPassword){
				cout<<"Secret info is: Have a nice day, bye"<<endl;
			}
			else{
				cout<<"Passwords don't match"<<endl<<endl;
				cout<<"Please come back again"<<endl;
			}
		}
		else if(response=='N'){
			cout<<"Oh that's too bad, sorry you can't see the info"<<endl<<endl;
			cout<<"Please come back again"<<endl;
		}
		else{
			cout<<"You didn't input any valid option"<<endl<<endl;
		}
	}
}
