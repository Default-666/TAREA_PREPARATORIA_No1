#include <stdio.h>

double calcular_seno(double x, int n) {
    double seno = x;
    double numerador = x;
    double potencia = x;
    double factorial = 1.0;

    for (int i = 1; i < n; ++i) {
        int denominador = 2 * i + 1;
        
        numerador = -numerador * potencia * potencia;
        factorial *= denominador * (denominador - 1);
        seno += numerador / factorial;
    }

    return seno;
}

int main() {
    double angulo;
    int decimales;
    char unidad[10];

    printf("Ingrese la unidad del ángulo (rad o deg): ");
    scanf("%s", unidad);

    if (unidad[0] == 'r' || unidad[0] == 'R') {
        printf("Ingrese el valor del ángulo en radianes (por ejemplo, pi/4): ");
        char input[20];
        scanf("%s", input);

        if (input[0] == 'p' || input[0] == 'P') {
            double denominador;
            if (sscanf(input + 3, "%lf", &denominador) != 1) {
                fprintf(stderr, "Error: Valor incorrecto para el ángulo en radianes.\n");
                return 1;
            }
            angulo = 3.14159265358979323846 / denominador;
        } else {
            if (sscanf(input, "%lf", &angulo) != 1) {
                fprintf(stderr, "Error: Valor incorrecto para el ángulo en radianes.\n");
                return 1;
            }
        }
    } else if (unidad[0] == 'd' || unidad[0] == 'D') {
        printf("Ingrese el valor del ángulo en grados: ");
        if (scanf("%lf", &angulo) != 1) {
            fprintf(stderr, "Error: Valor incorrecto para el ángulo en grados.\n");
            return 1;
        }
        angulo = angulo * (3.14159265358979323846 / 180.0); // Convertir a radianes
    } else {
        fprintf(stderr, "Error: Ingrese una opción válida (rad o deg).\n");
        return 1;
    }

    printf("Ingrese la cantidad de decimales para la aproximación (máximo 100): ");
    if (scanf("%d", &decimales) != 1) {
        fprintf(stderr, "Error: Valor incorrecto para la cantidad de decimales.\n");
        return 1;
    }

    double angulo_a_calcular = angulo;

    double seno_aproximado = calcular_seno(angulo_a_calcular, 100); // Utilizar 100 términos para mayor precisión

    printf("El seno de %.10lf rad (aproximado con %d decimales) es %.*lf\n", angulo_a_calcular, decimales, decimales, seno_aproximado);

    return 0;
}

