#include<iostream>

using namespace std;

int* addToArray(int arreglo[], int size, int value);

int main()
{
	int arreglo[3]={1,2,3};
	int* newarreglo;
	cout<<"Original Values in arreglo were:"<<endl;
	for(int i=0;i<3;i++)
		cout<<arreglo[i]<<endl;
	newarreglo=addToArray(arreglo, 3, 2);
	cout<<"\n\nValues after addToArray() in newArreglo are:"<<endl;
	for(int i=0;i<3;i++)
		cout<<newarreglo[i]<<endl;
}

int* addToArray(int arreglo[], int size, int value)
{
	for(int i=0;i<size;i++)
		arreglo[i]+=value;
	return arreglo;
}
