#include <stdio.h>

int main() {
    int rows = 9; // N�mero de filas de la serie
    
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
