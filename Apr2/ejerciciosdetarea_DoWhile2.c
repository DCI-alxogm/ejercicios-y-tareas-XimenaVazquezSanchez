/* 
Ximena Vázquez Sánchez
creado el 24 de Marzo del 2025
modificado el 2 de abril del 2025
Ejemplos de la instrucción While
*/


//Ejemplo 2.

#include <stdio.h>

int main() {
    float temp_C, temp_K;
    float inicial = 100, final = 200, delta;
    int n = 10;
    int op = 1;

    // Se calcula el incremento (delta) para cada iteración
    delta = (final - inicial) / n;  // Se corrigió la división (antes faltaba el "/ n")
    
    do {
        temp_C = inicial;  // Se reinicia temp_C en cada iteración

        // Primer cálculo de conversión
        temp_K = temp_C + 273.15;
        printf("%f %f \n", temp_C, temp_K);
        temp_C = temp_C + delta;

        // Ciclo para imprimir todas las temperaturas hasta el valor final
        while (temp_C <= final) {
            temp_K = temp_C + 273.15;
            printf("%f  %f\n", temp_C, temp_K);
            temp_C = temp_C + delta;
        }

        // Pregunta al usuario si desea repetir la operación
        printf("Deseas hacer otra operacion? Presiona 1 para si, Presiona 2 para no\n");
        scanf("%i", &op);
        
    } while (op == 1);  // Se repite si el usuario ingresa 1

    return 0;
}