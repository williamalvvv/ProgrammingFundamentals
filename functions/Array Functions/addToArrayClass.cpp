#include<iostream>
#include<array>

using namespace std;

array<int,3> addToArray(array<int, 3> arreglo, int value);

int main()
{
	array<int,3> arreglo={1,2,3};
	array<int, 3> newarreglo;
	cout<<"Original Values in arreglo were:"<<endl;
	for(int i=0;i<3;i++)
		cout<<arreglo[i]<<endl;
	newarreglo=addToArray(arreglo, 2);
	cout<<"\n\nValues after addToArray() in newArreglo are:"<<endl;
	for(int i=0;i<3;i++)
		cout<<newarreglo[i]<<endl;
}

array<int,3> addToArray(array<int,3> arreglo, int value)
{
	for(int i=0;i<arreglo.size();i++)
		arreglo[i]+=value;	
	return arreglo;
}
