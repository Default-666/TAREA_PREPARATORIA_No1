#include <stdio.h>
#include <stdlib.h>

void imprimirAsteriscos(int cantidad, char alineacion) {
    for (int i = 1; i <= cantidad; i++) {
        int espacios = cantidad - i;

        if (alineacion == 'd') {
            for (int j = 0; j < espacios; j++) {
                printf(" ");
            }
        } else if (alineacion == 'c') {
            for (int j = 0; j < espacios / 2; j++) {
                printf(" ");
            }
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int filas;
    char alineacion;

    do {
        printf("Seleccione la alineación:\n");
        printf("1. Izquierda\n");
        printf("2. Derecha\n");
        printf("3. Centro\n");
        printf("4. Salir\n");
        printf("Ingrese el número de la opción: ");
        scanf(" %c", &alineacion);

        switch (alineacion) {
            case '1':
                alineacion = 'i';
                break;
            case '2':
                alineacion = 'd';
                break;
            case '3':
                alineacion = 'c';
                break;
            case '4':
                printf("Saliendo del programa...\n");
                return 0;
            default:
                printf("Opción inválida.\n");
                continue;
        }

        printf("Ingrese la cantidad de filas: ");
        if (scanf("%d", &filas) != 1) {
            printf("Error: Ingrese un valor numérico.\n");
            return 1;
        }

        imprimirAsteriscos(filas, alineacion);
    } while (1);

    return 0;
}
