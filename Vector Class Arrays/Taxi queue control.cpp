#include<iostream>
#include<vector>
#include<iomanip>
#include<string>

using namespace std;

int main(){
	char response='\0';
	int option;
	int id;
	string driverName;
	string plateNumber;
	cout<<setfill('*')<<setw(20)<<"\t";
	cout<<"Taxi queue system\t"<<setfill('*')<<setw(20)<<"\n";
	vector<int> taxis;
	vector<string> drivers;
	vector<string> plates;
	do{
		system("cls");
		cout<<"Main menu options:"<<endl;
		cout<<"1. Add New Taxi to standby queue"<<endl;
		cout<<"2. Check for actual data"<<endl;
		cout<<"Please, input your option: ";
		cin>>option;
		switch(option){
			case 1:
				cout<<"Taxi ID: ";
				cin>>id;
				taxis.push_back(id);
				cout<<"Driver Name: ";
				cin.ignore();
				getline(std::cin,driverName);
				drivers.push_back(driverName);
				cout<<"Plate Number: ";
				cin.ignore();
				getline(cin,plateNumber);
				plates.push_back(plateNumber);
			break;
			case 2:
				//cout<<setw(73)<<setfill('-')<<"\n";
				cout<<"|ID\t\t\t|Driver\t\t\t|Plate\t\t\t|\n";
				cout<<setw(73)<<setfill('-')<<"\n";
				for(int i=0; i<taxis.size();i++)
				{
					cout<<"|"<<taxis.at(i)<<"\t\t\t|"<<drivers.at(i)<<"\t|"<<plates.at(i)<<"\t\t\t|\n";
					cout<<setw(73)<<setfill('-')<<"\n";
					//cout<<setw(90- drivers[i].length())<<setfill('-')<<"\n";	
				}
			break;
			default:
				cout<<"Non correct option has been selected."<<endl;
			break;
		}
  		cout<<"Want to continue? (Y/N)?"<<endl;
  		cin>>response;
	}while(response=='Y' || response=='y');	
}
