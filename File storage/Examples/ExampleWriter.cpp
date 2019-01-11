// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main () {
		int value;
		string name;
	 	cout<<"Input some numerical Value: ";
	 	cin>>value;
	 	cout<<"Input your name: ";
	 	cin>>name;
	 	ofstream myfile ("example.txt", ios::app);
		if (myfile.is_open())
		{
		  cout << "Value: "<<value<<endl;
		  myfile <<value<< "\n";
		  cout << "Name: "<<name<<endl;
		  myfile <<name<< "\n";
		  myfile.close();
		}
		else cout << "Unable to open file";
		return 0;
}
