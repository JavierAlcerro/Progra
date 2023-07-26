#include <stdio.h>

int main() {
    float montoPrestamo;
    int numMeses;

    printf("Ingrese el monto del préstamo: ");
    scanf("%f", &montoPrestamo);

    printf("Ingrese el número de meses: ");
    scanf("%d", &numMeses);

    float tasaInteresMensual = 0.02; // Tasa de interés mensual (2%)

    float montoInteres = montoPrestamo * tasaInteresMensual * numMeses;
    printf("El monto de interés a pagar es: %.2f\n", montoInteres);

    return 0;
}
