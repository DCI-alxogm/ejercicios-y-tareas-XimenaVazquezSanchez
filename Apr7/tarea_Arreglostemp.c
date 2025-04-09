/*
creado el 7 de abril de 2025 
Ximena Vázquez Sánchez
Tarea 1. Arreglos.
*/

#include<stdio.h>

int main()
{
float TC[20], TK[20];
float delta,TF,TI;
printf(" Conversión de Temperaturas \n");
    printf("Esta tabla muestra temperaturas en grados Celsius y su equivalente en Kelvin.\n\n");
printf("Ingrese la temperatura inicial en °C: ");
    scanf("%f", &TI);
printf("Ingrese la temperatura final en °C: ");
    scanf("%f", &TF);
 delta = (TF-TI)/20;
 printf("Celsius || Kelvin \n");
 for(int i = 0; i <= 20; i++){
    TC[i] = TI + i * delta;
    TK[i] = TC[i]+ 273.15;
    printf("%f || %f \n",TC[i],TK[i]);
 }
return 0;
}
 