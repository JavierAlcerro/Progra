#include <stdio.h>

int invertirNumero(int numero) {
    int numeroInvertido = 0;

    while (numero != 0) {
        int digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }

    return numeroInvertido;
}

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    int numeroInvertido = invertirNumero(numero);

    printf("Numero invertido: %d\n", numeroInvertido);

    return 0;
}

