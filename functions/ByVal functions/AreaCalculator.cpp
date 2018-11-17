#include<iostream>
#include<vector>

using namespace std;

vector<int> addToArray(vector<int> arreglo, int value);

int main()
{
	int *y = nullptr;
	vector<int> arreglo={1,2,3};
	vector<int> newarreglo;
	cout<<"Original Values in arreglo were:"<<endl;
	for(int i=0;i<3;i++)
		cout<<arreglo[i]<<endl;
	newarreglo=addToArray(arreglo, 2);
	cout<<"\n\nValues after addToArray() in newArreglo are:"<<endl;
	for(int i=0;i<3;i++)
		cout<<newarreglo.at(i)<<endl;
}

vector<int> addToArray(vector<int> arreglo, int value)
{
	for(int i=0;i<arreglo.size();i++)
		arreglo[i]+=value;
		
	return arreglo;
}
