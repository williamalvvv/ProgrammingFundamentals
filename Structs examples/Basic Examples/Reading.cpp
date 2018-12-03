#include<iostream>
#include<string.h>
using namespace std;

struct nombre{
	string pnombre;
	string papellido;
};

int main(){
	nombre file;
	nombre file2;
	cout<<"Name: ";
	getline(cin,file.pnombre);
	cout<<"Last name: ";
	getline(cin,file.papellido);
	if(file.pnombre.length()>0 && file.papellido.length()>0)
	{
		if(file.pnombre.compare(file.papellido)>0)
			cout<<"Name is lexicographically greater"<<endl;
		else
			cout<<"Last Name is lexicographically greater"<<endl;
	}
	else
		cout<<"Maybe some input is empty or missing"<<endl;
	cout<<file.papellido<<" "<<file.pnombre;
}

