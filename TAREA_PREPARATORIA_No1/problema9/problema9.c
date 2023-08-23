#include <stdio.h>

int main() {
    int N;

    // Solicitar al usuario el valor de N
    printf("Ingrese el valor de N para la serie de Fibonacci: ");
    while (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error: Ingrese un valor numérico positivo para N: ");
        while (getchar() != '\n'); // Limpiar el buffer de entrada
    }

    // Mostrar los primeros N términos de la serie de Fibonacci
    unsigned long long term1 = 0, term2 = 1, nextTerm;
    printf("Serie de Fibonacci con los primeros %d términos:\n", N);
    for (int i = 1; i <= N; i++) {
        printf("%llu, ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    printf("\n");

    return 0;
}
