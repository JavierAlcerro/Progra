#include <stdio.h>

int main() {
    int limite;
    int suma = 0;

    printf("Ingrese el numero limite: ");
    scanf("%d", &limite);

    // Verificar si el numero limite es positivo
    if (limite < 0) {
        printf("Error: El numero limite debe ser positivo.\n");
        return 1; // Terminar el programa con código de error
    }

    // Calcular la suma de los N primeros numeros naturales
    for (int i = 1; i <= limite; i++) {
        suma += i;
    }

    printf("La suma de los %d primeros numeros naturales es: %d\n", limite, suma);

    return 0;
}

