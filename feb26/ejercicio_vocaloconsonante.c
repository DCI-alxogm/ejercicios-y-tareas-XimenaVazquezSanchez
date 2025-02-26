/*
Ximena Vázquez Sánchez  
Fecha: 26 de febrero de 2025 
Vocal o consonante.
*/

#include <stdio.h>

int main() {
    char c;
    int es_Vmin, es_Vmay;

    // Pedir al usuario que ingrese una letra
    printf("Introduce una letra: ");
    scanf("%c", &c);  // Usamos %c para leer un solo carácter

    // Inicializar las variables para las vocales
    es_vocalminuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    es_vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // Verificar si es una vocal
    if (es_Vmin || es_Vmay) {
        printf("La letra '%c' es una vocal.\n", c);
    } else {
        printf("La letra '%c' no es una vocal.\n", c);
    }

    return 0;
}  