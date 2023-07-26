#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un n�mero entero del 1 al 12: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 12) {
        printf("N�mero inv�lido. Por favor, ingrese un n�mero del 1 al 12.\n");
        return 0;
    }

    printf("Tabla de multiplicar del %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
