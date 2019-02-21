//C++ libraries to be used
#include<iostream>
#include<array>

//Using standard namespace instruction
using namespace std;

//Main function
int main(){
	//Implementation of an 1d array class object with a size of 5 positions
	array<int, 5> myarray;
	
	//For loop used to fill myarray values with i+1 value, so it will keep 1,2,3,4,5 values
	for (int i=0; i<5; i++) 
		myarray[i]=i+1;
	//filling loop end
	cout << "myarray contains:";
	//loop used for printing values at position (i)
	for (int it = 0 ; it < myarray.size(); it++)
  		cout <<" "<<myarray.at(it);
  	//Loop for printing end
}
//Main function end
