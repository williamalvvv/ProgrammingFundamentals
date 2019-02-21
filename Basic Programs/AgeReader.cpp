//Preprocesor directive for basic input output manipulation
#include <iostream>
//This includes functions as cin, cout for write/read functions
using namespace std;

//Program body
int main(){
	int age; //This variable will keep age input from user
	//This line prints a line in terminal
	cout<<"Hello World, this is my very first C++ programm"<<endl<<endl;
	//In the above line, endl statement insert a new line, it is needed to use output flow operator "<<" for make it work 
	cout<<"Please enter your age (just numbers): ";
	cin>>age; //makes age read, user has to input value
	cout<<endl<<endl;//Prints to empty lines
	cout<<"Your age is: "<<age<<", thanks for using this program"<<endl; //this line prints a message with some variable values in it
	return 0;//Program end
}
