#include <stdio.h>

int main() {
    char mensaje[100];
    int desplazamiento, i;

    printf("Ingrese un mensaje en mayusculas (sin espacios ni caracteres especiales): ");
    scanf("%s", mensaje);

    printf("Ingrese un numero de desplazamiento: ");
    scanf("%d", &desplazamiento);

    // Encriptar el mensaje
    for(i = 0; mensaje[i] != '\0'; ++i){
        // Solo se encriptan letras mayusculas
        if(mensaje[i] >= 'A' && mensaje[i] <= 'Z'){
            mensaje[i] = mensaje[i] + desplazamiento;
            // Si la letra se sale del rango de letras mayusculas, se ajusta
            if(mensaje[i] > 'Z'){
                mensaje[i] = mensaje[i] - 'Z' + 'A' - 1;
            }
        }
    }

    printf("Mensaje encriptado: %s\n", mensaje);

    // Opción para mostrar la solución o no
    char opcion;
    printf("¿Desea mostrar la solucion? (S/N): ");
    scanf(" %c", &opcion);
    if(opcion == 'S' || opcion == 's'){
        // Desencriptar el mensaje
        for(i = 0; mensaje[i] != '\0'; ++i){
            // Solo se desencriptan letras mayusculas
            if(mensaje[i] >= 'A' && mensaje[i] <= 'Z'){
                mensaje[i] = mensaje[i] - desplazamiento;
                // Si la letra se sale del rango de letras mayusculas, se ajusta
                if(mensaje[i] < 'A'){
                    mensaje[i] = mensaje[i] + 'Z' - 'A' + 1;
                }
            }
        }
        printf("Solucion: %s\n", mensaje);
    }

    return 0;
}
