Algoritmo Ejemplo_Clase4SinRep
	//Este algoritmo permite determinar si un numero es valido en el rango
	//de 1 a 10 y así permitir imprimir su tabla de multiplicar
	EntradaNumero<-0; //5
	Resultado<-0;
	Escribir "Por favor ingrese un numero en el rango de 1 a 10";
	Leer EntradaNumero;
	si (EntradaNumero>0 y EntradaNumero<=10) Entonces
	    Escribir EntradaNumero " X 1 =  " 1*EntradaNumero
		Escribir EntradaNumero " X 2 =  " 2*EntradaNumero
		Escribir EntradaNumero " X 3 =  " 3*EntradaNumero
		Escribir EntradaNumero " X 4 =  " 4*EntradaNumero
		Escribir EntradaNumero " X 5 =  " 5*EntradaNumero
		Escribir EntradaNumero " X 6 =  " 6*EntradaNumero
		Escribir EntradaNumero " X 7 =  " 7*EntradaNumero
		Escribir EntradaNumero " X 8 =  " 8*EntradaNumero
		Escribir EntradaNumero " X 9 =  " 9*EntradaNumero
		Escribir EntradaNumero " X 10 = " 10*EntradaNumero
	SiNo
		Escribir "No se ha ingresado un numero correcto";
	FinSi
FinAlgoritmo
