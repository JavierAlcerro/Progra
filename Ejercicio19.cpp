#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int opcion;
    float temperatura;

    printf("Seleccione una opci�n:\n");
    printf("1. Convertir de Celsius a Fahrenheit\n");
    printf("2. Convertir de Fahrenheit a Celsius\n");
    printf("Opci�n: ");
    scanf("%d", &opcion);

    printf("Ingrese la temperatura: ");
    scanf("%f", &temperatura);

    float resultado;

    if (opcion == 1) {
        resultado = celsiusToFahrenheit(temperatura);
        printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", temperatura, resultado);
    } else if (opcion == 2) {
        resultado = fahrenheitToCelsius(temperatura);
        printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", temperatura, resultado);
    } else {
        printf("Opci�n inv�lida.\n");
    }

    return 0;
}
