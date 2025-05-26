/*
Nombre: Ximena Vázquez Sánchez 
Fecha: 26 de mayo 2025
Ejemplo: Función no tiene argumentos de salida pero si de entrada.
*/

// Colocar las librerías.
//Función principal(función que me regresa un valor de tipo entero y no tiene argumentos de entrada)
#include <stdio.h>
#include <math.h>
void cuadrado();
void cubo();
int main(){
float x;
printf("Introduce un numero");
scanf("%f", &x);
cuadrado(x);
 return (0);
}

void cuadrado(float _x){
      float x2;
      x2=x*x;
      printf("El cuadrado de %f es %f \n", x ,x2);
}
     
void cubo(float _x){
      float x3;
      x3=pow(_x,3);
      printf("El cuadrado de %f es %f \n", _x ,x3);
     
}
