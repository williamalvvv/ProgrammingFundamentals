#include<iostream>
#include<array>
#include<vector>

using namespace std;

void hola();

int main(){
	//int vector[2][2]={{1,2},{3,4}};
	/*
	int score[4][5]=	{
	{1 ,2 ,3 ,4 ,5},
	{6 ,7 ,8 ,9 ,10},
	{11,12,13,14,15},
	{16,17,18,19,20}
						};
	*/
	array <array<int, 5>, 4> matriz = {
	1 ,2 ,3 ,4 ,5,
	6 ,7 ,8 ,9 ,10,
	11,12,13,14,15,
	16,17,18,19,20
						};
	
	/*
	for(int i=0;i<4;i++)
	{ 
		for(int j=0;j<5;j++)
		{
			cout<<"\tmatriz["<<i<<"]["<<j<<"]<<\t|:";
			cin>>matriz[i][j];
		}
	}
	*/
	for(int i=0;i<4;i++)
	{ 
		for(int j=0;j<80;j++)
		{
			cout<<"-";
		}
		cout<<"\n";
		cout<<"|";
		for(int j=0;j<5;j++)
		{
			//cout<<"\t"<<matriz[i][j]<<"\t|";
		cout<<"\t"<<matriz[i].at(j)<<"\t|";
		}
		cout<<"\n";
	}
		for(int j=0;j<80;j++)
		{
			cout<<"-";
		}
}

void hola(){
	cout<<"hola"<<endl;
}
