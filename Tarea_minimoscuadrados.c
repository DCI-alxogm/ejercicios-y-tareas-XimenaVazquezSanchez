/*
 Nombre: Ximena Vázquez Sánchez 
 Fecha: 20 de abril 2025
 Tarea: Minimos cuadrados.
Práctica realizada el 12/02/2025 en el lab. de termodinámica.
 */

//Práctica FOT. Densidad de una sustancia.(jabón y aceite).
#include <stdio.h>

void ajuste_minimos_cuadrados(float x[], float y[], int n, float *pendiente, float *intercepto) {
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    *pendiente = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    *intercepto = (sum_y - (*pendiente) * sum_x) / n;
}

int main() {
    // Datos para Aceite
    float volumen_aceite[] = {10, 20, 30, 40, 50, 60, 70, 80};
    float masa_aceite[] = {83.0, 90.0, 98.2, 107.7, 117.0, 127.1, 135.0, 142.9};
    int n_aceite = sizeof(volumen_aceite) / sizeof(volumen_aceite[0]);

    float rho_aceite, b_aceite;
    ajuste_minimos_cuadrados(volumen_aceite, masa_aceite, n_aceite, &rho_aceite, &b_aceite);

    printf("Resultados para Aceite \n");
    printf("Ecuación: M = %.3f V + %.3f\n", rho_aceite, b_aceite);
    printf("Densidad estimada (pendiente) = %.3f g/mL\n", rho_aceite);
    printf("Intercepto = %.3f g\n\n", b_aceite);

    // Datos para Jabón (puedes agregar los demás casos de manera similar)
    float volumen_jabon[] = {10, 20, 30, 40, 50, 60, 70, 80};
    float masa_jabon[] = {81.2, 91.4, 101.2, 111.2, 121.2, 131.2, 140.6, 151.1};
    int n_jabon = sizeof(volumen_jabon) / sizeof(volumen_jabon[0]);

    float rho_jabon, b_jabon;
    ajuste_minimos_cuadrados(volumen_jabon, masa_jabon, n_jabon, &rho_jabon, &b_jabon);

    printf("Resultados para Jabón \n");
    printf("Ecuación: M = %.3f V + %.3f\n", rho_jabon, b_jabon);
    printf("Densidad estimada (pendiente) = %.3f g/mL\n", rho_jabon);
    printf("Intercepto = %.3f g\n\n", b_jabon);

    return 0;
}