//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){
    float precio,total, IVA, din_cliente,cambio, subt, centavos;
    int cant,div_cambio,cambio_e, div_cent;
    printf("******* COMPRAS *******\n\n");
    printf("Precio Unitario:\n");
    scanf("%f", &precio);
    printf("Cantidad de producto:\n");
    scanf("%i", &cant);

    subt=precio*cant;
    IVA=subt*0.16;
    total=subt+IVA;

    printf("\tTotal a pagar con IVA: $%1.2f \n\n",total);

    printf("Cantidad de dinero recibida del cliente: \n");
    scanf("%f", &din_cliente);
    cambio=din_cliente-total;
    cambio_e=cambio;//solo se guardar el entero del numero con decimal
    centavos=cambio-cambio_e; //centavos=numero con decimal - solo el entero del numero

    printf("\tCambio a regresar: $%1.2f\n\n",cambio);
    printf("\tDinero a entregar:\n\n");

    //Billetes
    div_cambio=cambio/1000;
    cambio=cambio-(div_cambio*1000);
    printf("Cantidad de billetes de $1000: %d \n", div_cambio);

    div_cambio=cambio/500;
    cambio=cambio-(div_cambio*500);
    printf("Cantidad de billetes de $500: %d \n", div_cambio);

    div_cambio=cambio/200;
    cambio=cambio-(div_cambio*200);
    printf("Cantidad de billetes de $200: %d \n", div_cambio);

    div_cambio=cambio/100;
    cambio=cambio-(div_cambio*100);
    printf("Cantidad de billetes de $100: %d \n", div_cambio);

    div_cambio=cambio/50;
    cambio=cambio-(div_cambio*50);
    printf("Cantidad de billetes de $50: %d \n\n", div_cambio);

    div_cambio=cambio/20;
    cambio=cambio-(div_cambio*20);
    printf("Cantidad de billetes de $20: %d \n", div_cambio);

    //Monedas
    div_cambio=cambio/10;
    cambio=cambio-(div_cambio*10);
    printf("Cantidad de monedas de $10: %d \n", div_cambio);

    div_cambio=cambio/5;
    cambio=cambio-(div_cambio*5);
    printf("Cantidad de monedas de $5: %d \n", div_cambio);

    div_cambio=cambio/2;
    cambio=cambio-(div_cambio*2);
    printf("Cantidad de monedas de $2: %d \n", div_cambio);

    div_cambio=cambio/1;
    cambio=cambio-div_cambio;
    printf("Cantidad de monedas de $1: %d \n\n", div_cambio);

    //Centavos
    div_cent=centavos/0.5;
    centavos=centavos-(div_cent*0.5);
    printf("Cantidad de centavos de 50: %d \n",div_cent);

    div_cent=centavos/0.2;
    centavos=centavos-(div_cent*0.2);
    printf("Cantidad de centavos de 20: %d \n",div_cent);

    div_cent=centavos/0.1;
    centavos=centavos-(div_cent*0.1);
    printf("Cantidad de centavos de 10: %d \n\n",div_cent);

    printf("\tQue tenga un buen dia\n");
}
