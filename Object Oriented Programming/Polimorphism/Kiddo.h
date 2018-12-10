//Archivo: Person.h
//Contenido:
#include "Person.h"
class Kiddo : public Person{
	int grade;
	public: Kiddo(){
	
	}
	void greet(){
		cout<<"Empty message"<<endl;
	}
	void greet(string msg){
		cout<<"Hola, soy un kiddo this is my message"<<msg<<endl;
	}	
	void setGrade(int grade){
		this->grade=grade;
	}
	void setName(string name){
		this->name=name;
	}
	string printName(){
		return name;
	}
};
