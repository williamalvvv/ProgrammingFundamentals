#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
struct automobile 
{
	string carType;
  	int year;
  	string carColor;
  	string carMake;
  	string carPlate;
  	string carMotor;
  	string carVIN;
  	string features[3];
  	string names[3]={"Transmision","Traction","MotorSize"};
  	string carChasis;
};		
void SearchData(int searchType, automobile car[], int qty);
int main()
{
		int qty;
		char option;
		char cont;	
	cout<<"How many cars?: ";
	cin>>qty;
	automobile car[qty];
	for(int i=0;i<qty;i++)
	{
	cout<<"Filling data for Automobile No. "<<(i+1)<<":"<<endl<<endl;
	cout<<"Hello Plese fill data (Type): ";
	cin>>car[i].carType;
	cout<<"Hello Plese fill data (Year): ";
	cin>>car[i].year;
	cout<<"Hello Plese fill data (Color): ";
	cin>>car[i].carColor;
	cout<<"Hello Plese fill data (Make): ";
	cin>>car[i].carMake;
	cout<<"Hello Plese fill data (Plate): ";
	cin>>car[i].carPlate;
	cout<<"Hello Plese fill data (Motor No.): ";
	cin>>car[i].carMotor;
	cout<<"Hello Plese fill data (VIN): ";
	cin>>car[i].carVIN;
	cout<<"Hello Plese fill data (Chasis): ";
	cin>>car[i].carChasis;
	for(int j=0;j<3;j++)
	{
		cout<<"Please fill data for "<<car[i].names[j]<<" :";
		cin>>car[i].features[j];
	}
	cout<<endl<<endl<<endl;
	system("cls");
	}
	do
	{
		cout<<"Wanna look for a car?:"<<endl;
		cout<<"Search by?"<<endl;
		cout<<"a. Type"<<endl;
		cout<<"b. Make"<<endl;
		cout<<"c. Plate"<<endl;
		cout<<"d. Color"<<endl;
		cout<<"Enter selection: ";
		option=getch();
		switch(option)
		{
			case 'a':
				SearchData(1,car,qty);
			break;
			case 'b':
				SearchData(2,car,qty);
			break;
			case 'c':
				SearchData(3,car,qty);
			break;
			case 'd':
				SearchData(4,car,qty);
			break;
			default:
				cout<<"Wrong option"<<endl;
			break;
		}
		cout<<"\n\nWanna repeat the search?: ";
		cont=getche();
	}while(cont != 'n' || cont !='N' );
}

void SearchData(int searchType, automobile car[], int qty)
{
	string searchdata;
	switch(searchType)
	{
		case 1:
			cout<<"Enter Type: "<<endl;
			cin>>searchdata;
			for(int i=0;i<qty;i++)
			{
				if(car[i].carType==searchdata)
				{
					cout<<"Registered Data (Type):" << car[i].carType << " (Year): "<< car[i].year <<endl;
					cout<<"Registered Data (Color):" << car[i].carColor << " (Make): "<< car[i].carMake <<endl;
					cout<<"Registered Data (Plate):" << car[i].carPlate << " (Motor No.): "<< car[i].carMotor <<endl;
					cout<<"Registered Data (VIN):" << car[i].carVIN << " (Chasis): "<< car[i].carChasis <<endl;
					for(int j=0;j<3;j++)
					{
						cout<<"Data for "<<car[i].names[j]<<" :"<<car[i].features[j]<<endl;;
					}
					cout<<endl<<endl;
				}
			}			
		break;
		case 2:
			cout<<"Enter Make: "<<endl;
			cin>>searchdata;
			for(int i=0;i<qty;i++)
			{
				if(car[i].carMake==searchdata)
				{
					cout<<"Registered Data (Type):" << car[i].carType << " (Year): "<< car[i].year <<endl;
					cout<<"Registered Data (Color):" << car[i].carColor << " (Make): "<< car[i].carMake <<endl;
					cout<<"Registered Data (Plate):" << car[i].carPlate << " (Motor No.): "<< car[i].carMotor <<endl;
					cout<<"Registered Data (VIN):" << car[i].carVIN << " (Chasis): "<< car[i].carChasis <<endl;
					for(int j=0;j<3;j++)
					{
						cout<<"Data for "<<car[i].names[j]<<" :"<<car[i].features[j]<<endl;;
					}
					cout<<endl<<endl;
				}
			}
		break;
		case 3:
			cout<<"Enter Make: "<<endl;
			cin>>searchdata;
			for(int i=0;i<qty;i++)
			{
				if(car[i].carPlate==searchdata)
				{
					cout<<"Registered Data (Type):" << car[i].carType << " (Year): "<< car[i].year <<endl;
					cout<<"Registered Data (Color):" << car[i].carColor << " (Make): "<< car[i].carMake <<endl;
					cout<<"Registered Data (Plate):" << car[i].carPlate << " (Motor No.): "<< car[i].carMotor <<endl;
					cout<<"Registered Data (VIN):" << car[i].carVIN << " (Chasis): "<< car[i].carChasis <<endl;
					for(int j=0;j<3;j++)
					{
						cout<<"Data for "<<car[i].names[j]<<" :"<<car[i].features[j]<<endl;;
					}
					cout<<endl<<endl;
				}
			}
		break;
		case 4:
			cout<<"Enter Make: "<<endl;
			cin>>searchdata;
			for(int i=0;i<qty;i++)
			{
				if(car[i].carColor==searchdata)
				{
					cout<<"Registered Data (Type):" << car[i].carType << " (Year): "<< car[i].year <<endl;
					cout<<"Registered Data (Color):" << car[i].carColor << " (Make): "<< car[i].carMake <<endl;
					cout<<"Registered Data (Plate):" << car[i].carPlate << " (Motor No.): "<< car[i].carMotor <<endl;
					cout<<"Registered Data (VIN):" << car[i].carVIN << " (Chasis): "<< car[i].carChasis <<endl;
					for(int j=0;j<3;j++)
					{
						cout<<"Data for "<<car[i].names[j]<<" :"<<car[i].features[j]<<endl;;
					}
					cout<<endl<<endl;
				}
			}
		break;
	}
}

