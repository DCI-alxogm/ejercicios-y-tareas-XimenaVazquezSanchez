/* Creado el 5 de Mayo de 2025 por ximena vazquez Ejercicio de la parábola */

#include <stdio.h>
#include <stdlib.h>

float evaluarFuncion(float x) {
    return x * x + 1;
}

int main() {
    FILE *entrada, *salida;
    int n;
    float limInf, limSup, paso, x, y;

    // Abrir archivo de entrada
    entrada = fopen("entrada.txt", "r");
    if (entrada == NULL) {
        printf("Error: No se pudo abrir 'entrada.txt'\n");
        return 1;
    }

    // Leer datos
    fscanf(entrada, "%d %f %f", &n, &limInf, &limSup);
    fclose(entrada);

    // Validar datos
    if (n <= 0 || limInf >= limSup) {
        printf("Error: Datos inválidos\n");
        return 1;
    }

    // Calcular paso
    paso = (limSup - limInf) / (n - 1);

    // Abrir archivo de salida y escribir encabezado
    salida = fopen("parabola.txt", "w");
    fprintf(salida, "Evaluación de f(x) = x² + 1\n");
    fprintf(salida, "Rango: [%.2f, %.2f]\n", limInf, limSup);
    fprintf(salida, "Puntos: %d\n\n", n);
    fprintf(salida, "x\t\tf(x)\n");
    fprintf(salida, "--------------------\n");

    // Escribir resultados
    for (int i = 0; i < n; i++) {
        x = limInf + i * paso;
        y = evaluarFuncion(x);
        fprintf(salida, "%.4f\t%.4f\n", x, y);  // \t para alinear columnas
    }

    fclose(salida);
    printf("Resultados guardados en 'parabola.txt'\n");
    return 0;
}