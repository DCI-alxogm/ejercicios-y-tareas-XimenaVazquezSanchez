/*
10 de marzo de 2025   Ximena Vazquez Sanchez 
Ejercicio de conversión de temperatura de Kelvin a Celsius o de Celsius a Kelvin
*/

// Definir las librerías
#include <stdio.h>  // Librerías para entrada y salida
#include <stdlib.h> // Uso estándar de C

int main() {
    // Definir variables
    int opcion;
    float temperatura, resultado;

    // Cuerpo del programa
    printf("Proporciona la temperatura que quieres convertir: \n");
    printf("1. Conversión de Celsius a Kelvin \n");
    printf("2. Conversión de Kelvin a Celsius \n");
    printf("Seleccione una opción (1 o 2): ");
    scanf("%d", &opcion);

    // Switch con los casos correspondientes
    switch (opcion) {
    // caso 1: Conversión de Kelvin a Celsius    
        case 1:
            printf("Favor de ingresar la temperatura en grados Celsius: ");
            scanf("%f", &temperatura);
            resultado = temperatura + 273.15;
            printf("La temperatura en grados Kelvin es: %.2f K\n", resultado);
            break;
   // caso 2: Conversión de Celsius a Kelvin   
        case 2:
            printf("Favor de ingresar la temperatura en grados Kelvin: ");
            scanf("%f", &temperatura);
            resultado = temperatura - 273.15;
            printf("La temperatura en grados Celsius es: %.2f °C\n", resultado);
            break;
    // Default: Indicar cualquier error y pedir otro valor.   
        default:
            printf("Opción no válida, favor de ingresar otro valor.\n");
            break;
    }

    return 0;
}
