#include <stdio.h>
#include <math.h>

void calcularAreaTriangulo() {
    float base, altura, area;
    printf("Ingresa la base del triangulo: ");
    scanf("%f", &base);
    printf("Ingresa la altura del triangulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("El area del triangulo es: %.2f\n", area);
}

void calcularAreaCuadrado() {
    float lado, area;
    printf("Ingresa el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("El area del cuadrado es: %.2f\n", area);
}

void calcularAreaRectangulo() {
    float base, altura, area;
    printf("Ingresa la base del rectangulo: ");
    scanf("%f", &base);
    printf("Ingresa la altura del rectangulo: ");
    scanf("%f", &altura);
    area = base * altura;
    printf("El area del rectangulo es: %.2f\n", area);
}

void calcularAreaCirculo() {
    float radio, area;
    printf("Ingresa el radio del círculo: ");
    scanf("%f", &radio);
    area = M_PI * radio * radio;
    printf("El area del circulo es: %.2f\n", area);
}

int main() {
    int opcion;
    
    do {
        printf("\nCalculadora de areas de figuras geometricas\n");
        printf("1. Triangulo\n");
        printf("2. Cuadrado\n");
        printf("3. Rectangulo\n");
        printf("4. Circulo\n");
        printf("5. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                calcularAreaTriangulo();
                break;
            case 2:
                calcularAreaCuadrado();
                break;
            case 3:
                calcularAreaRectangulo();
                break;
            case 4:
                calcularAreaCirculo();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Por favor, selecciona una opción valida.\n");
        }
        
    } while (opcion != 5);
    
    return 0;
}

