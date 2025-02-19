/*
19 de febrero  Ximena Vazquez Sanchez
*/

#include <stdio.h> // Librerias entrada y salida
#include <stdlib.h> // uso estándar de C

int main () {
     float C,K;
     // cuerpo del programa
     printf("Proporciona la temperatura que quieres convertir a grados Celsius /n");
     scanf("%f", &C);
     K=C+273.15;
     printf("La temperatura convertida a Kelvin es:",K);
     exit(0);
}