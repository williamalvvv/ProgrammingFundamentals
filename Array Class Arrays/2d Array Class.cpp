//C++ libraries to be used
#include<iostream>
#include<array>
#include<vector>

//Using standard namespace instruction
using namespace std;

//Main function
int main(){
	//This is an implementation of an 2D array class object, 5 columns, 4 rows
	array <array<int, 5>, 4> matriz = 
	{
	1 ,2 ,3 ,4 ,5,
	6 ,7 ,8 ,9 ,10,
	11,12,13,14,15,
	16,17,18,19,20
	};
	
	//Outer for loop to get row index in order to print the data
	for(int i=0;i<4;i++)
	{ 
		//This foor loop is only used for print a line, to format output data as a table
		for(int j=0;j<80;j++)
		{
			cout<<"-";
		}
		//End format for loop
		cout<<"\n";
		cout<<"|";
		//Inner for loop, this loop is used to get column index in order to print the data
		for(int j=0;j<5;j++)
		{
			//Prints the element at position (i,j) in the array
			cout<<"\t"<<matriz[i].at(j)<<"\t|";
		}
		//Inner for loop end
		cout<<"\n";
	}
	//Outer for loop end
	
	//This foor loop is only used for print a line, to format output data as a table
	for(int j=0;j<80;j++)
	{
		cout<<"-";
	}
	//End format for loop
}
//Main function end

