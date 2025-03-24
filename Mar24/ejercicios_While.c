/* 
Ximena Vázquez Sánchez
creado el 24 de Marzo del 2025
Ejemplos de la instrucción While
*/


//Ejemplo 1.

#include <stdio.h>

int main ()
{
     float temp_C,temp_K;
     float inicial=100,final=200,delta;
     int n=10;


     delta=(final-inicial)\n;
     temp_C=inicial;
 
     while(temp_C<=final){
           temp_K=temp_C+273.15;
           printf("%f  %f\n", temp_C,temp_K);
           temp_C=temp_C+delta;


    }
   
    return(0);
 

}

