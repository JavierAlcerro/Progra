#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    // Verificar si la letra ingresada es una vocal o una consonante
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("La letra '%c' es una vocal.\n", letra);
    } else {
        printf("La letra '%c' es una consonante.\n", letra);
    }

    return 0;
}
