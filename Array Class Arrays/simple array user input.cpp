//C++ libraries to be used
#include<iostream>
#include<array>

//Using standard namespace instruction
using namespace std;

//Main function
int main(){
	//Implementation of an 1d array class object with a size of 10 postions size
	array<int, 10> myarray;
	
	//Loop for input values at position (i) 
	for (int i=0; i<myarray.size(); i++) 
	{
		cout<<"Value for position ["<<i<<"]: ";
		cin>>myarray.at(i);
	}
	//Loop for input values end
	
	cout << "myarray contains:";
	
	//Loop used for printing values at position i
	for (int it = 0; it < myarray.size(); it++) //myarray.size() return how many postions does myarray has.
  		cout <<" "<<myarray.at(it);
  	//Loop for printing values end
}
//Main function end
