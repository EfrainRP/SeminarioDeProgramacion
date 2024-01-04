//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){//Practica 6: Numeros perfectos
    int acum, j, i;
    printf("*************** Numeros perfectos del 2 al 10 000 ***************\n\n");
    for(i=2;i<=10000;i++){//ciclo contador de 2 al 10 000
        for(j=(i/2);j>=1;j--){//ciclo contador para las sumas parciales
            if((i%j)==0){//seleccion de numeros que son divisores
                acum=acum+j;
            }
        }
        if (acum==i){//comprobacion de la operacion
            printf("\t%d es un numero perfecto\n",acum);
        }
        acum=0;
    }
}
