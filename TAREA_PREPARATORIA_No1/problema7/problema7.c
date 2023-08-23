#include <stdio.h>

void calcularFactorial(int numero, unsigned long long *factorial) {
    *factorial = 1;
    for (int i = 1; i <= numero; i++) {
        *factorial *= i;
    }
}

void mostrarProcedimiento(int numero) {
    unsigned long long factorial = 1;
    printf("Procedimiento del factorial de %d:\n", numero);

    calcularFactorial(numero, &factorial);

    printf("%d! =", numero);
    for (int i = 1; i < numero; i++) {
        printf(" %d x", i);
    }
    printf(" %d\n", numero);
    printf("El factorial de %d es %llu\n", numero, factorial);
}

int main() {
    int numero;
    int inputStatus;

    while (1) {
        // Solicitar al usuario el número
        printf("Ingrese un número o 'c' para salir: ");
        inputStatus = scanf(" %d", &numero);

        // Verificar si el usuario quiere salir
        if (inputStatus == 0) {
            char opcion;
            scanf(" %c", &opcion);
            if (opcion == 'c' || opcion == 'C') {
                printf("Saliendo del programa...\n");
                break;
            } else {
                printf("Error: Ingrese un valor numérico válido o 'c' para salir.\n");
                while (getchar() != '\n'); // Limpiar el buffer de entrada
                continue;
            }
        }

        // Verificar si el número es negativo
        if (numero < 0) {
            printf("El factorial no está definido para números negativos.\n");
        } else if (numero > 999) {
            printf("Este programa no puede calcular factoriales mayores a 999.\n");
        } else {
            mostrarProcedimiento(numero);
        }
    }

    return 0;
}
