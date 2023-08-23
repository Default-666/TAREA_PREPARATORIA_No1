#include <stdio.h>

int main() {
    float millas, galones, km, litros;
    int opcion;
    int opcion_valida = 0;
    int valor_numerico = 0;

    do {
        printf("¿Qué conversión deseas realizar?\n");
        printf("1. Millas por galón imperial a kilómetros por litro.\n");
        printf("2. Kilómetros por litro a millas por galón imperial.\n");
        printf("3. Salir del programa.\n");
        printf("Ingresa el número de la opción: ");
        
        if (scanf("%d", &opcion) != 1) {
            printf("Error: Ingresa un valor numérico válido.\n");
            fflush(stdin);
            continue;
        }

        valor_numerico = 1;

        switch (opcion) {
            case 1:
                // Convertir millas por galón imperial a kilómetros por litro
                printf("Ingresa la cantidad de millas por galón imperial: ");
                
                if (scanf("%f", &millas) != 1) {
                    printf("Error: Ingresa un valor numérico válido.\n");
                    fflush(stdin);
                    continue;
                }

                km = millas * 1.609344;
                litros = 4.54609188;
                galones = km / litros;
                printf("%.2f millas por galón imperial son %.2f kilómetros por litro.\n", millas, galones);
                opcion_valida = 1;
                break;

            case 2:
                // Convertir kilómetros por litro a millas por galón imperial
                printf("Ingresa la cantidad de kilómetros por litro: ");
                
                if (scanf("%f", &galones) != 1) {
                    printf("Error: Ingresa un valor numérico válido.\n");
                    fflush(stdin);
                    continue;
                }

                litros = 4.54609188;
                km = galones * litros;
                millas = km / 1.609344;
                printf("%.2f kilómetros por litro son %.2f millas por galón imperial.\n", galones, millas);
                opcion_valida = 1;
                break;

            case 3:
                printf("Saliendo del programa...\n");
                opcion_valida = 1;
                break;

            default:
                printf("Opción inválida.\n");
                fflush(stdin);
                break;
        }
    } while (opcion_valida != 1 || valor_numerico != 1);

    return 0;
}
