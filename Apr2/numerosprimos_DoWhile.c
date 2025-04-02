/*
creado el 30 de marzo de 2025 
modificado el 2 de abril de 2025
Ximena Vázquez Sánchez
modificación de ciclo FOR a ciclo Do while
*/

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
    int inicio, fin, repetir;
    int primos[100]; // Almacenar hasta 100 números primos
    int contador;

    do {
        // Pedir el intervalo al usuario
        do {
            printf("Favor de ingresar el inicio del intervalo: ");
            scanf("%d", &inicio);
            printf("Favor de ingresar el fin del intervalo: ");
            scanf("%d", &fin);

            if (inicio > fin) {
                printf("El inicio del intervalo no puede ser mayor que el fin. Intente nuevamente.\n");
            }
        } while (inicio > fin); // Repetir si el inicio es mayor que el fin

        // Encontrar números primos dentro del intervalo
        contador = 0;
        int i = inicio;
        do {
            if (esPrimo(i)) {
                if (contador < 100) {
                    primos[contador++] = i;
                } else {
                    printf("Demasiados números primos en el intervalo. Intente nuevamente.\n");
                    contador = -1; // Indica que hay demasiados primos
                    break;
                }
            }
            i++;
        } while (i <= fin); // Se repite hasta alcanzar el valor final

        // Si hay demasiados primos, se reinicia el proceso
        if (contador == -1) continue;

        // Imprimir la cantidad de números primos
        printf("Hay %d números primos en el intervalo %d - %d.\n", contador, inicio, fin);
        
        // Imprimir los números primos en renglones de 20 números
        int j = 0;
        do {
            printf("%d ", primos[j]);
            if ((j + 1) % 20 == 0) {
                printf("\n");
            }
            j++;
        } while (j < contador);
        printf("\n");

        // Preguntar si el usuario desea repetir la operación
        printf("\n¿Deseas realizar otra operación? Presiona 1 para sí, 2 para no: ");
        scanf("%d", &repetir);

    } while (repetir == 1); // Si el usuario elige 1, se repite el proceso

    return 0;
}
