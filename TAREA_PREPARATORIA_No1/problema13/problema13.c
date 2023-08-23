#include <stdio.h>

int main() {
    int numero;

    printf("Ingresa un número: ");
    if (scanf("%d", &numero) != 1) {
        printf("Error: no has ingresado un número.\n");
        return 1;
    }

    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }

    return 0;
}
