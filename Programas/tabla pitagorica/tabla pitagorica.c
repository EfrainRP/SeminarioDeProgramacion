//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){//Practica 7: Tabla pitagorica
    int i, x, f, c;
    printf("************ Tabla Pitagorica ****************\n\n");
    printf(" x  |");

    for (i=1;i<=10;i++)//ciclo numerador de la fila 0
        printf("%4d",i);

    printf("\n----+");

    for (x=1;x<=10;x++)//ciclo llenador de solo un renglon
        printf("----");

    for(c=1;c<=10;c++){//ciclo anidado, y numerador de la columna O
        printf("\n%2d  |",c);//salta un renglon para
                             //cada fila llega a la decima columna

        for(f=1;f<=10;f++)//ciclo de tabla de pitagoras
            printf("%4d",c*f);

    }
    printf("\n");//salto de renglon
}
