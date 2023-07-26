#include <iostream>

int encontrarDigitoMasGrande(int numero) {
    int suma = 0;
    while (numero > 9) {
        suma = 0;
        while (numero > 0) {
            suma += numero % 10;
            numero /= 10;
        }
        numero = suma;
    }
    return numero;
}

int main() {
    int numero;
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;
    int resultado = encontrarDigitoMasGrande(numero);
    std::cout << "El dígito más grande obtenido es: " << resultado << std::endl;
    return 0;
}
