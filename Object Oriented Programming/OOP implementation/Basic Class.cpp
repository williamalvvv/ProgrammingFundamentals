#include <iostream>
using namespace std;

#include "Student.h"

int main(){
	Student *myest = new Student();
	string msg = "Hi object";
	Student estudiante;
	estudiante.greet();
	estudiante.customGreet(msg);
}
