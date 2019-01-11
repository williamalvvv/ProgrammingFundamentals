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
			age=18;
			name="Estudiante";
			lastname="Estudiante";
		}
		void greet(void){
			cout<<"Hola, soy una persona!\n"<<endl;
		}
		void customGreet(string msg){
			cout<<"This is a custom greet: "<<msg<<endl;
		}
		void asignarNombre(string nombre){
			name = nombre;
		}
		void asignarApellido(string apellido){
			lastname=apellido;
		}
		void asignarEdad(int edad){
			age=edad;
		}
		void imprimirInfo(){
			cout<<"Nombre: "<<name<<", Apellido: "<<lastname<<", Edad: "<<age<<endl;
		}
		int getAge(){
			return age;
		}
		string getName(){
			return name;
		}
};

