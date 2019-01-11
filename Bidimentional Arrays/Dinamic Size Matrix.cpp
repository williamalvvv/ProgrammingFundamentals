#include<iostream>

using namespace std;

int main(){
	int n;
	int m;
	cout<<"How many rows will the matrix have?: ";
	cin>>n;
	cout<<"How many Columns will the matrix have?: ";
	cin>>m;
	int score[n][m];

	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<m;j++)
		{
			cout<<"Enter value for position ["<<i<<"]["<<j<<"]: ";
			cin>>score[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<m;j++)
		{
		
			cout<<score[i][j]<<endl;
		}
	}
	
	/*
	cout<<"\n\n\n"<<endl;
		
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<m*16;j++)
		{
			cout<<"-";
		}
		cout<<"\n";
		cout<<"|";
		for(int j=0;j<m;j++)
		{
			cout<<"\t"<<score[i][j]<<"\t|";
		}
		cout<<"\n";
	}
	for(int j=0;j<m*16;j++)
		{
			cout<<"-";
		}
		*/
}
