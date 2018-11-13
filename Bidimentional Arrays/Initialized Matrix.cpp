#include<iostream>

using namespace std;

int main(){
	int vector[2][2]={{1,2},{3,4}};
	cout<<"Values in Matrix:\n\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"2D array value at position ["<<i<<","<<j<<"]: "<<vector[i][j]<<"\n";
		}
	}
	cout<<"\n\nMatrix Formated Output:\n\n";
	for(int i=0;i<2;i++)
	{ 
		for(int j=0;j<33;j++)
		{
			cout<<"-";
		}
		cout<<"\n";
		cout<<"|";
		for(int j=0;j<2;j++)
		{
			cout<<"\t"<<vector[i][j]<<"\t|";
		}
		cout<<"\n";
	}
		for(int j=0;j<33;j++)
		{
			cout<<"-";
		}
	cout<<"\n\n";
}
