/*
Ximena Vázquez Sánchez
Tarea ejercicio 2
1/4/2025
*/
#include <stdio.h>

// Prototipo de la función calcular_y_mostrar
int calcular_y_mostrar();

int main() {
    return calcular_y_mostrar();
}

// Definición de la función calcular_y_mostrar
int calcular_y_mostrar() {
    // Declaración de variables
    double x_inicial, x_final, incremento, x;
    
    // Solicitar datos al usuario
    printf("Ingrese el valor inicial de X: ");
    scanf("%lf", &x_inicial);
    printf("Ingrese el valor final de X: ");
    scanf("%lf", &x_final);
    
    // Solicitar incremento hasta que sea válido
    do {
        printf("Ingrese el valor del incremento (debe ser positivo): ");
        scanf("%lf", &incremento);
    } while (incremento <= 0);
    
    printf("X\tX^2\n"); // Encabezado
    
    x = x_inicial;
    do {
        printf("%lf\t%lf\n", x, x * x);
        x += incremento;
    } while (x <= x_final);
    
    return 0;
}
