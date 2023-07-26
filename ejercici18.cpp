#include <stdio.h>

int main() {
    int diaNacimiento, mesNacimiento, anioNacimiento;
    int diaActual, mesActual, anioActual;
    
    // Solicitar fecha de nacimiento al usuario
    printf("Ingrese su fecha de nacimiento (dd mm aaaa): ");
    scanf("%d %d %d", &diaNacimiento, &mesNacimiento, &anioNacimiento);
    
    // Solicitar fecha actual al usuario
    printf("Ingrese la fecha actual (dd mm aaaa): ");
    scanf("%d %d %d", &diaActual, &mesActual, &anioActual);
    
    // C�lculo de la edad
    int edad = anioActual - anioNacimiento;
    
    // Ajuste de la edad si a�n no ha cumplido a�os en el a�o actual
    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }
    
    // Imprimir la edad calculada
    printf("Tu edad es: %d a�os.\n", edad);
    
    return 0;
}
