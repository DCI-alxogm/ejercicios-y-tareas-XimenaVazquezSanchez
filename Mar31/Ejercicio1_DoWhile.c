/*
31 de marzo de 2025 
Ximena Vazquez Sanchez
Ejercicios Do..While
*/



//Ejemplo 1. número positivo.

#include <stdio.h>
 
float pedirNumeroPositivo() {
    float numero;
    do {
        printf("Favor de ingresar un número positivo: ");
        scanf("%f", &numero);
        if (numero <= 0) {
            printf("El número debe ser positivo, este numero no es válido. Intente de nuevo.\n");
        }
    } while (numero <= 0);
    
    return numero;
}
 
int main() {
    float numero = pedirNumeroPositivo();
    printf("El número ingresado es válido: %.2f\n", numero);
    return 0;
}
 