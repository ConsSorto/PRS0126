//
// Created by Constantino Sorto on 10/2/26.
//#include <stdio.h>

// Función que procesa e imprime la tabla

#include <stdio.h>

void generarTabla(int n) {
    printf("\nTabla del %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int numero;
    char continuar;

    do {
        printf("Introduzca un numero para ver su tabla: ");
        scanf("%d", &numero);

        generarTabla(numero);

        printf("\n¿Desea calcular otra tabla? (s/n): ");
        scanf(" %c", &continuar); // El espacio antes de %c limpia el buffer del salto de línea
    } while (continuar == 's' || continuar == 'S');

    return 0;
}