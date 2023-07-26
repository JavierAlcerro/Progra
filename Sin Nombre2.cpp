#include <stdio.h>
#include <math.h>

void calcularAreaTriangulo() {
    float base, altura, area;
    printf("Ingresa la base del tri�ngulo: ");
    scanf("%f", &base);
    printf("Ingresa la altura del tri�ngulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("El �rea del tri�ngulo es: %.2f\n", area);
}

void calcularAreaCuadrado() {
    float lado, area;
    printf("Ingresa el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("El �rea del cuadrado es: %.2f\n", area);
}

void calcularAreaRectangulo() {
    float base, altura, area;
    printf("Ingresa la base del rect�ngulo: ");
    scanf("%f", &base);
    printf("Ingresa la altura del rect�ngulo: ");
    scanf("%f", &altura);
    area = base * altura;
    printf("El �rea del rect�ngulo es: %.2f\n", area);
}

void calcularAreaCirculo() {
    float radio, area;
    printf("Ingresa el radio del c�rculo: ");
    scanf("%f", &radio);
    area = M_PI * radio * radio;
    printf("El �rea del c�rculo es: %.2f\n", area);
}

int main() {
    int opcion;
    
    printf("Calculadora de �reas de figuras geom�tricas\n");
    printf("1. Tri�ngulo\n");
    printf("2. Cuadrado\n");
    printf("3. Rect�ngulo\n");
    printf("4. C�rculo\n");
    printf("Selecciona una opci�n: ");
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
            printf("Opci�n inv�lida. Por favor, selecciona una opci�n v�lida.\n");
    }
    
    return 0;
}

