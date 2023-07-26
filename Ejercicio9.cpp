#include <stdio.h>

#define TAMANO_VECTOR 10

void ordenarVector(int vector[], int tamano) {
    int i, j, temp;

    for (i = 0; i < tamano - 1; i++) {
        for (j = i + 1; j < tamano; j++) {
            if (vector[i] > vector[j]) {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
}

int main() {
    int vector[TAMANO_VECTOR];
    int i;

    printf("Ingrese 10 numeros:\n");

    for (i = 0; i < TAMANO_VECTOR; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vector[i]);
        ordenarVector(vector, i + 1);
    }

    printf("Numeros ordenados: ");
    for (i = 0; i < TAMANO_VECTOR; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}

