#include <stdio.h>
#include <math.h>
#include <cstdlib>

int main() {
    int opcion;
    float base, altura, lado, radio;
    float area;

    printf("Calculadora de areas de figuras geometricas\n");
    printf("===========================================\n");
    printf("Opciones:\n");
    printf("1. Triangulo\n");
    printf("2. Cuadrado\n");
    printf("3. Rectangulo\n");
    printf("4. Circulo\n");
     printf("5. salir del bendito programa\n");
    printf("Ingrese la opcion deseada (1-5: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la base del triangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El area del triangulo es: %.2f\n", area);
            break;

        case 2:
            printf("Ingrese el lado del cuadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("El area del cuadrado es: %.2f\n", area);
            break;

        case 3:
            printf("Ingrese la base del rectangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("El area del rectangulo es: %.2f\n", area);
            break;

        case 4:
            printf("Ingrese el radio del circulo: ");
            scanf("%f", &radio);
            area = M_PI * pow(radio, 2);
            printf("El area del circulo es: %.2f\n", area);
            break;
        default:
            printf("Opcion no valida\n");
            break;
    }

    return 0;
}

