/*
Febrero 17, 2021
Ximena V�zquez
Programa de Jerarqu�a de operaciones con n�meros reales
*/


#include <stdio.h>

int main (){
          float a,b,c,d;
          float e1,e2,e3,e4;

          a=-3;
          b=4.5;
          c=-5.2;
          d=7.3;
          e1=(a+b)*c/d;
          e2=((a+b)*c)/d;
          e3=(a+b)+(c/d);
          e4=a+b*c/d;
         printf("e=(a+b)*c/d%f\n",e1);
         printf("e=((a+b)*c)/d%f\n",e2);
         printf("e=(a+b)+(c/d)%f\n",e3);
         printf("e=a+b*c/d%f\n",e4);
      
}