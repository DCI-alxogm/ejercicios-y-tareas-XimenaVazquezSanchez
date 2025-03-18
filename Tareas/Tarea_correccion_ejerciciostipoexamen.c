/*
 * Archivo: Tarea_correccion_ejerciciostipoexamen.c
 *
 * Contenido:
 * 1. Código incorrecto.
 * 2. Correcciones necesarias.
 * 3. Código corregido con comentarios.
 */

// -------------------------------
// 1. CÓDIGO INCORRECTO
// -------------------------------

/*
#include <stdio.h>
#include <math.h>

int opcion, numero;
float decimal;
char letra1, letra2, letra3;
int contador = 0;  // error 1.

printf("Seleccione una opcion:\n");
printf("1.Calcular el cuadrado de un número:\n");
printf("Verificar si un número es par o impar:\n");
printf("Calcular la raiz cuadrada de un número decimal:\n");
printf("Contar cuantas vocales hay en tres letras ingrasadas:\n");
scanf("%d", &opcion);

switch (opcion){
  case 1:
    printf("Ingrese un número:\n");
    scanf("%d", &numero);
    resultado=pow(numero,2.0);
    printf("El cuadrado de %d es %f\n", numero, resultado);
    break;
 case 2:
    printf("Ingrese un número:\n");
    scanf("%d", &numero);
    if(numero %2 ==0){
       printf("El número es par. \n");
      }else{
        printf("El número es impar. \n");
      }
      break;
 case 3:
     printf("Ingrese un número decimal:");
     scanf("%f", &decimal);
     if(decimal >=0) {
     decimal = sqrt(decimal);
     printf("La raíz cuadrada es: %.2f\n", decimal);
   }else{
  printf ("No se puede calcular la raíz cuadrada de un número negativo.\n");
   }
  break;
 case 4:
   printf("Ingrese tres letras separadas por espacios:");
   scanf("%c%c%c", &letra1,&letra2, &letra3);
   if (letra1 == 'a'|| letra1 == 'e' || letra1 'i'|| letra 'o'|| letra1 == 'u'||
       letra1 == 'A'|| letra1=='E'  || letra1 'I'||letra 'O'|| letra1 == 'U') {
      contador=contador + 1;
}

// ... Código similar para letra2 y letra3 ...

 printf ("Se ingresaron %d vocales.\n", contador);
 break;
default:
 printf("Opción no válida\n")
}

 return 0;
}
*/

// -------------------------------
// 2. CORRECCIONES NECESARIAS
// -------------------------------
/*
1. Falta la declaración de la variable 'resultado'.
2. No se incluye la librería <math.h>.
3. Falta espacio en el scanf para leer caracteres ('%c%c%c' debería ser ' %c %c %c').
4. El menú de opciones está mal formateado, faltan números en opciones.
5. Falta el ';' después del printf("Opción no válida\n").
6. Comparaciones incorrectas con '==' en las vocales.
7. Falta 'break;' en el default del switch.
8. Uso incorrecto de pow(): debería convertirse a float.
9. Formato inconsistente en if(numero %2 ==0) (espaciado incorrecto).
10. Falta de la función main() para encapsular el código.
*/

// -------------------------------
// 3. CÓDIGO CORREGIDO
// -------------------------------

#include <stdio.h>
#include <math.h>

int main() {
    int opcion, numero;
    float decimal, resultado;
    char letra1, letra2, letra3;
    int contador = 0;  

    printf("Seleccione una opción:\n");
    printf("1. Calcular el cuadrado de un número\n");
    printf("2. Verificar si un número es par o impar\n");
    printf("3. Calcular la raíz cuadrada de un número decimal\n");
    printf("4. Contar cuántas vocales hay en tres letras ingresadas\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese un número:\n");
            scanf("%d", &numero);
            resultado = (float)pow(numero, 2.0);
            printf("El cuadrado de %d es %.2f\n", numero, resultado);
            break;

        case 2:
            printf("Ingrese un número:\n");
            scanf("%d", &numero);
            if (numero % 2 == 0) {
                printf("El número es par.\n");
            } else {
                printf("El número es impar.\n");
            }
            break;

        case 3:
            printf("Ingrese un número decimal:\n");
            scanf("%f", &decimal);
            if (decimal >= 0) {
                decimal = sqrt(decimal);
                printf("La raíz cuadrada es: %.2f\n", decimal);
            } else {
                printf("No se puede calcular la raíz cuadrada de un número negativo.\n");
            }
            break;

        case 4:
            printf("Ingrese tres letras separadas por espacios:\n");
            scanf(" %c %c %c", &letra1, &letra2, &letra3);

            if (letra1 == 'a' || letra1 == 'e' || letra1 == 'i' || letra1 == 'o' || letra1 == 'u' ||
                letra1 == 'A' || letra1 == 'E' || letra1 == 'I' || letra1 == 'O' || letra1 == 'U') {
                contador++;
            }
            if (letra2 == 'a' || letra2 == 'e' || letra2 == 'i' || letra2 == 'o' || letra2 == 'u' ||
                letra2 == 'A' || letra2 == 'E' || letra2 == 'I' || letra2 == 'O' || letra2 == 'U') {
                contador++;
            }
            if (letra3 == 'a' || letra3 == 'e' || letra3 == 'i' || letra3 == 'o' || letra3 == 'u' ||
                letra3 == 'A' || letra3 == 'E' || letra3 == 'I' || letra3 == 'O' || letra3 == 'U') {
                contador++;
            }
            printf("Se ingresaron %d vocales.\n", contador);
            break;

        default:
            printf("Opción no válida\n");
            break;
    }
    return 0;
}
