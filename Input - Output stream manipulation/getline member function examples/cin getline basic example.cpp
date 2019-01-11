#include<iostream>
#include<string>

using namespace std;

int main() 
{ 
  	const int SIZEAR = 80;
	string entrada;     
	char buffer[ SIZEAR ]; // creates an 80 chars arry
	char buffer2[ SIZEAR ]; // creates an 80 chars arry
	char buffer3[ SIZEAR ]; // creates an 80 chars arry     
	// input chars into array using getline function     
	cout << "Input some words:" << endl;     
	cin.getline( buffer, SIZEAR );   
	cout << "Input some words:" << endl;
	getline(cin,entrada);    
	// print array content
	cout<<buffer<<endl;
	cout<<entrada<<endl;      
} // fin de main

