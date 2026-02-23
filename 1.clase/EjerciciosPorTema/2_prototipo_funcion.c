/*Ejercicio 1: Constantes y Elementos Básicos de una Función
Objetivo: Diferenciar entre constantes de preprocesador y de memoria, y estructurar un programa con prototipos.*/

#include <stdio.h>

// 1. Preprocesador: Constante simbólica (No ocupa memoria RAM)
#define IVA 0.15

// Prototipo de la función (Declaración antes de uso)
float calcular_precio_final(float base);

int main() {
    // 2. Constante de tipo 'const' (Reside en el segmento de solo lectura)
    const float DESCUENTO_PROMO = 5.0;
    float subtotal;

    printf("--- Sistema de Facturacion ---\n");
    printf("Ingrese el subtotal de la venta: ");
    scanf("%f", &subtotal);

    float total = calcular_precio_final(subtotal) - DESCUENTO_PROMO;

    printf("El precio final (con IVA y descuento de promocion) es: $%.2f\n", total);

    return 0;
}

// Definición de la función: Retorno de valor
float calcular_precio_final(float base) {
    return base + (base * IVA);
}