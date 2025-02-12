/*
Agosto 12, 2025
Ximena Vazquez Sanchez
Primer programa, mostrando estructura, definición de variables, imprimir variables
*/

#include <stdlib.h> // libreria estanda C.
#include <stdio.h> // libreria para interaccion con la pantalla.


int main ( ) {

	char nombre[10];
	int edad;
	float temperatura;
	//Cuerpo del programa;
	printf ("¿Cual es tu nombre? \n");
	scanf("%s", nombre);
	printf ("Hola, %s este es el primer programa del curso PB2025\n", nombre); // el caracter \n significa un salto de linea


         printf ("Introduce tu edad \n");
	scanf("%i", &edad); // %i indica el tipo de variable (entero en este caso).
	printf("¿Que temperatura marco el termometro la ultima vez que fuiste al supermercado? \n");
	scanf ("%f", &temperatura);

 	
	printf ("Tu edad es: %i \n", edad);
	printf("Tu ultimo registro de temperatura fue: %f\n", temperatura);
		
	exit(0);



}
