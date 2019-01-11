#include<iostream>

using namespace std;

int main(){
	int n; //Almacenar el tamaño del arreglo 
	cout<<"How many items there will be in the array?: ";
	cin>>n;
	int vector[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese valor del arreglo en la posición ["<<i<<"]: ";
		cin>>vector[i];
	}
	cout<<"\n\nInput data has finished. \n";
}
