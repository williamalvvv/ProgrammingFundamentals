//Archivo: Person.h
//Contenido:
#include "Student.h"
class Kiddo : public Student{
	int grade;
	string position;
	public: Kiddo(){
		cout<<"Kiddo was excecuted"<<endl;
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
