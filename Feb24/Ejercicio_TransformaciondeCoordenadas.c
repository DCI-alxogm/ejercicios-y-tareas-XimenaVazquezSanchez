/******************************************************************************
Ximena Vázquez Sánchez  
Revisión del dia: Fecha: 19 de febrero de 2025 
Escrito el dia: 24 de Febrero de 2025
Transformación de coordenadas.
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(){
    float x, y, z, r;
    float r_e, theta_e, phi; // Declaración de coordenadas Esféricas.
    float r_c, theta_c, z_c; // Declaración de coordenadas Cilíndricas.
   
    
    // Solicitar entrada al usuario
    printf("Este programa convierte coordenadas cartesianas a esfericas y cilindricas.\n");
    printf("Ingrese las coordenadas cartesianas (x, y, z): ");
    scanf("%f %f %f", &x, &y, &z);
    
    //Plantear las ecuaciones
    //Coordenadas esféricas.
    r=sqrt(x*x+y*y+z*z);
    theta_e = atan(y/x);
    phi=acos(z/r);
    
    //Coordenadas cilíndricas.
    r_c=sqrt(x*x+y*y);
    theta_c= atan(y/x);
    z_c=z;
    
    //Salida
    printf ("Las coordenadas esfericas son r=%f. theta= %f, phi=%f \n", r, theta_e, phi);
    printf ("Las coordenadas cilindricas son r=%f. theta= %f, z=%f \n", r_c, theta_c, z_c);
    exit(0);
}                                                                                                                                                                                    