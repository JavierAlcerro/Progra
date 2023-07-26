#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para verificar si un número es primo
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
    
    // Solicitar al usuario el tamaño de la matriz
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    
    // Crear la matriz de números enteros
    int **matriz = (int**)malloc(filas * sizeof(int*));
    for (int i = 0; i < filas; i++) {
        matriz[i] = (int*)malloc(columnas * sizeof(int));
    }
    
    // Inicializar la semilla para generar números aleatorios
    srand(time(NULL));
    
    // Llenar la matriz de forma aleatoria y contar los números primos
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100; // Genera un número aleatorio entre 0 y 99
            
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
    
    // Imprimir la cantidad de números primos encontrados
    printf("Cantidad de números primos: %d\n", cantidadPrimos);
    
    // Liberar la memoria asignada a la matriz
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}
