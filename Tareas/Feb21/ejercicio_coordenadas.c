/*
Ximena Vázquez Sánchez  Fecha: 21 de febrero de 2025 
Transformación de coordenadas.
*/
#include <stdio.h>
#include <math.h>

int main(){
    // Declaración de variables
    float x, y, z; // Coordenadas cartesianas
    float rE, thetaE, phi; // Declaración de las Coordenadas esféricas
    float rC, thetaC, zC; // Declaración de las Coordenadas cilíndricas
    
    // Solicitar los datos al usuario
    printf("Este programa nos ayuda a pasar de tener coordenadas cartesianas a  tener coordenadas esféricas y cilíndricas.\n");
    printf("Por favor  ingresa las coordenadas cartesianas (x, y, z): ");
    scanf("%f %f %f", &x, &y, &z);
    
    // Realizar conversiones
    // Conversión a coordenadas esféricas
    rE = sqrtf(x*x + y*y + z*z);
    thetaE = atan(y/x);
    phi = acosf(z / rE);
    
    // Conversión a coordenadas cilíndricas
    rC = sqrtf(x*x + y*y);
    thetaC = atan(y/x);
    zC = z;
    
    // Imprimir resultados para que los observe el usuario
    printf("\nCoordenadas esféricas:\n");
    printf("r = %f, theta = %f radianes, phi = %f radianes\n", rE, thetaE, phi);
    
    printf("\nCoordenadas cilíndricas:\n");
    printf("r = %f, theta = %f radianes, z = %f\n", rC, thetaC, zC);
    
    return 0;
}
