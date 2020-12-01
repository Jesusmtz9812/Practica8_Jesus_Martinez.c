// Este es  el primer programa
//seccion de librerias que se usaran en el codigo
#include <stdio.h>

//declaracion de funciones
int main(){

//declaracion de variables
    float numeroAsignado;

    /*
    Bloque de instrucciones
    */

    printf("Bienvenido al programa que calcula si el numero es positivo o negativo");
    printf(".-.");

    printf("Ingrese el numero a determinar");
    scanf("%f", &numeroAsignado);

    if(numeroAsignado >=0)//Aqui hacemos la comparacion si es posito o negativo
        {
            printf("El numero es positivo");
        }
    else
        {
            printf("El numero es negativo");
        }

    return 0;

}
//Aqui termina el programa 1 
/*Aqui incia el programa 2*/

//seccion de librerias que se usaran en el codigo
#include <stdio.h>

//declaracion de funciones
int main(){

//declaracion de variables

    int cantidadLapices;

    /*
    bloque de instrucciones
    */

    printf("Bienvenido al programa que calcula cuanto pagaras por los lapices");
    printf(".........");

    printf("Ingresa la cantidad de lapices que el usario va a comprar");
    scanf("%d", &cantidadLapices);
    if(cantidadLapices >=1000) //Aqui hacemos la coparacion para ver cuanto se cobrara por los lapices
        {
            printf("Los lapices costaran 85 centavos");
        }
    else
        {
            printf("Los lapices costaran 90 centavos");
        }

    return 0;

}
// aqui termina el programa 2

/*Aqui incia el programa 3*/
/* estas son nuestras librerias a ocupar*/
#include <stdio.h>
//Aqui declaramos nuestras funciones
int main(){
    int num;
    //Aqui declaramos nuestras funciones a utilizar
    float operacion;
    float operacion2;
/*este es nuestro bloque de instrucciones*/
    printf("Ingrese el precio del traje: \n");
    scanf("%i",&num);
    if (num<2500) //hacemos la comparacion para ver cuanto sera el descuento
        {
            operacion=num-(num*.08); //hacemos la operacion para saber el descuento
            operacion2=num*.08; //Aqui hacemos la operacion para el precio final
            printf("tu descuento es de/n %.2f", operacion2);
            printf("El costo con des cuento es de/n %.2f",operacion);

        }
        if (num>=2500)
        {
            operacion+num-(num*.15);//hacemos la operacion para saber el descuento
            operacion2=num*.15; //Aqui hacemos la operacion para el precio final
            printf("El descuento es de/n %.2f",operacion2);
            printf("EL costo ya con descuento es de/n,operacion");

        }


return 0;

        }
        
        //Aqui termina el programa 3
        /*Aqui empieza el programa 4*/
        
        //Aqui declaramos nuestras librerias a utilizar
#include <stdio.h>
//Aqui declaramos nuestras funciones
int main(){
//Aqui declaramos nuestras variblaes
    int a,b,c,mayor;
/* este es nuestro bloque de instrucciones*/


    printf("bienvenido al programa que determina que numero es mayor");
    printf("Ingrese el  segundo valor a: ");
    scanf("%i",&a);
    printf("Ingrese el segundo valor b: ");
    scanf("%i",&b);
    printf("Ingrese el tercer valor c: ");
    scanf("%i",&c);

    if(a>b) //Aqui hacemos la comparacion

        {
            if(a>c){ //Aqui hacemos la comparacion
                mayor=a;
                }
                else{
                    mayor=c; //Aqui decimos cual es el mayor
                    }
        }
        else{
            if(b>c){//Aqui hacemos la comparacion
                        mayor=b; //Aqui decimos cual es el mayor
                    }

            else{
                    mayor=c; //Aqui decimos cual es el mayor
                }


        }

    printf("El numero mayor de los ingresados es: %i.\n",mayor);

    return 0;

}
//Aqui termina el programa 4
/*Aqui empieza el programa 5*/
//Aqui agregamos nuestras librerias a utilizar
#include <stdio.h>
//Aqui declaramos nuestras funciones
int main(){
//aqui declaramos nuestras
    int alumnos;
    float precioTotal;
    /*Este es nuestro bloque de instrucciones*/
    printf("bienvenido al programa de programa de autobuses");
    printf("Ingrese el numero de alumnos a viajar");
    scanf("%i",&alumnos);
    if(alumnos>100)//aqui hacemos comparacion para saber la cantidad de alumnos
        {
         precioTotal=alumnos*65;
         printf("El total a pagar por alumno es %d",precioTotal/alumnos);
         printf("El total a pagar por la renta del autobus es: ", precioTotal);
        }
        else if(alumnos>=50)//aqui hacemos comparacion para saber la cantidad de alumnos
         {
          precioTotal=alumnos*70;
          printf("El precio a pagar por alumno es %d",precioTotal/alumnos);
          printf("El total a pagar por la renta del autobus es: ", precioTotal);

         }
           else if(alumnos>=30)//aqui hacemos comparacion para saber la cantidad de alumnos
            {
            precioTotal=alumnos*95;
            printf("El precio a pagar por el alumno es %d",precioTotal/alumnos);
            printf("El total a pagar por la renta del autobus es:", precioTotal);
            }
            else
            {
                precioTotal=4000;
                printf("el precio es de $4000");

            }



return 0;

}

