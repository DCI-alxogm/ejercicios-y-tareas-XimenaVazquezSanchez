/*
26 de marzo de 2025 
Ximena Vazquez Sanchez
Ejemplos del ciclo For
*/



//Ejemplo 1. añade una instrucción while 

#include<stdio.h>

int main()
{
     float temp_C, temp_K, temp_final, delta;
     int n=10, i;
   
     printf("Ingrese un valor para temperatura en grados celsius\n");
     scanf("%f", &temp_C);
     printf("Ingrese un valor para la temperatura final\n");
     scanf("%f", &temp_final);
     delta=(temp_final-temp_C);
     for(i=0;i<n;i++){
      printf("Ingrese un valor para temperatura en grados celsius\n");
     scanf("%f", &temp_C);
     temp_K=temp_C+273.15;
     printf("%f %f\n", temp_C,temp_K);
     temp_C=temp_C+delta; // se puede comprimir el código usando el siguiente comando: temp_C+=delta

     }

    return(0);


}
