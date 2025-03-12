/*
Nombre: Ximena Vázquez Sánchez 
Fecha: 12 de marzo 2025
Tarea: Conversión de coordenadas y temperaturas
*/

#include <stdio.h>
#include <math.h>

void temperatura() {
    int opcion;
    float T;
    printf("Seleccione la conversión que desea hacer: \n");
    printf("1. Celsius a Kelvin\n");
    printf("2. Kelvin a Celsius\n");
    scanf("%d", &opcion);
 
    printf("Ingrese la temperatura que desea convertir: ");
    scanf("%f", &T);
 
    switch (opcion) {
        case 1:
            printf("Resultado: %.2f K\n", T + 273.15f);
            break;
        case 2:
            printf("Resultado: %.2f C\n", T - 273.15f);
            break;
        default:
            printf("Opción no válida\n");
    }
}

void coordenadas() {
    int opcion;
    printf("Seleccione la conversión que desea realizar: \n");
    printf("1. Cartesianas a Esféricas\n");
    printf("2. Esféricas a Cartesianas\n");
    scanf("%d", &opcion);
 
    if (opcion == 1) {
        float x, y, z, r, theta, phi;
        printf("Ingrese x, y, z: ");
        scanf("%f %f %f", &x, &y, &z);
        r = (sqrt,(x*x + y*y + z*z));
        theta = (atan,(y, x));
        phi = (acos,(z / r));
        printf("(r, theta, phi) = (%f, %f, %f)\n", r, theta, phi);
    } else if (opcion == 2) {
        float r, theta, phi, x, y, z;
        printf("Ingrese r, theta, phi: ");
        scanf("%f %f %f", &r, &theta, &phi);
        x = r * sin(phi) * cos(theta);
        y = r * sin(phi) * sin(theta);
        z = r * cos(phi);
        printf("(x, y, z) = (%f, %f, %f)\n", x, y, z);
    } else {
        printf("Opción no válida\n");
    }
}

void unidades() {
    int opcion;
    printf("Seleccione la operación que desea realizar: \n");
    printf("1. Conversión de unidades de longitud\n");
    printf("2. Conversión de unidades de tiempo\n");
    printf("3. Conversión de unidades de volumen\n");
    printf("4. Conversión de unidades de masa\n");
    scanf("%d", &opcion);
   
    if (opcion == 1) {
        float cm, resultado;
        printf("Ingrese la unidad que quisiera convertir a pulgadas (en cm): ");
        scanf("%f", &cm);
        resultado = cm / 2.54;
        printf("Su resultado en pulgadas es: %f\n", resultado);
    } else if (opcion == 2) {
        float min, resultado;
        printf("Ingrese la cantidad de minutos a convertir en segundos: ");
        scanf("%f", &min);
        resultado = min * 60;
        printf("Su resultado en segundos es: %f\n", resultado);
    }else if (opcion == 3) {
        float litro, resultado;
        printf("Ingrese la cantidad de minutos a convertir en segundos: ");
        scanf("%f", &litro);
        resultado = litro / 3.785;
        printf("Su resultado en galones es: %f\n", resultado);
    }else if (opcion == 4) {
        float kilo, resultado;
        printf("Ingrese la cantidad de minutos a convertir en segundos: ");
        scanf("%f", &kilo);
        resultado = kilo * 2.2046;
        printf("Su resultado en libras es: %f\n", resultado);
    }
     else {
        printf("Opción no válida\n");
    }
}

int main() {
    int opcion;
    printf("Seleccione la operación que desea realizar: \n");
    printf("1. Conversión de temperatura\n");
    printf("2. Transformación de coordenadas\n");
    printf("3. Conversión de unidades\n");
    scanf("%d", &opcion);
 
    switch (opcion) {
        case 1:
            temperatura();
            break;
        case 2:
            coordenadas();
            break;
        case 3:
            unidades();
            break;
        default:
            printf("Opción no válida, pruebe con otro valor\n");
    }
    return 0;
}