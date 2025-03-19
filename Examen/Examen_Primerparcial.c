/* Examen Primer Parcial 
  Ximena Vázquez Sánchez
Fecha 19 de marzo de 2025
*/

//Ejercicio 5

#inlcude <stdio.h>
#include <math.h>
# include <string.h>

int main ()
     int opcion, numero, suma, digito;
     float base, altura, area, TF;
     char letra;

    printf("Seleccione una opcion: \n");
    printf("1. Calcular el area de un rectangulo \n");
    printf("2. Convertir de grados Celsius a Farenheit \n");
    printf("3. Verificar si un numero es multiplo de otro  \n");
    printf("4. Sumar los digitos de un numero de dos cifras \n");
    scanf("%d", &opcion);

    switch(opcion) {
        	case 1:
                      printf("Ingrese la base y la altura del rectangulo: \n");
                      scanf("%f  %f" &base, &altura);
                      area=base * altura;
                      printf("El area del rectangulo es: %d \n", area);
                      break;
               case 2:
                      printf("Ingrese la temperatura en grados Celsius: \n");
                      scanf("%f " &base);
                      (base* 9/5)+32=base;
                      printf("La temperatura en Farenheit es: %2.f \n", TF);
                      break;
              case 3:
                      printf("Ingrese dos numeros: \n");
                      scanf("%d %d " &numero, &digito);
                      if (numero % digito =0){
	    printf("%d es multiplo de %d : \n", numero,  digito);
                      }else {
                             printf("%d no es multiplo de %d \n", numero, digito);
                      }
                      break;
             case 4:
                      printf("Ingrese un numero de dos cifras : \n");
                      scanf("%d " &numero, &suma);
                      if (numero >= 10 && numero <= 99){
                      suma = (numero/10)+(numero%10)
	    printf("la suma de los digitos es: %2.d \n", suma);
                      }else {
                             printf("%d no es multiplo de %d \n", suma);
                      }
                      break;
         default: 
                 printf("Opcion no valida \n");
                 
                  }
                
              return 0;

}
    


// Ejercicio 6
 

   #inlcude <stdio.h>
   #include <math.h>

    int main ()
     float a, b, c;
     printf("Seleccione que operacion le gustaria realizar para conocer el valor de X: \n");
     printf("1. Opcion 1\n");
     printf("2. Opcion 2 \n");
     printf("3. Opcion 3 \n");
     scanf("%d", &opcion);
switch(opcion) {
        	case 1:
                      printf("Usted selecciono la opcion 1: \n");
                      x= 5+ 3* (2*2*2-4);
                      printf("El resultado para x es: %f \n", x);
                      break;
               case 2:
                      printf("Usted selecciono la opcion 2: \n");
                      x=(6+2*3)/((sqrt(16))+2);
                      printf("El resultado para x es: %2.f \n", x);
                      break;
              case 3:
                      printf("Ingrese los valores para a, b y c: \n");
                      scanf("%f  %f %f " &a, &b, &c);
                      x= (sin(a+b*b)+cos(c/2)*b)/(1+e*)
                      break;
    