#include <stdio.h>

// Definicion de constante usando el preprocesador
// No termina en punto y coma y no reserva espacio en RAM directamente
#define PI 3.14159

int main() {
    float radio, area;

    printf("--- Calculo de Area de Circulos ---\n");
    printf("Introduce el radio del circulo: ");

    // Leemos el valor del radio (flotante)
    if (scanf("%f", &radio) != 1) {
        printf("Error: Ingrese un numero valido.\n");
        return 1;
    }

    // Calculo usando la constante PI
    area = PI * (radio * radio);

    printf("\nCon un radio de: %.2f", radio);
    printf("\nEl area calculada es: %.4f\n", area);

    return 0;
}