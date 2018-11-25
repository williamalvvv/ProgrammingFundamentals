#include<iostream>

using namespace std;

struct nombre{
	string pnombre;
	string papellido;
};

nombre testing(nombre test);

int main(){
	nombre file;
	nombre file2;
	file.papellido="Alvarado";
	file.pnombre="William";
	file2=testing(file);
	cout<<file2.papellido<<endl;
	cout<<file2.pnombre<<endl;
}

nombre testing(nombre test){
	cout<<test.papellido<<endl;
	cout<<test.pnombre<<endl;
	return test;
}
