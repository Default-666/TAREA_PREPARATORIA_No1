#include <stdio.h>

int main() {
    int opcion;
    double temperatura;

    printf("Seleccione la conversión:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese la temperatura en grados Celsius: ");
        scanf("%lf", &temperatura);

        double fahrenheit = (temperatura * 9.0 / 5.0) + 32.0;
        printf("%.2lf grados Celsius equivale a %.2lf grados Fahrenheit\n", temperatura, fahrenheit);
    } else if (opcion == 2) {
        printf("Ingrese la temperatura en grados Fahrenheit: ");
        scanf("%lf", &temperatura);

        double celsius = (temperatura - 32.0) * 5.0 / 9.0;
        printf("%.2lf grados Fahrenheit equivale a %.2lf grados Celsius\n", temperatura, celsius);
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}

