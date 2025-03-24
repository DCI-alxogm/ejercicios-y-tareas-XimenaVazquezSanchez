/* 
Ximena Vázquez Sánchez
creado el 24 de Marzo del 2025
Ejemplos de la instrucción While
*/


//Ejemplo 2.

#include <stdio.h>

int main ()
{
     float temp_C,temp_K;
     float inicial=100,final=200,delta;
     int n=10;
     int op=1;
 
    delta=(final-inicial);
    while(op==1){
    temp_K=temp_C+273.15;
    printf("%f %f \n",temp_C,temp_K);
    temp_C=temp_C+delta;

    while(temp_C<=final){
       temp_K=temp_C+273.15;
       printf("%f  %f\n", temp_C,temp_K);
       temp_C=temp_C+delta;
    }
  
   printf("Deseas hacer otra operacion? Presiona 1 para si, Presiona 2 para no\n");
   scanf("%i", &op);
    }
   return(0);
 
}
   
   