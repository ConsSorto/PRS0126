/*Ejercicio 2: Ámbito, Variables Estáticas y Externas
Objetivo: Demostrar cómo las variables static mantienen su estado y cómo las variables globales (externas) afectan el flujo.*/
#include <stdio.h>

// Variable Externa (Global): Accesible por cualquier función
int contador_accesos = 0;

void registro_de_usuario() {
    // Variable Estática: No se destruye al terminar la función
    static int id_usuario = 1000;

    id_usuario++;
    contador_accesos++;

    printf("Usuario registrado con ID: %d. Total accesos hoy: %d\n",
            id_usuario, contador_accesos);
}

int main() {
    printf("Iniciando logs del sistema...\n");

    registro_de_usuario();
    registro_de_usuario();
    registro_de_usuario();

    printf("\nResumen final: Se registraron %d operaciones.\n", contador_accesos);

    // Aquí id_usuario no es accesible, demostrando Reglas de Ámbito (Scope)
    return 0;
}