#include <stdio.h>

int main() {
    int numeroInicial, numeroFinal;
    int contadorPares = 0, contadorImpares = 0;

    // Solicitar al usuario el número inicial
    printf("Ingrese el número inicial: ");
    while (scanf("%d", &numeroInicial) != 1) {
        printf("Error: Ingrese un valor numérico para el número inicial: ");
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }

    // Solicitar al usuario el número final
    printf("Ingrese el número final: ");
    while (scanf("%d", &numeroFinal) != 1) {
        printf("Error: Ingrese un valor numérico para el número final: ");
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }

    // Verificar si el número inicial es impar, y si es así, incrementarlo
    if (numeroInicial % 2 != 0) {
        numeroInicial++;
    }

    // Mostrar todos los números pares e impares en el rango dado
    printf("Números pares en el rango dado: ");
    for (int i = numeroInicial; i <= numeroFinal; i += 2) {
        printf("%d ", i);
        contadorPares++;
    }
    printf("\n");

    printf("Números impares en el rango dado: ");
    for (int i = numeroInicial + 1; i <= numeroFinal; i += 2) {
        printf("%d ", i);
        contadorImpares++;
    }
    printf("\n");

    // Mostrar la cantidad de números pares e impares encontrados
    printf("La cantidad de números pares en el rango dado es: %d\n", contadorPares);
    printf("La cantidad de números impares en el rango dado es: %d\n", contadorImpares);

    return 0;
}

