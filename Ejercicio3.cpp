#include <stdio.h>

int main() {
    int valores[10];
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Ingrese 10 valores:\n");

    // Leer los valores ingresados por el usuario
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        // Contar los positivos, negativos y nulos
        if (valores[i] > 0) {
            positivos++;
        } else if (valores[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    // Mostrar los resultados
    printf("Cantidad de valores positivos: %d\n", positivos);
    printf("Cantidad de valores negativos: %d\n", negativos);
    printf("Cantidad de valores nulos: %d\n", nulos);

    return 0;
}

