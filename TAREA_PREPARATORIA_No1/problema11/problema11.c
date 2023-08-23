#include <stdio.h>

// función para eliminar duplicados y ordenar los números
int eliminarDuplicados(int numeros[], int n) {
    int i, j, k, temp;

    // eliminar duplicados
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (numeros[j] == numeros[i]) {
                for (k = j; k < n - 1; k++) {
                    numeros[k] = numeros[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    // ordenar los números en orden ascendente
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // devolver tamaño de la matriz sin duplicados
    return n;
}

int main() {
    int numeros[100];
    int n = 0;
    char c;

    printf("Ingresa los números de la matriz separados por comas: ");
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            numeros[n] = c - '0';
            n++;
        }
    }

    // eliminar duplicados y ordenar los números
    n = eliminarDuplicados(numeros, n);

    // mostrar los números sin duplicados en orden ascendente
    printf("Matriz sin duplicados y ordenada en orden ascendente: [");
    for (int i = 0; i < n; i++) {
        printf("%d", numeros[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

