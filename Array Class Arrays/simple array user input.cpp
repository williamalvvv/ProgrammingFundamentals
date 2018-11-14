#include<iostream>
#include<array>

using namespace std;

int main(){
	array<int, 10> myarray;
	for (int i=0; i<myarray.size(); i++) 
	{
		cout<<"Value for position ["<<i<<"]: ";
		cin>>myarray.at(i);
	}
	cout << "myarray contains:";
	for (int it = 0; it < myarray.size(); it++)
  		cout <<" "<<myarray.at(it);
}
