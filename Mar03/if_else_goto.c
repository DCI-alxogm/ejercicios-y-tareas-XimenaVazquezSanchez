/*
Ximena Vázquez Sánchez  
Fecha: 03 de marzo de 2025 
If-Else y Go to.
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>




int main(){
   int numero, residuo;
   char opc[2];
 leernumero:

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
 	 printf("¿Te gustaria probar con otro numero?: \n");
  	scanf("%s", opc);
  	if (strcmp(opc, "si")==0){
        		goto leernumero;
	 }else if (strcmp(opc, "no")==0){
   		printf("Usted llego al fin del programa, adios: \n");}
	else{
   	       	printf("solo acepto si o no");
	}

 	  
  


    return(0);


}               