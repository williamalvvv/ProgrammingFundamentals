Algoritmo Ejemplo_Clase4
	//Este algoritmo permite determinar si un numero es valido en el rango
	//de 0 a 10 y así permitir imprimir su tabla de multiplicar
	EntradaNumero<-0; //5
	Resultado<-0;
	Escribir "Por favor ingrese un numero en el rango de 1 a 10";
	Leer EntradaNumero;
	//Validacion de rango
		//V			Y		//V -> V
	si (EntradaNumero>0 y EntradaNumero<=10) Entonces
		Para contador<-1 Hasta 10 Con Paso 1 Hacer
			Resultado<-EntradaNumero*contador;
			Escribir EntradaNumero " X " contador " = " Resultado
		Fin Para
	SiNo
		Escribir "No se ha ingresado un numero correcto";
	FinSi
FinAlgoritmo
