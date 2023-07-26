#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 3
#define COLUMNAS 3

void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void ordenarMatriz(int matriz[FILAS][COLUMNAS], int matrizOrdenada[FILAS][COLUMNAS]) {
    int elementos[FILAS * COLUMNAS];
    int index = 0;

    // Copiar los elementos de la matriz original en un arreglo unidimensional
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            elementos[index++] = matriz[i][j];
        }
    }

    // Ordenar los elementos del arreglo
    for (int i = 0; i < FILAS * COLUMNAS - 1; i++) {
        for (int j = 0; j < FILAS * COLUMNAS - i - 1; j++) {
            if (elementos[j] > elementos[j + 1]) {
                int temp = elementos[j];
                elementos[j] = elementos[j + 1];
                elementos[j + 1] = temp;
            }
        }
    }

    // Copiar los elementos ordenados en la matriz ordenada
    index = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matrizOrdenada[i][j] = elementos[index++];
        }
    }
}

int main() {
    int matrizOriginal[FILAS][COLUMNAS];
    int matrizOrdenada[FILAS][COLUMNAS];

    srand(time(NULL)); // Inicializar la semilla aleatoria

    // Generar números aleatorios y guardarlos en la matriz original
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matrizOriginal[i][j] = rand() % 100; // Generar número aleatorio entre 0 y 99
        }
    }

    // Imprimir la matriz original
    printf("Matriz Original:\n");
    imprimirMatriz(matrizOriginal);
    printf("\n");

    // Ordenar la matriz original y guardar los números ordenados en la matriz ordenada
    ordenarMatriz(matrizOriginal, matrizOrdenada);

    // Imprimir la matriz ordenada
    printf("Matriz Ordenada:\n");
    imprimirMatriz(matrizOrdenada);

    return 0;
}

