#include <stdio.h>

int main() {
    float montoPrestamo;
    int numMeses;

    printf("Ingrese el monto del pr�stamo: ");
    scanf("%f", &montoPrestamo);

    printf("Ingrese el n�mero de meses: ");
    scanf("%d", &numMeses);

    float tasaInteresMensual = 0.02; // Tasa de inter�s mensual (2%)

    float montoInteres = montoPrestamo * tasaInteresMensual * numMeses;
    printf("El monto de inter�s a pagar es: %.2f\n", montoInteres);

    return 0;
}
