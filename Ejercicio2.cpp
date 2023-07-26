#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundos;

    printf("Ingrese el número total de segundos: ");
    scanf("%d", &totalSegundos);

    // Calcula la cantidad de horas, minutos y segundos
    horas = totalSegundos / 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos ;

    // Muestra los resultados
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}


