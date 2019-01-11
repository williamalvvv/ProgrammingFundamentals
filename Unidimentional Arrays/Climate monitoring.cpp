#include<iostream>
#include<conio.h>

using namespace std;
/*
+-------+-------+-------+-------+
|       |       |       |       | 
|   DP  |   DP  |   DP  |   DP  |
|       |       |       |       | 
+-------+-------+-------+-------+
+-------+-------+-------+-------+
|       |       |       |       | 
|   ##  |   ##  |   ##  |   ##  |
|       |       |       |       | 
+-------+-------+-------+-------+
+-------+-------+-------+-------+
|       |       |       |       | 
|   ##  |   ##  |   ##  |   ##  |
|       |       |       |       | 
+-------+-------+-------+-------+

*/
int main(){
	char response='\0';
	int n;
	do{
		system("cls");
		cout<<"Climate conditions monitor CLIMACOOL Aplication\n\n";
		cout<<"How many data points will you track?: ";
		cin>>n;
		string trackingPoints[n];
		float tempVector[n];
		float humidVector[n];
		for(int i=0;i<n;i++)
		{
			cout<<"\n";
			cout<<"Tracking Point # ["<<i<<"] name: ";
			cin>>trackingPoints[i];
			cout<<"Temperature at ["<<trackingPoints[i]<<"]: ";
			cin>>tempVector[i];
			cout<<"Humiduty Level at ["<<trackingPoints[i]<<"]: ";
			cin>>humidVector[i];
			cout<<"\n";
		}
		
		cout<<"showing data briefly:\n\n";
		
		for(int j=0;j<65;j++)
			cout<<"-";
		cout<<endl;	
		cout<<"|\tName\t|\tTemperature\t|\tHumidity\t|\n";
		for(int j=0;j<65;j++)
			cout<<"-";
		cout<<endl;	
		for(int i=0;i<n;i++)
		{
			cout<<"|\t"<<trackingPoints[i]<<"\t|\t\t"<<tempVector[i]<<"\t|\t\t"<<humidVector[i]<<"\t|\n";
			for(int j=0;j<65;j++)
				cout<<"-";
			cout<<endl;
		}
		cout<<"\n\nData traking has finished. Wanna repeat the program? (Y/N)?: ";
		response=getch();
	}while(response!='n' && response!='N');
}
