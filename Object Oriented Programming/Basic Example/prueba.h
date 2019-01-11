//Preprocesor directive for basic input output manipulation
#include <iostream>
//This includes functions as cin, cout for write/read functions
using namespace std;

class prueba{
	public:
		int valor1;
		string nombre;
		char inicial;
	public:
	prueba(){
		cout<<"Objeto creado desde el constructor"<<endl;
	}
	
	void metodoDespedir(){
		cout<<"Adios"<<endl;
	}	
	
};
