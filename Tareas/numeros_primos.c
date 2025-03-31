/******************************************************************************

30 de marzo de 2025 
Ximena Vazquez Sanchez
Tarea 2: Ejemplos del ciclo For

*******************************************************************************/
#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int inicio, fin;
    int primos[100]; // Almacenar hasta 100 números primos
    int contador = 0;

    // Pedir el intervalo al usuario
    do {
        printf("Favor de ingresar el inicio del intervalo: ");
        scanf("%d", &inicio);
        printf("Favor de ingresar el fin del intervalo: ");
        scanf("%d", &fin);

        if (inicio > fin) {
            printf("El inicio del intervalo no puede ser mayor que el fin. Intente nuevamente.\n");
            continue;
        }

        // Encontrar números primos dentro del intervalo
        contador = 0;
        for (int i = inicio; i <= fin; i++) {
            if (esPrimo(i)) {
                primos[contador++] = i;
                if (contador > 100) {
                    printf("Demasiados números primos en el intervalo. Intente nuevamente.\n");
                    break;
                }
            }
        }
    } while (contador > 100);

    // Imprimir la cantidad de números primos
    printf("Hay %d números primos en el intervalo %d - %d.\n", contador, inicio, fin);
    
    // Imprimir los números primos en renglones de 20 números
    for (int i = 0; i < contador; i++) {
        printf("%d ", primos[i]);
        if ((i + 1) % 20 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}