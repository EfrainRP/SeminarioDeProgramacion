//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){//Numeros primos
    int a, j, i;
    printf("*************** Numeros primos del 1 al 10 000 ***************\n\n");
    for(i=1;i<=10000;i++){//Contador que se analizara en cada valor
        a=0;
        for(j=1;j<=10000;j++){//Contador para cada los divisores
            if((i%j)==0){//comprobando si son numeros pirmos
                a++;
            }
        }
        if (a==2){//si tiene solo 2 divisores entonces es numero primo
            printf("\t%d es un numero primo\n",i);
        }
    }
}
