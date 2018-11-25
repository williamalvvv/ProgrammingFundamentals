#include <iostream> 
#include <iomanip>     
#include <cmath>  
using namespace std; 
int main()  
{     
	double squareroot = sqrt( 5 ); // calculates square root of 5     
	cout << "Square root of 2 with precision from 0 to 9 using cout.precision method from ios_base:" << endl;       
	cout << fixed; // fixed dot notation will be used
	   
	for (int posiciones = 0; posiciones <= 9; ++posiciones ) // show squareroot value using cout.precision method 
	{
	       cout.precision( posiciones );       
	       cout << squareroot << endl;    
	} // fin de for   
	cout << "\nSquare root of 2 with precision from 0 to 9 using setprecision manipulator:" << endl; 
	// establece la precisión para cada dígito, y después muestra la raíz cuadrada 
	for (int posiciones = 0; posiciones <= 9; ++posiciones )        
		cout << setprecision( posiciones ) << squareroot << endl; 
} // fin de main
