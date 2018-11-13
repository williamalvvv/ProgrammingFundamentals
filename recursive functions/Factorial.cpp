#include<iostream>

using namespace std;

int fact(int x);

int main()
{
	int val;
	cout<<"Facorial from a number Calculator\n\n";
	cout<<"Input val to calculate factorial: ";
	cin>>val;
	cout<<"Factorial from "<<val<<" is: ";
	cout<<fact(val);
}

int fact(int x) {
    if (x <= 1)
        return 1;
    else
    	return x*fact(x-1);
}
