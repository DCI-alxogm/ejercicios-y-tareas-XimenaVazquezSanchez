/* 
Ximena Vázquez Sánchez
creado el 24 de Marzo del 2025
modificado el 2 de abril de 2025
Ejemplos de la instrucción While, modificar para que ahora tenga el ciclo Do...While
*/


//Ejemplo 1.

#include <stdio.h>

int main() {
    float temp_C, temp_K;
    float inicial = 100, final = 200, delta;
    int n = 10;

    // Se calcula el incremento (delta) para cada iteración
    delta = (final - inicial) / n;  // Se corrigió el operador de división (antes era "\n")
    temp_C = inicial;  // Se inicializa la temperatura en grados Celsius

    // Se utiliza un ciclo do-while en lugar de while
    do {
        temp_K = temp_C + 273.15;  // Se convierte la temperatura a Kelvin
        printf("%f  %f\n", temp_C, temp_K);  // Se imprime la temperatura en °C y K
        temp_C = temp_C + delta;  // Se incrementa la temperatura según el valor de delta
    } while (temp_C <= final);  // Se repite hasta que temp_C supere el valor final

    return 0;
}