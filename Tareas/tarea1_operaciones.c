Ximena Vázquez
Tarea programa de Jerarquía de operaciones 
*/


#include <stdio.h>
#include <stdlib.h>

int main (){
          int a,b,c,d;
          int e1,e2,e3,e4;

         //cuerpo del programa
         printf("Asignar un valor para a \n");
         scanf("%d", &a);
         printf("Asignar un valor para b \n");
         scanf("%d", &b);
         printf("Asignar un valor para c \n");
         scanf("%d", &c);
         printf("Asignar un valor para d \n");
         scanf("%d", &d);
        
         printf("introduce el valor de d \n");
     scanf("%d",&d);
    e1=(a+b)*c/d;
    e2 = ((a+b)*c)/d;
    e3 = (a+b)*(c/d);
    e4 = a+(b*c)/d;
 
    printf("e = (a+b)*c/d) = %d \n",e1);
    printf("e = ((a+b)*c)/d = %d \n",e2);
    printf("e = (a+b)*(c/d) = %d \n",e3);
    printf("e = a+(b*c)/d = %d \n",e4);

        exit(0);
      
}
