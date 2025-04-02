/*
creado el 30 de marzo de 2025
modificado el 2 de abril de 2025 
Ximena Vázquez Sánchez
Modificación  de ciclo FOR a ciclo Do While
*/

#include <stdio.h>
#include <math.h>

int main() {
    double x_inicial, x_final, delta, x;
    int repetir;

    do {
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

        // Inicialización de x
        x = x_inicial;

        // Evaluación de funciones en el intervalo con do while
        do {
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

            x += delta; // Incremento de x

        } while (x <= x_final); // Se repite hasta alcanzar el valor final

        // Preguntar si el usuario desea repetir el cálculo
        printf("\n¿Deseas realizar otra operación? Presiona 1 para sí, 2 para no: ");
        scanf("%d", &repetir);

    } while (repetir == 1); // Si el usuario elige 1, se repite el proceso

    return 0;
}
