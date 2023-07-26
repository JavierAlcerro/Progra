#include <stdio.h>

int main() {
    int cantidadTeclados;
    int costoTeclado;
    int totalPagar;

    printf("Ingrese la cantidad de teclados a comprar: ");
    scanf("%d", &cantidadTeclados);

    if (cantidadTeclados > 8) {
        costoTeclado = 85;
    } else if (cantidadTeclados >= 4 && cantidadTeclados <= 8) {
        costoTeclado = 90;
    } else {
        costoTeclado = 100;
    }

    totalPagar = cantidadTeclados * costoTeclado;

    printf("Numero de teclados a comprar: %d\n", cantidadTeclados);
    printf("Total a pagar: %d lempiras\n", totalPagar);

    return 0;
}

