Algoritmo Ejemplo_Clase4
	//Este algoritmo permite determinar si un numero es valido en el rango
	//de 1 a 10 y así permitir imprimir su tabla de multiplicar
	EntradaNumero<-0; //5
	Resultado<-0;
	contador<-1;
	Escribir "Por favor ingrese un numero en el rango de 1 a 10";
	Leer EntradaNumero;
		
	si (EntradaNumero>0 y EntradaNumero<=10) Entonces
		Mientras contador<=10 Hacer
			Resultado<-EntradaNumero*contador;
			Escribir EntradaNumero " X " contador " = " Resultado
			contador<-contador+1
		Fin Mientras
	SiNo
		Escribir "No se ha ingresado un numero correcto";
	FinSi
FinAlgoritmo
