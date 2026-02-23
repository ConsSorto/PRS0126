/*Ejercicio 3: Recursividad y Preprocesador de C
Objetivo: Implementar lógica recursiva y utilizar macros con argumentos para optimizar el código.**/

#include <stdio.h>

// Macro del preprocesador: Sustitución de código antes de compilar
#define ES_NEGATIVO(n) ((n) < 0)

// Función Recursiva: Cálculo del factorial
// Basado en el principio: n! = n * (n-1)!
long long factorial(int n) {
    // Caso base: Detiene la recursión
    if (n <= 1) {
        return 1;
    } else {
        // Caso recursivo: La función se llama a sí misma
        return n * factorial(n - 1);
    }
}

int main() {
    int numero;

    printf("Calculadora de Factorial (Recursiva)\n");
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // Uso de la Macro
    if (ES_NEGATIVO(numero)) {
        printf("Error: No se puede calcular el factorial de un negativo.\n");
    } else {
        printf("El factorial de %d es: %lld\n", numero, factorial(numero));
    }

    return 0;
}