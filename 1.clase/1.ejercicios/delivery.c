/*
 *
Enunciado: Sistema de Gestión de Pedidos "Flash Delivery"
Contexto:
Una pequeña empresa de Delivery necesita un programa en C para gestionar sus pedidos del día.
El sistema debe permitir calcular el costo total de un pedido considerando el precio de la comida,
la distancia de entrega y un cupón de descuento.

Requerimientos:

Menú Principal: El programa debe mostrar opciones para: "Registrar Pedido", "Ver Reporte de Ventas" y "Salir".
Modularización: Debes implementar las siguientes funciones:
float calcularEnvio(float km): El costo es de $1.20 por kilómetro.
float aplicarDescuento(float subtotal, char cupon): Si el cupón es 'S' (Silver) descuenta 10%, si es 'G' (Gold) descuenta 20%.
void mostrarTicket(float comida, float envio, float total): Imprime el desglose de la operación.

Lógica: El programa debe acumular el total de todas las ventas realizadas mientras no se elija la opción "Salir".

 *
 */


#include <stdio.h>

// --- Prototipos de Funciones ---
float calcularEnvio(float km);
float aplicarDescuento(float subtotal, char cupon);
void mostrarTicket(float comida, float envio, float total);

int main() {
    int opcion;
    float precioComida, distancia, costoEnvio, subtotal, totalFinal;
    float ventasTotales = 0; // Acumulador global del programa
    char tipoCupon;

    do {
        printf("\n--- FLASH DELIVERY SYSTEM ---\n");
        printf("1. Registrar nuevo pedido\n");
        printf("2. Ver total de ventas del dia\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Ingrese precio de la comida: $");
            scanf("%f", &precioComida);
            printf("Ingrese distancia de entrega (km): ");
            scanf("%f", &distancia);
            printf("¿Tiene cupon? (S: Silver, G: Gold, N: Ninguno): ");
            scanf(" %c", &tipoCupon);

            // Lógica de procesamiento
            costoEnvio = calcularEnvio(distancia);
            subtotal = precioComida + costoEnvio;
            totalFinal = aplicarDescuento(subtotal, tipoCupon);

            // Mostrar resultados y acumular
            mostrarTicket(precioComida, costoEnvio, totalFinal);
            ventasTotales += totalFinal;

        } else if (opcion == 2) {
            printf("\n>>> VENTAS TOTALES ACUMULADAS: $%.2f <<<\n", ventasTotales);
        }

    } while (opcion != 3);

    printf("Cerrando sistema. ¡Buen dia, Catedratico!\n");
    return 0;
}

// --- Implementación de Funciones ---

float calcularEnvio(float km) {
    return km * 1.20;
}

float aplicarDescuento(float subtotal, char cupon) {
    if (cupon == 'S' || cupon == 's') {
        return subtotal * 0.90; // 10% descuento
    } else if (cupon == 'G' || cupon == 'g') {
        return subtotal * 0.80; // 20% descuento
    }
    return subtotal; // Sin descuento
}

void mostrarTicket(float comida, float envio, float total) {
    printf("\n------- RESUMEN DE PEDIDO -------\n");
    printf("Precio Base:   $%10.2f\n", comida);
    printf("Costo Envío:   $%10.2f\n", envio);
    printf("---------------------------------\n");
    printf("TOTAL A PAGAR: $%10.2f\n", total);
    printf("---------------------------------\n");
}//
// Created by Constantino Sorto on 10/2/26.
//