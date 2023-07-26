#include <stdio.h>

#define FILAS 4
#define COLUMNAS 5

void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void buscarNumero(int matriz[FILAS][COLUMNAS], int numero) {
    int encontrado = 0;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] == numero) {
                printf("El numero %d se encuentra en la fila %d, columna %d.\n", numero, i + 1, j + 1);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("El numero %d no se encuentra en la matriz.\n", numero);
    }
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int numero = 0;

    // Cargar la matriz con los primeros numeros naturales
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = numero++;
        }
    }

    // Imprimir la matriz
    printf("Matriz:\n");
    imprimirMatriz(matriz);

    // Buscar un numero en la matriz
    printf("Ingrese un numero a buscar: ");
    scanf("%d", &numero);
    buscarNumero(matriz, numero);

    return 0;
}

