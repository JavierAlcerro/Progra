#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funci�n para verificar si un n�mero es primo
int esPrimo(int num) {
    if (num < 2) {
        return 0;
    }
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int filas, columnas, cantidadPrimos = 0;
    
    // Solicitar al usuario el tama�o de la matriz
    printf("Ingrese el n�mero de filas de la matriz: ");
    scanf("%d", &filas);
    
    printf("Ingrese el n�mero de columnas de la matriz: ");
    scanf("%d", &columnas);
    
    // Crear la matriz de n�meros enteros
    int **matriz = (int**)malloc(filas * sizeof(int*));
    for (int i = 0; i < filas; i++) {
        matriz[i] = (int*)malloc(columnas * sizeof(int));
    }
    
    // Inicializar la semilla para generar n�meros aleatorios
    srand(time(NULL));
    
    // Llenar la matriz de forma aleatoria y contar los n�meros primos
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100; // Genera un n�mero aleatorio entre 0 y 99
            
            if (esPrimo(matriz[i][j])) {
                cantidadPrimos++;
            }
        }
    }
    
    // Imprimir la matriz generada
    printf("Matriz generada:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Imprimir la cantidad de n�meros primos encontrados
    printf("Cantidad de n�meros primos: %d\n", cantidadPrimos);
    
    // Liberar la memoria asignada a la matriz
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}
