#include<iostream>

using namespace std;

int fib(int x);

int main()
{
	int val;
	cout<<"Fibonacci Secuence Calculator\n\n";
	cout<<"Input val to calculate fibonacci: ";
	cin>>val;
	cout<<"Fibonacci sum is: ";
	cout<<fib(val);
}

int fib(int x) {
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    return fib(x-1)+fib(x-2);
}
