#include <stdio.h>
#include <math.h>

void calcularAreaTriangulo() {
    float base, altura, area;
    printf("Ingresa la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingresa la altura del triángulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("El área del triángulo es: %.2f\n", area);
}

void calcularAreaCuadrado() {
    float lado, area;
    printf("Ingresa el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("El área del cuadrado es: %.2f\n", area);
}

void calcularAreaRectangulo() {
    float base, altura, area;
    printf("Ingresa la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingresa la altura del rectángulo: ");
    scanf("%f", &altura);
    area = base * altura;
    printf("El área del rectángulo es: %.2f\n", area);
}

void calcularAreaCirculo() {
    float radio, area;
    printf("Ingresa el radio del círculo: ");
    scanf("%f", &radio);
    area = M_PI * radio * radio;
    printf("El área del círculo es: %.2f\n", area);
}

int main() {
    int opcion;
    
    printf("Calculadora de áreas de figuras geométricas\n");
    printf("1. Triángulo\n");
    printf("2. Cuadrado\n");
    printf("3. Rectángulo\n");
    printf("4. Círculo\n");
    printf("Selecciona una opción: ");
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
            Salir;
            break;
        default:
            printf("Opción inválida. Por favor, selecciona una opción válida.\n");
    }
    
    return 0;
}

