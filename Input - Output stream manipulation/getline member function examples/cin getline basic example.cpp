#include<iostream>

using namespace std;

int main() 
{ 
  	const int SIZEAR = 80;     
	char buffer[ SIZEAR ]; // creates an 80 chars arry     
	// input chars into array using getline function     
	cout << "Input some words:" << endl;     
	cin.getline( buffer, SIZEAR );     
	// print array content     
	cout << "\nYour input is:" << endl << buffer << endl;  
} // fin de main

