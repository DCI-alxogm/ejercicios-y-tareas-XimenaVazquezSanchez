/*
Ximena Vázquez Sánchez  
Fecha: 26 de febrero de 2025 
Condicionales.
*/

#include <stdio.h>
#include<stdlib.h>




int main(){
   int numero, residuo;
   char respuesta[3];


    // Solicitar entrada al usuario


    printf("¿Que numero te gustaria conocer si se considera par o impar?.\n");
    printf("Favor de ingresar el numero: \n");
    scanf("%i", &numero);

    //Operación del problema

   residuo=numero%2;
    
    // Condicional
    
   if (residuo==0){  

       printf("El numero que usted ingreso es un número par: \n");
   } else{
       printf("El numero que usted ingreso es un número impar: \n");
   }

   // Segundo condicional
  printf("¿Te gustaria probar con otro numero: \n");

  if strcmp(residuo=1 ){

  printf("Favor de ingresar el numero: \n");
    scanf("%s", &numero);


   } else (residuo==0 );{
   printf("El numero que usted ingreso es un número impar, adios: \n");
   }
  


    exit(0);


}               