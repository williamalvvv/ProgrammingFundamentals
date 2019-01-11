// CPP program to illustrate *char array usage
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // pointer str points to const string literal "Hello". No need to declare size. 
    string cadena = "This is an char string as it was declared";
    string cadena2;
    cout<<"Contenido de cadena: ";
    cout << cadena << endl; 
    cout<<"Ingrese un valor para la cadena2: ";
    getline(cin, cadena2);
    cout<<"Las cadenas combinadas se ven de la siguiente manera: ";
    cout<< cadena + " " + cadena2<<endl;
    cout<<"Modificando cadena: ";
    cin>>cadena;
    cout<<"Nuevo valor de cadena: ";
    cout<<cadena;
    return 0; 
} 
