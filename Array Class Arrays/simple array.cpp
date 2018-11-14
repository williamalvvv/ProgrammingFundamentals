#include<iostream>
#include<array>

using namespace std;

int main(){
	array<int, 5> myarray;
	for (int i=0; i<5; i++) 
		myarray[i]=i+1;
	cout << "myarray contains:";
	for (int it = 0 ; it < myarray.size(); it++)
  		cout <<" "<<myarray.at(it);
}
