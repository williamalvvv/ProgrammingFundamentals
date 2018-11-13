#include<iostream>

using namespace std;

bool isPrime(int p, int i=2);

int main(){
	int val;
	int i;
	cout<<"Prime number Calculator\n\n";
	cout<<"Input val to check if prime: ";
	cin>>val;
	if(isPrime(val,2))
		cout<<"Number is prime\n";
	else
		cout<<"Number is not prime\n";
}

bool isPrime(int p, int i)
{
if (i==p) 
	return true;//or better  if (i*i>p) return 1;
if (p%i == 0) 
	return false;
return isPrime (p, i+1);
}
