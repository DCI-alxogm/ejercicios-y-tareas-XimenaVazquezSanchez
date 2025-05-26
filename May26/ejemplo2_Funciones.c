/*
Nombre: Ximena Vázquez Sánchez 
Fecha: 26 de mayo 2025
Ejemplo: Función con Argumentos de entrada y salida (float)
*/

// Colocar las librerías.

#include <stdio.h>

float cuadrado(float _x);
int main(){
      float x, x2;
      printf("Introduce un numero");
      scanf("%f", &x);
      x2=cuadrado(x);
      printf("El cuadrado de %f es %f \n", x ,x2);
      return (0);
}

float cuadrado (float_x){
       return  float _x*_x;
}
      
     
