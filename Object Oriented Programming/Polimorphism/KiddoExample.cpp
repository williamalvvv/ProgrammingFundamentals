#include <iostream>
using namespace std;

#include "Kiddo.h"

int main(){
	string msg = " Im an Kiddo Object";
	Kiddo estudiante;
	estudiante.greet();
	estudiante.greet(msg);
	estudiante.setName("William");
	estudiante.setGrade(3);
	estudiante.customGreet("Hi folks");
	cout<<"My name is: "<<estudiante.printName()<<endl;
}
