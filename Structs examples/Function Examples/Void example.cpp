#include<iostream>

using namespace std;

struct nombre{
	string pnombre;
	string papellido;
};

void testing(nombre test);

int main(){
	nombre file;
	nombre file2;
	file.papellido="Alvarado";
	file.pnombre="William";
	testing(file);
}

void testing(nombre test){
	cout<<test.papellido<<endl;
	cout<<test.pnombre<<endl;
}
