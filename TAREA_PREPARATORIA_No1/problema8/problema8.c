#include <stdio.h>

int main() {
    char input[100];
    char output[200];
    int outputIndex = 0;

    printf("Ingrese una cadena: ");
    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {
        output[outputIndex++] = input[i];
        output[outputIndex++] = input[i];
    }
    output[outputIndex] = '\0';

    printf("Cadena con caracteres duplicados: %s\n", output);

    return 0;
}

