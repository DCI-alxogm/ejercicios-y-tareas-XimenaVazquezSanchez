/******************************************************************************

30 de marzo de 2025 
Ximena Vazquez Sanchez
Tarea 1: Ejemplos del ciclo For

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double x_inicial, x_final, delta, x;
    
    // Solicitar datos al usuario
    printf("Favor de ingresar el valor inicial del intervalo: ");
    scanf("%lf", &x_inicial);
    
    printf("Favor de ingresar el valor final del intervalo: ");
    scanf("%lf", &x_final);
    
    printf("Favor de ingresar el valor del espaciado (delta): ");
    scanf("%lf", &delta);
    
    // Encabezado de la tabla
    printf("\n%-10s %-10s %-10s %-10s %-10s %-10s\n", "x", "exp(x)", "log(x)", "sin(x)", "cos(x)", "sqrt(x)");
    printf("------------------------------------------------------------\n");
    
    // Evaluación de funciones en el intervalo
    for (x = x_inicial; x <= x_final; x += delta) {
        printf("%-10.4f %-10.4f", x, exp(x));
        
        // Verificar que x > 0 para logaritmo y raíz cuadrada
        if (x > 0)
            printf("%-10.4f", log(x));
        else
            printf("%-10s", "N/A");
        
        printf("%-10.4f %-10.4f", sin(x), cos(x));
        
        if (x >= 0)
            printf("%-10.4f\n", sqrt(x));
        else
            printf("%-10s\n", "N/A");
    }
    
    return 0;
}
