#include <stdio.h>

int main() {
    // Declarar un arreglo de 6 números
    int numeros[6];
    int suma = 0;
    
    // Pedir al usuario que ingrese los 6 números
    printf("Ingrese 6 números enteros:\n");
    
    for(int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Calcular la suma de los números
    for(int i = 0; i < 6; i++) {
        suma += numeros[i];
    }
    
    // Mostrar el resultado
    printf("\nLa suma de los números es: %d\n", suma);
    
    return 0;
}