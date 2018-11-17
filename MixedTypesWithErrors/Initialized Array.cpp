#include<iostream>

using namespace std;

int main(){
	int vector[10]={"string",'a',true,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		cout<<"Valor del arreglo en la posición ["<<i<<"]: "<<vector[i]<<"\n";
	}
}
