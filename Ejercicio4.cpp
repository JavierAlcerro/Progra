#include <stdio.h>

int main() {
    int arreglo[] = {12, 6, 8, 3, 10, 15, 7};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("Elementos mayores que %d: ", numero);
    for (int i = 0; i < longitud; i++) {
        if (arreglo[i] > numero) {
            printf("%d ", arreglo[i]);
        }
    }
    printf("\n");

    return 0;
}

