//Correccion del Examen Nombre:Ximena Vázquez Sánchez 20/03/2025
     

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion;
    float base, altura, area;
    int numero, suma, digito;
    char letra;

    printf("Seleccione una opcion: \n");
    printf("1. Calcular el area de un rectangulo \n");
    printf("2. Convertir grados Celsius a Fahrenheit \n");
    printf("3. Verificar si un numero es multiplo de otro \n");
    printf("4. Sumar los digitos de un numero de dos cifras \n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese la base y la altura del rectangulo: ");
            scanf("%f %f", &base, &altura);
            area = base * altura;
            printf("El area del rectangulo es: %.2f\n", area);
            break;

        case 2:
            printf("Ingrese la temperatura en grados Celsius: ");
            scanf("%f", &base);
            float TF = (base * 9 / 5) + 32;
            printf("La temperatura en Fahrenheit es: %.2f\n", TF);
            break;

        case 3:
            printf("Ingrese dos numeros: ");
            scanf("%d %d", &numero, &digito);
            if (numero % digito == 0) {
                printf("%d es multiplo de %d.\n", numero, digito);
            } else {
                printf("%d no es multiplo de %d.\n", numero, digito);
            }
            break;

        case 4:
            printf("Ingrese un numero de dos cifras: ");
            scanf("%d", &numero);
            if (numero >= 10 && numero <= 99) {
                suma = (numero / 10) + (numero % 10);
                printf("La suma de los digitos es: %d\n", suma);
            } else if (numero < 10) {
                printf("El numero es de una sola cifra, no se puede realizar la operacion.\n");
            }
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    // Declaración de variables
    double a, b, c, x1, x2, x3;

    // Solicitar los valores al usuario
    printf("Ingrese el valor de a: ");
    scanf("%lf", &a);
    printf("Ingrese el valor de b: ");
    scanf("%lf", &b);
    printf("Ingrese el valor de c: ");
    scanf("%lf", &c);

    // Calcular x = (6 + 2 * 3) / (sqrt(16) + 2)
    x1 = (6 + 2 * 3) / (sqrt(16) + 2);
    printf("El valor de x1 es: %.6f\n", x1);

    // Calcular x = 5 + 3 * (2^3 - 4)
    x2 = 5 + 3 * (pow(2, 3) - 4);
    printf("El valor de x2 es: %.6f\n", x2);

    // Calcular el valor de x con la fórmula dada
    double numerador = sin(a + pow(b, 2)) + cos(c / 2.0) * b;
    double denominador = (1 + exp(-a)) + sqrt(fabs(b - c));
    x3 = numerador / denominador;
    printf("El valor de x3 es: %.6f\n", x3);

    return 0;
}
