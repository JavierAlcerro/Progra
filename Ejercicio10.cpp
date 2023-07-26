#include <stdio.h>

int main() {
    int numero1, numero2;
    char operador;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    printf("Ingrese el operador (+, -, x, /, mod): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("%d + %d = %d\n", numero1, numero2, numero1 + numero2);
            break;
        case '-':
            printf("%d - %d = %d\n", numero1, numero2, numero1 - numero2);
            break;
        case 'x':
        case 'X':
            printf("%d x %d = %d\n", numero1, numero2, numero1 * numero2);
            break;
        case '/':
            if (numero2 != 0) {
                printf("%d / %d = %.2f\n", numero1, numero2, (float)numero1 / numero2);
            } else {
                printf("Error: Division entre cero no es valida.\n");
            }
            break;
        case 'm':
        case 'M':
            printf("%d mod %d = %d\n", numero1, numero2, numero1 % numero2);
            break;
        default:
            printf("Error: Operador no valido.\n");
            break;
    }

    return 0;
}

