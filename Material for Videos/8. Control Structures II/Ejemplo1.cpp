//Preprocesor directive for basic input output manipulation
#include <iostream>
//Using C++ standard namespace functions
using namespace std;

//Program body
int main(){
	int num; //This variable will keep input from user
	int multi;
	cout<<"Please, input a number for me to count to: ";
	cin>>num;
	if(num<100 && num>=1){
		for(int i=0;i<=10;i=i+2)
		{
			multi=num*i; //Calculo de cada multiplicacion
			cout<<num<<" X "<<i<<" = "<< multi<<endl;
		}
	}
	else{
		cout<<"Number can't be equals or greater than 100'"<<endl;
	}
}
