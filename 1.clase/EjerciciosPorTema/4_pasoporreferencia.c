#include <stdio.h>

// La funcion recibe un PUNTERO para poder hacer la REFERENCIA
void aumentar_sueldo(float *sueldo_actual) {
    // Usamos INDIRECCION (*) para entrar a la direccion recibida
    *sueldo_actual = *sueldo_actual + 1000;
}

int main() {
    float mi_pago = 3000.0;

    printf("Sueldo antes: %.2f\n", mi_pago);

    // PASO POR REFERENCIA: Usamos '&' para enviar la direccion
    aumentar_sueldo(&mi_pago);

    printf("Sueldo despues: %.2f\n", mi_pago); // ¡El original cambio!

    return 0;
}