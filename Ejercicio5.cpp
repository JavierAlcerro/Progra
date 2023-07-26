#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numerosLeidos = 0;
    char cadenaNumeros[100] = "";
    int numero;

    while (numerosLeidos < 5) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            break;
        }

        char numeroStr[20];
        sprintf(numeroStr, "%d", numero);
        strcat(cadenaNumeros, numeroStr);
        numerosLeidos++;
    }

    printf("Cadena de numeros: %s\n", cadenaNumeros);

    return 0;
}


