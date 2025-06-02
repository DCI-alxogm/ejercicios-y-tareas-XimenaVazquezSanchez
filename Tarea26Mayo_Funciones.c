/*
 Tarea 26 de mayo Funciones
 * Autor: Ximena Vázquez Sánchez
 * Fecha: 1/jun/2025
 */
#include <stdio.h>

// Función 1: Convierte grados Celsius a Fahrenheit
float celsius_a_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

// Función 2: Calcula el área de un rectángulo
float area_rectangulo(float base, float altura) {
    return base * altura;
}

// Función 3: Imprime una línea decorativa
void imprimir_linea(int longitud) {
    for(int i = 0; i < longitud; i++) {
        printf("*");
    }
    printf("\n");
}

// Función 4: Determina si un número es positivo, negativo o cero
void verificar_numero(float num) {
    if(num > 0) {
        printf("El número %.2f es positivo.\n", num);
    } else if(num < 0) {
        printf("El número %.2f es negativo.\n", num);
    } else {
        printf("El número es cero.\n");
    }
}

int main() {
    // Imprimir título del programa
    imprimir_linea(30);
    printf("  PROGRAMA DE EJEMPLO EN C\n");
    imprimir_linea(30);
    
    // Ejemplo de conversión de temperatura
    float temp_celsius = 25.5;
    float temp_fahrenheit = celsius_a_fahrenheit(temp_celsius);
    printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", 
           temp_celsius, temp_fahrenheit);
    
    // Ejemplo de cálculo de área
    float base = 4.5, altura = 3.2;
    printf("El área del rectángulo (base=%.2f, altura=%.2f) es: %.2f\n",
           base, altura, area_rectangulo(base, altura));
    
    // Ejemplo de verificación de número
    verificar_numero(10);
    verificar_numero(-5);
    verificar_numero(0);
    
    // Línea final
    imprimir_linea(30);
    printf("Fin del programa.\n");
    imprimir_linea(30);
    
    return 0;
}