/* HEADERS SECTION*/

//Preprocesor directive for basic input output manipulation
#include <iostream>
//This includes functions as cin, cout for write/read functions
using namespace std;

/*PROGRAM BODY SECTION*/

//Program body
int main(){
	//Variables definition
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	char opcion;
	char seguir;
	do{
		system("cls");
		cout<<"a. Mayor de tres numeros"<<endl;
		cout<<"b. Suma numeros"<<endl;
		cout<<"c. Salir"<<endl;
		cout<<"\n\n"<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opcion;
		switch(opcion){
			case 'a': 
				cout<<"This program will find the greater of three numbers..."<<endl;
				//inputs and outputs for user information
				cout<<"Value for num1: ";
				cin>>num1;
				cout<<"Value for num2: ";
				cin>>num2;
				cout<<"Value for num3: ";
				cin>>num3;
				//logic to find the output
				//logic to find the output
				if(num1>num2 && num1>num3)
					cout<<"Num1 is the greatest: "<<num1<<endl;
				else if(num2>num3 && num2>num1)
					cout<<"Num2 is the greatest "<<num2<<endl;
				else
					cout<<"Num3 is the greatest "<<num3<<endl;
			break;
			case 'b':
				cout<<"Value for num1: ";
				cin>>num1;
				cout<<"Value for num2: ";
				cin>>num2;
				cout<<"Value for num3: ";
				cin>>num3;
				cout<<"La suma de los valores es: "<<(num1+num2+num3)<<". "<<endl;
			break;
			case 'c':
				system("exit");
			break;
			default:
				cout<<"No se ha seleccionado una opcion valida"<<endl;
			break;
		}
		cout<<"Seguro de Salir del programa? S/N"<<endl;
		cin>>seguir;
	}while(seguir!='s' && seguir!='S');
}
