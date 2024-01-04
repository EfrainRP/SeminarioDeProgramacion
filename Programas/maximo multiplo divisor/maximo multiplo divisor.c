//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){//Practica 5: Maximo multliple divisor
    int M, N, R, temporal;
    printf("Dame un numero para M y N:\n");
    scanf("%d %d", &M, &N);

    while ((M!=N)&&(N!=M)){
        if(N<M)	{//Reacomodo de valores
            temporal=M;
            M=N;
            N=temporal;
        }
        R=M%N;
        while(R!=0){
            M=N;
            N=R;
            R=M%N;
        }
        printf("\t El maximo comun divisor es %d\n\n", N);
        printf("\nDame un numero para M y N:\n");
        scanf("%d %d", &M, &N);
        }
    printf("\nQue tenga un buen dia\n");
}
