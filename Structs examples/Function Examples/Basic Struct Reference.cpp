#include<iostream>

using namespace std;

struct nombre{
	string pnombre;
	string papellido;
};

nombre testing(nombre& test);

int main(){
	nombre file;
	nombre file2;
	file.papellido="Alvarado";
	file.pnombre="William";
	testing(file);
	cout<<file.papellido<<endl;
	cout<<file.pnombre<<endl;
}

nombre testing(nombre& test){
	test.pnombre+=" Campos";
	test.papellido+=" Vladimir";
	return test;
}
