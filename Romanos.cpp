#include <stdio.h>

void convertirARomano(int numero) {
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;

    while (numero > 0) {
        if (numero >= valores[i]) {
            printf("%s", simbolos[i]);
            numero -= valores[i];
        } else {
            i++;
        }
    }
}

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("El numero romano correspondiente es: ");
    convertirARomano(numero);

    return 0;
}

