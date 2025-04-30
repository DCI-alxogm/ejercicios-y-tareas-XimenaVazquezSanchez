/*
Nombre: Ximena Vázquez Sánchez 
Fecha: 28 de abril 2025
Tarea: Arreglos
*/

#include <stdio.h>

int generar_reticula_2d(float x_inicio, float x_fin, float y_inicio, float y_fin, float delta) {
    printf("\nCoordenadas de la retícula 2D:\n");
    printf("(x, y)\n");
    
    int contador = 0;
    
    for (float y = y_inicio; y <= y_fin; y += delta) {
        for (float x = x_inicio; x <= x_fin; x += delta) {
            printf("(%.2f, %.2f) ", x, y);
            contador++;
        }
        printf("\n");
    }
    
    return contador;
}

int main() {
    float x_inicio, x_fin, y_inicio, y_fin, delta;
    
    printf("Generador de retícula 2D\n");
    
    // Coordenadas en X
    printf("Ingrese valor inicial en X: ");
    scanf("%f", &x_inicio);
    printf("Ingrese valor final en X: ");
    scanf("%f", &x_fin);
    
    // Coordenadas en Y
    printf("Ingrese valor inicial en Y: ");
    scanf("%f", &y_inicio);
    printf("Ingrese valor final en Y: ");
    scanf("%f", &y_fin);
    
    // Separación
    printf("Ingrese separación (delta): ");
    scanf("%f", &delta);
    
    // Validar delta positivo
    if (delta <= 0) {
        printf("Error: delta debe ser mayor que cero.\n");
        return 1;
    }
    
    int total_puntos = generar_reticula_2d(x_inicio, x_fin, y_inicio, y_fin, delta);
    printf("\nTotal de puntos generados: %d\n", total_puntos);
    
    return 0;
}