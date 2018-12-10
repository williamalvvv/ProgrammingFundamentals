//Archivo: Person.h
//Contenido:
#include <iostream>
using namespace std;
class Person{
	protected:
	int age;
	string name;
	string lastname;	
	public: 
	Person(){
	
	}
	void greet(void){
		cout<<"Hola, soy una persona!\n"<<endl;
	}
	void customGreet(string msg){
		cout<<"This is a custom greet: "<<msg<<endl;
	}
};

