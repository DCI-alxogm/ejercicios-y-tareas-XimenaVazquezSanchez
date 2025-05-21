/* Creado el 10 de Febrero de 2025 por ximena vazquez, ejemplo 1. Pointer */
   
#include <stdio.h>

  int main(){

            int var=20;
            int *ip;

            ip=&var;
// imprimir la dirección de la variable a la que se va a guardar.
            printf("La direccion de la variable ip es %p \n", var);
            printf("El valor de la varible ip es %p \n", ip);
            printf("El valor de escrito en la direccion %p es: %d \n", ip, *ip);
}