/*

Programa que permite el registro de las N notas de los M alumnos, permite tambien la busqueda de un registro en especifico.

Programa que mediante el uso de arreglos, matrices, ciclos repetitivos, realiza las funciones desarrolladas arriba.

*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int n=0;  //Variable que para almacenar el numero de alumnos que se almacenaran.
    int m=0;  //Variable que almacenara la cantidad de notas a almacenar para cada uno de los N alumnos.
    char menu;
    int row; //Variables que almacenaran el indice de la fila, y por lo tanto del alumno.
    int col; //Variable que almaenara la posicion de la columna y por tanto de la nota,
    char resp; //Variable de respuesta para repeticion de bucle.
    bool existe; //Bandera para verificacion si el alumno existe.
    char continuar;
    string nombre; //Variabl que servira para la busqueda de los nombres de los alumnos
    cout<<"Programa de Registro de Notas - Escuela Manguito Tierno"<<endl<<endl;

    cout<<"Se procedera a registrar a los alumnos junto con sus notas"<<endl;
    cout<<"Por favor ingrese la cantidad de Alumnos a registrar: ";
            cin>>n; //Se captura la variable N que determinara la cantidad de alumnos a procesar.
            cout<<"Ingrese Cuantas notas va a registrar por alumno: ";
            cin>>m; //Se captura la varibale M que determinara la cantidad de notas que se van a procesar para cada uno de los alumnos.
            string nombres[n]; //Arreglo de N posiciones que estara destinado para que se almecenen los nombres de cada uno de los alumnos
            float promedios[n]; //Arreglo de N posiciones que podra almacenar los promedios de cada uno de los alumnos
            float mi_arreglo[n][m];//Matriz de N filas (Una para cada alumno) y de M columnas (Una para cada una de las notas)
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
                por lo tanto se realizara el llenado de los datos de las notas cada fila de la matriz, equivale a las notas de un alumno
                por ejemplo la fila 1, equivale a las notas del alumno 1, etc...
                */
                for(int j=0;j<m;j++) //<--- Note que en la definicion de este ciclo el limite de iteraciones es M, el numero de notas
                {
                    cout<<"Ingrese la nota ["<<j+1<<"] del alumno ["<<i+1<<"] ("<<nombres[i]<<") : ";
                    cin>>mi_arreglo[i][j]; //Para cada una de las filas, se inicia la captura de datos de manera que, solamente se ingresen las notas
                }
                system("clear");
            }
            cout<<"Se ha terminado el ingreso de los alumnos y sus notas."<<endl<<endl;
            //Se finaliza el ciclo para el llenado de datos
do{
        cout<<"Seleccione Una opcion Del menu que se presenta a continuacion:"<<endl;
        cout<<"a. Buscar registro de Notas de alumnos"<<endl;
        cout<<"b. Ver Reporte de notas de TODOS los alumnos"<<endl;
        cout<<"c. Determinar Promedio Global de la Clase"<<endl;
        cout<<"d. Determinar los 3 primeros Lugares de la Clase"<<endl;
        cout<<"e. Salir del Sistema. \n"<<endl;
        cout<<"Ingrese la opcion seleccionada: ";
        cin>>menu;
        switch(menu)
        {
            case 'a':
                system("clear");
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
                    cout<<"Si desea consultar otro registro presione cualquier tecla, de lo contrario, la tecla N o n...";
                    cin>>resp;//Captura de variable para verificar la continuacion
                    system("clear");
                }while(resp !='n' && resp!='N');
            break;

            case 'b':
                    system("clear");
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
            break;

            case 'c':
                //Para Calcular el promedio global de la clase, es necesario calcular el promedio individual de cada uno de los alumnos, y finalmente calcular el promedio global
                //Para el promedio individual, recuerde que se deben sumar las M notas coontenidas en cada una de las filas de la matriz y dividirlas entre M.
                //Escriba el codigo necesario para realizarlo.
            break;

            case 'd':
                // //Para Calcular el promedio global de la clase, es necesario calcular el promedio individual de cada uno de los alumnos, y finalmente en base al promedio de cada uno de estos
                // Se deberan ordenar de acuerdo a las notas para determinar cual de ellos son los 3 primeros lugares.

            break;

            case 'e':
                    system("exit");
            break;

            default:
                cout<<"No se ha seleccionado una opcion Valida..."<<endl;
            break;

        }
        cout<<"Desea realizar otra operacion? Presione Cualquier Tecla, Salir presione n o N."<<endl;
        cin>>continuar;
        system("clear");
    }while(continuar!='n' && continuar!='N');
    cout<<"Gracias por utilizar el sistema..."<<endl<<endl;
    return 0;
}
