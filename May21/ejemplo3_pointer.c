/* Creado el 10 de Febrero de 2025 por ximena vazquez, ejemplo 3 Pointer */
#include <stdio.h>
#include <stdlib.h>


 int main(){
          float num, i, *ptr;
          printf("Introduce el valor de la variable num");
          scanf("%d, &num");
          
          ptr=(float*) malloc (num * sizeof(float));
          printf("sizeof of local_int: %zu bytes\n", sizeof(float));
          printf("sizeof of local_int: %zu bytes\n", sizeof(ptr));


         printf("Introduce la secuencia de %d numeros flotantes", num);
         
         for(i=0;i<num;i++){
                         scanf("%f", ptr+i);
                          }
  
         printf("Los numeros ingresados y almacenados en la dirección de la memoria\n");
          
          for(i=0;i<num;i++){
                         scanf("%p \t %f \n", ptr+i, *(ptr+i));
                          }
}