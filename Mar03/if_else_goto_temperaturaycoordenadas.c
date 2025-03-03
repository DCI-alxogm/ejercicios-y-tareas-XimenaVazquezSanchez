/*
Ximena Vázquez Sánchez  
Fecha: 03 de marzo de 2025 
If-Else y Go to Conversión de Temperatura o Coordenadas.
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>




int main(){
   int numero, residuo;
   float TC,TK,x,y,z,rE,thetaE,phi,rc,thetac,zc;
   char opc[2];
   coversiontemperatura:
   leernumero:


    // Solicitar entrada al usuario


    	printf("¿Que opcion te gustaria conocer una conversion de temperatura o una conversion de coordenadas?.\n");
    	printf("Favor de ingresar el numero: \n");
    	scanf("%i", &numero);

    //Operación del problema

   
    
    // Condicional
    
   	if (residuo==0){  

       	printf("Usted escogio la opcion de convertir a temperatura: \n");
   	} else{
      		 printf("Usted escogio la opcion de convertir coordenadas: \n");
  	 }

   // Segundo condicional
 	printf("Elegiste la opcion de convertir coordenadas: \n");
  	scanf("%s", opc);
  	if (strcmp(opc, "esfericas")==0){
        		goto conversiontemperatura;
	 }else if (strcmp(opc, "cilindricas")==0){
   		printf("¿Te gustaria probar con otro numero: \n");}
	else{
   	       	printf("solo acepto si o no");
	}

// Tercer condicional
 	 printf("printf("¿Que opcion te gustaria conocer una conversion de temperatura o una conversion de coordenadas?.\n");
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