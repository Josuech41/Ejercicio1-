#include <stdio.h>

int par(int numero);

int main() {
    int cantidad, numero, resultado;

    printf("¿Cuántos números desea introducir? ");
    scanf("%d", &cantidad);

    for (int i = 0; i < cantidad; i++) {
        printf("Introduce un número entero: ");
        scanf("%d", &numero);

        resultado = par(numero);

        if (resultado == 1) {
            printf("El número %d es par.\n", numero);
        } else {
            printf("El número %d es impar.\n", numero);
        }
    }

    return 0;
}

int par(int numero) {
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
