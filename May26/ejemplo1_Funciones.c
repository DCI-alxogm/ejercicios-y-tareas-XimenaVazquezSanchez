

// Colocar las librerías.
//Función principal(función que me regresa un valor de tipo entero y no tiene argumentos de entrada)
#include <stdio.h>
void cuadrado();
int main(){
cuadrado();
 return (0);
}

void cuadrado(){
      float x, x2;
      printf("Introduce un numero");
      scanf("%f", &x);
      x2=x*x;
      printf("El cuadrado de %f es %f \n", x ,x2);
     

}
