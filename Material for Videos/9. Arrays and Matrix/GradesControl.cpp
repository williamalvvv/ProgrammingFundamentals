/*

Programa que permite el registro de las N notas de los M alumnos, permite tambien la busqueda de un registro en especifico.

Programa que mediante el uso de arreglos, matrices, ciclos repetitivos, realiza las funciones desarrolladas arriba.

*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int n;  //Variable que para almacenar el numero de alumnos que se almacenaran.
    int m;  //Variable que almacenara la cantidad de notas a almacenar para cada uno de los N alumnos.
    cout<<"Programa de Registro de Notas - Escuela Manguito Tierno"<<endl<<endl;
    string nombre; //Variabl que servira para la busqueda de los nombres de los alumnos
    cout<<"Por favor ingrese la cantidad de Alumnos a registrar: ";
    cin>>n; //Se captura la variable N que determinara la cantidad de alumnos a procesar.
    cout<<"Ingrese Cuantas notas va a registrar por alumno: ";
    cin>>m; //Se captura la varibale M que determinara la cantidad de notas que se van a procesar para cada uno de los alumnos.
    string nombres[n]; //Arreglo de N posiciones que estara destinado para que se almecenen los nombres de cada uno de los alumnos
    float mi_arreglo[n][m];//Matriz de N filas (Una para cada alumno) y de M columnas (Una para cada una de las notas)
    int row; //Variables que almacenaran el indice de la fila, y por lo tanto del alumno.
    int col; //Variable que almaenara la posicion de la columna y por tanto de la nota,
    char resp; //Variable de respuesta para repeticion de bucle.
    bool existe; //Bandera para verificacion si el alumno existe.
    system("clear");
    /*
    Se inicia el llenado de los datos, cada vez que se ejecute el ciclo externo, se registrara el nombre del alumno
    dentro del arreglo nombres[n] y tambien se van a llenar los datos de cada fila.

    Note que para emular el funcionamiento de los datos lo que se hace es recorrer el arreglo en cada una de sus posiciones, y al
    mismo tiempo para cada una de las posiciones del arreglo, se recorre cada fila de la matriz similar a lo que se muestra a continuacion

    Tome en cuenta que se ha ingresado los valores de 5 alumnos, y 5  notas

    por lo tanto el proceso de llenado se realizara asi, para la iteracion #1 del ciclo externo


        +--------------+--------------+--------------+--------------+-------------+
        |Alumno1       |NULL          |NULL          |NULL          |NULL         |
        +--------------+--------------+--------------+--------------+-------------+

        Y para cada una de las iteraciones del ciclo interno se tendra

        |Iteracion 1   |Iteracion 2   |Iteracion 3   |Iteracion 4   |Iteracion 5
            |               |               |               |               |
            v               V               V               V               V
        +--------------+--------------+--------------+--------------+-------------+
        |5             |5             |5             |             5|           10|
        |NULL          |NULL          |NULL          |          NULL|         NULL|
        |NULL          |NULL          |NULL          |          NULL|         NULL|
        |NULL          |NULL          |NULL          |          NULL|         NULL|
        |NULL          |NULL          |NULL          |          NULL|         NULL|
        +--------------+--------------+--------------+--------------+-------------+

    para la iteracion #2 del ciclo externo

        +--------------+--------------+--------------+--------------+-------------+
        |Alumno1       |Alumno2          |NULL          |NULL          |NULL         |
        +--------------+--------------+--------------+--------------+-------------+

        Y para cada una de las iteraciones del ciclo interno se tendra

        |Iteracion 1   |Iteracion 2   |Iteracion 3   |Iteracion 4   |Iteracion 5
            |               |               |               |               |
            v               V               V               V               V
        +--------------+--------------+--------------+--------------+-------------+
        |5             |5             |5             |             5|           10|
        |10            |8             |7             |             9|            8|
        |NULL          |NULL          |NULL          |          NULL|         NULL|
        |NULL          |NULL          |NULL          |          NULL|         NULL|
        |NULL          |NULL          |NULL          |          NULL|         NULL|
        +--------------+--------------+--------------+--------------+-------------+

        Y asi sucesivamente hasta que los datos esten llenos por completo:

        para la iteracion #5 del ciclo externo

        +--------------+--------------+--------------+--------------+-------------+
        |Alumno1       |Alumno2       |Alumno3       |Alumno4       |Alumno5      |
        +--------------+--------------+--------------+--------------+-------------+

        Y para cada una de las iteraciones del ciclo interno se tendra

        |Iteracion 1   |Iteracion 2   |Iteracion 3   |Iteracion 4   |Iteracion 5
            |               |               |               |               |
            v               V               V               V               V
        +--------------+--------------+--------------+--------------+-------------+
        |5             |5             |5             |             5|           10|
        |10            |8             |7             |             9|            8|
        |10            |8             |7             |             9|            8|
        |10            |8             |7             |             9|            8|
        |10            |8             |7             |             9|            8|
        +--------------+--------------+--------------+--------------+-------------+


    */
    for(int i=0;i<n;i++) //<--- Note que en la definicion de este ciclo el limite de iteraciones es N, el numero de alumnos
    {
        cout<<"Ingrese el nombre del alumno ["<<i+1<<"]: ";
        cin>>nombres[i]; //Captura de los datos de los nombres de los alumnos para las N veces
        /*
        Cada vez que se ejecute el ciclo interno, se iran llenando las posiciones N,M de la columna de la iteracion
        por lo tanto se realizara el llenado de los datos de las notas
        */
        for(int j=0;j<m;j++) //<--- Note que en la definicion de este ciclo el limite de iteraciones es M, el numero de notas
        {
            cout<<"Ingrese la nota ["<<j+1<<"] del alumno ["<<i+1<<"] ("<<nombres[i]<<") : ";
            cin>>mi_arreglo[i][j]; //Para cada una de las filas, se inicia la captura de datos de manera que, solamente se ingresen las notas
        }
        system("clear");
    }
    //Se finaliza el ciclo para el llenado de datos

    /*
    Proceso para mostrar las notas de los alumnos registrados, note que para emular el funcionamiento, lo que se hace es
    recorrer el arreglo de la misma forma que en el llenado, con la diferencia, que, ahora, lo que se hace es mostrar el valor
    que se ha almacenado en cada uno de los registros anteriores
    */
    for(int i=0;i<n;i++)
    {
        cout<<"Notas de "<<nombres[i]<<": "<<endl<<endl;
        cout<<"|\t";
        for(int j=0;j<m;j++)
        {
            cout<<mi_arreglo[i][j]<<"\t |\t ";
        }
        cout<<endl<<endl;
    }

    //Ciclo necesario para la busqueda de las notas
    do{
          //Proceso para la busqueda de notas de un alumno en especifico
            cout<<"Ingrese nombre para buscar datos: ";
            cin>>nombre; //Se captura el nombre del alumno que se va a buscar.
            /*
                Hay que tener en cuenta que para buscar un valor en el arreglo, hay que recorrer todo el mismo, por lo tanto,
                se debe iterar con un ciclo FOR
            */
        for(int i=0;i<n;i++)
        {
            //Se comienza a buscar los nombres dentro del arreglo iterando
            if(nombre==nombres[i]) //Si hay coincidencia entre lo que el usuario ingreso, y el nombre de un alumno
            {
                existe=true; //Se activa la bandera a TRUE
                cout<<"Alumno detectado en posicion: ["<<i<<"] \n"; //Se obtiene el indice en donde esta la coinciden
                cout<<"|\t";
                for(int j=0;j<m;j++)
                    cout<<mi_arreglo[i][j]<<"\t | \t"; //Esto solo se va a ejecutar para el ciclo especifico en donde ocurra la coincidencia
                cout<<endl<<endl;
                break;//Rompe el ciclo for, para no seguir iterando
            }
            else //Si no hay coincidencia entonces la bandera se mantiene en falso
            {
                existe = false;
            }
        }
        if(existe==false) //Si la bandera se ha mantenido en falso, se muestra el mensaje al usuario
        {
          cout<<"No existe el alumno"<<endl<<endl;
        }
        cout<<"Si desea salir, presione N/n, de lo contrario cualquier otra tecla: ";
        cin>>resp;//Captura de variable para verificar la continuacion
        system("clear");
    }while(resp !='n' && resp!='N');
    cout<<"Gracias por utilizar el sistema..."<<endl<<endl;
    return 0;
}
