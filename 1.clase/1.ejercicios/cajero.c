//
// Created by Constantino Sorto on 10/2/26.
//
#include <stdio.h>

void mostrarMenu();

int main() {
    int opcion;
    float saldo = 1000.0; // Saldo inicial
    float monto;

    do {
        mostrarMenu();
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Monto a depositar: ");
                scanf("%f", &monto);
                saldo += monto;
                break;
            case 2:
                printf("Monto a retirar: ");
                scanf("%f", &monto);
                if(monto <= saldo) saldo -= monto;
                else printf("Saldo insuficiente.\n");
                break;
            case 3:
                printf("Saliendo... Saldo final: $%.2f\n", saldo);
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while(opcion != 3);

    return 0;
}

void mostrarMenu() {
    printf("\n--- CAJERO AUTOMATICO ---\n");
    printf("1. Deposito\n2. Retiro\n3. Salir\n");
}