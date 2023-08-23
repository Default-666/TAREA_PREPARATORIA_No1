#include <stdio.h>

int main() {
    int opcion;
    
    do {
        // Mostrar el menú
        printf("Menú de cálculo de volumen:\n");
        printf("1. Cubo\n");
        printf("2. Esfera\n");
        printf("3. Pirámide de base triangular\n");
        printf("4. Pirámide de base cuadrada\n");
        printf("0. Salir\n");
        
        // Solicitar la elección al usuario
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                // Calcular volumen de un cubo
                double ladoCubo, volumenCubo;
                printf("Ingrese el lado del cubo: ");
                scanf("%lf", &ladoCubo);
                volumenCubo = ladoCubo * ladoCubo * ladoCubo;
                printf("El volumen del cubo es %.2lf\n", volumenCubo);
                break;
            
            case 2:
                // Calcular volumen de una esfera
                double radioEsfera, volumenEsfera;
                printf("Ingrese el radio de la esfera: ");
                scanf("%lf", &radioEsfera);
                volumenEsfera = 4.0 / 3.0 * 3.14159 * radioEsfera * radioEsfera * radioEsfera;
                printf("El volumen de la esfera es %.2lf\n", volumenEsfera);
                break;
            
            case 3:
                // Calcular volumen de una pirámide de base triangular
                double baseTriangular, alturaTriangular, volumenTriangular;
                printf("Ingrese la base de la pirámide triangular: ");
                scanf("%lf", &baseTriangular);
                printf("Ingrese la altura de la pirámide triangular: ");
                scanf("%lf", &alturaTriangular);
                volumenTriangular = 1.0 / 3.0 * baseTriangular * alturaTriangular;
                printf("El volumen de la pirámide triangular es %.2lf\n", volumenTriangular);
                break;
            
            case 4:
                // Calcular volumen de una pirámide de base cuadrada
                double ladoCuadrado, alturaCuadrada, volumenCuadrada;
                printf("Ingrese el lado de la base cuadrada: ");
                scanf("%lf", &ladoCuadrado);
                printf("Ingrese la altura de la pirámide cuadrada: ");
                scanf("%lf", &alturaCuadrada);
                volumenCuadrada = 1.0 / 3.0 * ladoCuadrado * ladoCuadrado * alturaCuadrada;
                printf("El volumen de la pirámide cuadrada es %.2lf\n", volumenCuadrada);
                break;
            
            case 0:
                // Salir del programa
                printf("Saliendo del programa...\n");
                break;
            
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                break;
        }
    } while (opcion != 0);

    return 0;
}

