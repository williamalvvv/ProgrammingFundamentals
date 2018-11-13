#include<iostream>
#include<vector>
#include<conio.h>

using namespace std;

int main(){
	char response;
	int input;
	vector<int> myvector;
	cout<<"Dinamically Sized Vector Example"<<endl;
	do{
		response='\0';
		cout<<"\n\nOk, enter the new input: ";
		cin>>input;
		myvector.push_back(input);
		cout<<"\nContinue? (Y/N): ";
		response=getch();		
	}while(response=='y' || response=='Y');
	system("clear");
	cout << "myvector contains:";
	for (int it = 0 ; it < myvector.size(); it++)
  		cout <<"pos ["<<it<<"]: "<<myvector.at(it)<<"\n";
}
