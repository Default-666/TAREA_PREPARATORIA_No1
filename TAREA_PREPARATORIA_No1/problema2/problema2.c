#include <stdio.h>

int main() {
    int numero_ingresado;

	printf("Ingresa un número para mostrar su tabla de multiplicar: ");
	if (scanf("%d", &numero_ingresado) != 1) {
	  fprintf(stderr, "Error: Ingresa un valor válido, por favor ingresa un número entero.\n");
	return 1;
	}

	printf("Tabla de multiplicar del %d:\n", numero_ingresado);
	for (int i = 1; i <= 12; ++i) {
	   int resultado = numero_ingresado * i;
	      printf("%d x %d = %d\n", numero_ingresado, i, resultado);
	}

return 0;

}

