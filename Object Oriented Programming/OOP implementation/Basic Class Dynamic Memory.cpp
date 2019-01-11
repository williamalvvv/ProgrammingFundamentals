#include <iostream>
using namespace std;

#include "Person.h"

int main(){
	string msg = "Hi object";
	Person estudiante; //Instancia de la clase Person
	Person *trabajador = new Person();
	
	estudiante.greet(); //llamada a la función greet
	estudiante.customGreet(msg); //Llamada a la función customGreet
	estudiante.asignarNombre("William");
	estudiante.asignarApellido("Fernandez");
	estudiante.asignarEdad(25);
	//estudiante.imprimirInfo();
	cout<<"Nombre: "<<estudiante.getName()<<endl;
	cout<<"Edad: "<<estudiante.getAge()<<endl;
	cout<<"\n\n Datos de Trabajador inicialmente: "<<endl;
	trabajador->imprimirInfo();
	trabajador->asignarNombre("Pedro");
	trabajador->asignarEdad(35);
	cout<<"\n\n Datos de Trabajador modificado: "<<endl;
	trabajador->imprimirInfo();
}
