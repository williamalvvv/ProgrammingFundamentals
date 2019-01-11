#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
#include<conio.h>
#include "Textable.h"

using namespace std;

bool checkForItemInt(vector<int> arr, int data);
bool checkForItemInt(vector<string> arr, string data);
void printTable(vector<int> taxis, vector<string> drivers, vector<string> plates);

int main(){
	char response='\0';
	int option;
	int id;
	char confirmation;
	int idToReinsert;
	string driverName;
	string plateNumber;
	cout<<"Taxi queue system\t\n";
	vector<int> taxis;
	vector<string> drivers;
	vector<string> plates;
	vector<int> nAtaxis;
	vector<string> nAdrivers;
	vector<string> nAplates;
	do{
		system("cls");
		cout<<"Main menu options:\n\n"<<endl;
		cout<<"\t\t1. Add New Taxi to standby queue"<<endl;
		cout<<"\t\t2. Check for actual data"<<endl;
		cout<<"\t\t3. Sent Taxi to a Client"<<endl;
		cout<<"\t\t4. Check for taxis in routes"<<endl;
		cout<<"\t\t5. Reinsert a taxi to avaialable queue"<<endl;
		cout<<"\t\t6. Exit program"<<endl<<endl;
		cout<<"Please, input your option: ";
		cin>>option;
		switch(option){
			case 1:
				do{
					cout<<"Taxi ID: ";
					cin>>id;
				}while(checkForItemInt(taxis, id));
				taxis.push_back(id);
				do{
					cout<<"Driver Name: ";
					cin.ignore();
					getline(cin,driverName);
				}while(checkForItemInt(drivers, driverName));
				drivers.push_back(driverName);
				do{
					cout<<"Plate Number: ";
					cin.ignore();
					getline(cin,plateNumber);
				}while(checkForItemInt(plates, plateNumber));
				plates.push_back(plateNumber);
			break;
			case 2:		
				printTable(taxis, drivers, plates);
			break;
			case 3:
				cout<<"Really wanna send first avialable taxi? (Y/N): ";
				confirmation=getch();
				cout<<"\n";
				if(confirmation=='Y' || confirmation=='y')
				{
					//Adding Items to non avaialable vectors
					nAtaxis.push_back(taxis.at(0));
					nAdrivers.push_back(drivers.at(0));
					nAplates.push_back(plates.at(0));
					//Deleting items from avaialable arrays
					taxis.erase(taxis.begin());
					drivers.erase(drivers.begin());
					plates.erase(plates.begin());
				}
				printTable(taxis, drivers, plates);
			break;
			case 4:
				cout<<"Taxis in route: "<<endl;
				printTable(nAtaxis, nAdrivers, nAplates);
			break;
			case 5:
				cout<<"Which taxi would you like to reinsert? "<<endl;
				printTable(nAtaxis, nAdrivers, nAplates);
				cout<<"\nPlease, input order below: ";
				cin>>idToReinsert;
				taxis.push_back(nAtaxis.at(idToReinsert));
				drivers.push_back(nAdrivers.at(idToReinsert));
				plates.push_back(nAplates.at(idToReinsert));
				nAtaxis.erase(nAtaxis.begin()+idToReinsert);
				nAdrivers.erase(nAdrivers.begin()+idToReinsert);
				nAplates.erase(nAplates.begin()+idToReinsert);
				cout<<"Taxi has been already inserted to avialable queue"<<endl;
			break;
			case 6:
				cout<<"Program has ended...";
				system("pause");
				system("exit");
			break;
			default:
				cout<<"Non correct option has been chosen."<<endl;
			break;
		}
  	cout<<"Want to continue? (Y/N)?: ";
  	response=getch();
	}while(response=='Y' || response=='y');	
}

bool checkForItemInt(vector<int> arr, int data){
	for(int i=0;i<arr.size();i++)
	{
		if(arr.at(i)==data)
		{
			cout<<"Data is already registered at position ["<<i<<"].\nPlease Enter Data again.\n";
			return true;
		}
		else
		{
			return false;
		}
	}		
}

bool checkForItemInt(vector<string> arr, string data){
	for(int i=0;i<arr.size();i++)
	{
	if(arr.at(i)==data)
		{
			cout<<"Data is already registered at position ["<<i<<"].\nPlease Enter Data again.\n";
			return true;
		}
		else
		{
			return false;
		}
	}		
}

void printTable(vector<int> taxis, vector<string> drivers, vector<string> plates)
{
	TextTable t( '-', '|', '+' );
	t.add("Order");
	t.add("ID");
	t.add("Driver Name");
	t.add("Plate Number");
	t.endOfRow();
	for(int i=0; i<taxis.size();i++)
	{
		t.add(to_string(i));
		t.add(to_string(taxis.at(i)));
		t.add(drivers.at(i));
		t.add(plates.at(i));
		t.endOfRow();	
	}
	t.setAlignment( 2, TextTable::Alignment::RIGHT );
	cout<<t;
}
