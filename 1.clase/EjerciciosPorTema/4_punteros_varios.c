/*Lo que quieres hacer,                   Herramienta,                  Ejemplo en C
Saber dónde vive algo,                    Operador de Dirección,        &miVariable
"Crear un ""papelito"" de dirección",     Declarar Puntero,             int *p;
Entrar a la habitación,                   Operador de Indirección,      *p = 20;
Moverse al siguiente dato,                Aritmética de Punteros,       p++;
Pasar la llave a una función,             Paso por Referencia,          func(&x);*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Prototipos de funciones para el Laboratorio ---
void explicarDireccionamiento();
void explicarArgumentos(int *n);
void explicarArreglosPunteros();
void explicarAritmetica();
void explicarStrings();
void explicarArregloDePunteros();
void explicarMatrices();
void saludar(); // Para punteros a funciones

int main() {
    int opcion;
    int numeroEjemplo = 10;

    do {
        printf("\n==============================================");
        printf("\n   MENU: UNIDAD II - ARREGLOS Y PUNTEROS      ");
        printf("\n==============================================");
        printf("\n1. Punteros y Direccionamiento                ");
        printf("\n2. Puntos y Argumentos (Paso por Referencia)  ");
        printf("\n3. Relacion Puntero-Arreglo                   ");
        printf("\n4. Aritmetica de Direcciones                  ");
        printf("\n5. Punteros a Caracteres (Strings)            ");
        printf("\n6. Arreglos de Punteros                       ");
        printf("\n7. Arreglos Multidimensionales                ");
        printf("\n8. Punteros a Funciones                       ");
        printf("\n0. Salir                                      ");
        printf("\n Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: explicarDireccionamiento(); break;
            case 2:
                printf("\nValor original: %d", numeroEjemplo);
                explicarArgumentos(&numeroEjemplo);
                printf("\nValor despues de la funcion: %d\n", numeroEjemplo);
                break;
            case 3: explicarArreglosPunteros(); break;
            case 4: explicarAritmetica(); break;
            case 5: explicarStrings(); break;
            case 6: explicarArregloDePunteros(); break;
            case 7: explicarMatrices(); break;
            case 8: {
                void (*ptrSaludar)() = saludar;
                printf("\nEjecutando funcion a traves de un puntero...");
                ptrSaludar();
                break;
            }
        }
    } while (opcion != 0);

    return 0;
}

// 1. Punteros y Direccionamiento
void explicarDireccionamiento() {
    int x = 50;
    int *p = &x;
    printf("\n--- Direccionamiento ---");
    printf("\nVariable x = %d", x);
    printf("\nDireccion de x (&x) = %p", (void*)&x);
    printf("\nEl puntero p guarda la direccion: %p", (void*)p);
    printf("\nEl contenido de esa direccion (*p) es: %d\n", *p);
}

// 2. Puntos y Argumentos
void explicarArgumentos(int *n) {
    printf("\n--- Entrando a la funcion ---");
    *n = *n + 5; // Modificamos el original usando la "llave" (puntero)
    printf("\nSumamos 5 internamente...");
}

// 3. Puntero y Arreglos
void explicarArreglosPunteros() {
    int lista[] = {10, 20, 30};
    printf("\n--- Puntero vs Arreglo ---");
    printf("\nNombre del arreglo 'lista' actua como direccion: %p", (void*)lista);
    printf("\nDireccion del primer elemento &lista[0]: %p", (void*)&lista[0]);
    printf("\nAcceder sin [] usando *(lista): %d\n", *(lista));
}

// 4. Aritmetica de Direcciones
void explicarAritmetica() {
    int v[] = {1, 2, 3};
    int *ptr = v;
    printf("\n--- Aritmetica ---");
    printf("\nPosicion 0: %d (Direccion: %p)", *ptr, (void*)ptr);
    ptr++; // Salta a la siguiente habitación del hotel
    printf("\nPosicion 1 (despues de ptr++): %d (Direccion: %p)\n", *ptr, (void*)ptr);
}

// 5. Punteros a Caracteres
void explicarStrings() {
    char *texto = "Hola Alumnos";
    printf("\n--- Strings ---");
    printf("\nEl puntero apunta a la primera letra: %c", *texto);
    printf("\nLa cadena completa es: %s\n", texto);
}

// 6. Arreglos de Punteros
void explicarArregloDePunteros() {
    char *frutas[] = {"Manzana", "Pera", "Uva"};
    printf("\n--- Arreglo de Punteros ---");
    for(int i=0; i<3; i++) {
        printf("\nFruta %d: %s (Ubicacion: %p)", i, frutas[i], (void*)frutas[i]);
    }
    printf("\n");
}

// 7. Arreglos Multidimensionales
void explicarMatrices() {
    int matriz[2][2] = {{1, 2}, {3, 4}};
    printf("\n--- Matrices ---");
    printf("\nElemento [0][1]: %d", matriz[0][1]);
    printf("\nElemento [1][1]: %d\n", matriz[1][1]);
}

void saludar() {
    printf("\n¡Hola desde un puntero a funcion! [Capitulo 9 Joyanes]\n");
}