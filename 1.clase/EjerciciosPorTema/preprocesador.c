#include <stdio.h>

//#define MODO_DEBUG // Comenta esta linea para "desactivar" los mensajes

#ifdef MODO_DEBUG
    #define DEBUG_PRINT(msg) printf("[DEBUG]: %s\n", msg)
#else
    #define DEBUG_PRINT(msg) // No hace nada
#endif

int main() {
    DEBUG_PRINT("Iniciando conexion a base de datos...");
    printf("El programa esta corriendo normalmente.\n");
    return 0;
}
