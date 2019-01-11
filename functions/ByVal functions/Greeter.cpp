//Preprocesor directive for basic input output manipulation
#include <iostream>
//This includes functions as cin, cout for write/read functions
using namespace std;

//function Prototype
void greet(string text);
bool isLegal(int age);
void aumentarEdad(int &age);

//Program body
int main(){
	int age; //This variable will keep age input from user
	string name;
	cout<<"what's your name?"<<endl;
	cin>>name;
	//This line prints a line in terminal
	greet(name);
	//In the above line, endl statement insert a new line, it is needed to use output flow operator "<<" for make it work 
	cout<<"Please enter your age (just numbers): ";
	cin>>age; //makes age read
	aumentarEdad(age);
	if(isLegal(age)){
		cout<<endl<<endl;
		cout<<"Your age is: "<<age<<", thanks for using this program"<<endl;
	}
	else
	{
		cout<<endl<<endl;
		cout<<"Your age is: "<<age<<", you're underage thanks for using this program "<<endl;
	}
	
	return 0;
}

//Function Definition
void greet(string text){
	cout<<"Hello World, this is my very first C++ programm, I'm, "<<text<<endl<<endl;
}

bool isLegal(int age){
	if(age>=18)
		return true;
	else
		return false;
}

void aumentarEdad(int &age){
	age+=2;
}
