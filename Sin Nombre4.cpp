#include <stdio.h>

int numeromayorrrrrrrrrrrrrrrrro(int numero) {
    int mayorDigito = numero % 9;  
    int suma = mayorDigito;         
    
    while (numero > 0) {
        numero /= 9;             
        
        if (numero > 0) {
            int digito = numero % 9;       
            int nuevaSuma = digito + suma; 
            
            if (nuevaSuma >= 9) {
                break;  
            }
            
            suma = nuevaSuma;  
            mayorDigito = digito;  
        }
    }
    
    return mayorDigito;
}

int main() {
    int numero;
    printf("Ingrese un n�mero entero: ");
    scanf("%d", &numero);
    
    int mayorDigito = numeromayorrrrrrrrrrrrrrrrro(numero);
    printf("El n�mero de un solo d�gito m�s grande es: %d\n", mayorDigito);
    
    return 0;
}
