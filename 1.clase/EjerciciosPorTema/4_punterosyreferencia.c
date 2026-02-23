#include <stdio.h>

int main() {
    int numero = 50;       // Una variable normal
    int *ptr;             // Un puntero a entero

    // Asignacion: El puntero guarda la direccion de 'numero'
    ptr = &numero;

    printf("--- Informacion de la Variable ---\n");
    printf("Valor de 'numero': %d\n", numero);
    printf("Direccion de 'numero' (&numero): %p\n", (void*)&numero);

    printf("\n--- Informacion del Puntero ---\n");
    printf("Valor almacenado en 'ptr' (es una direccion): %p\n", (void*)ptr);
    printf("Contenido apuntado por 'ptr' (*ptr): %d\n", *ptr);

    // Modificacion Indirecta
    *ptr = 100; // Alteramos 'numero' a traves del puntero

    printf("\nNuevo valor de 'numero' tras modificar *ptr: %d\n", numero);

    return 0;
}