//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){//Practica 10: Producto de Matrices
    int  M, N, P;

    printf("Dame valor de la fila para la matriz A:\n");
    scanf("%d",&M);
    printf("\nDame valor de la columna para la matriz A,\n   como para la fila de la matriz B:\n");
    scanf("%d",&N);
    printf("\nDame valor de la columna de la matriz  B:\n");
    scanf("%d",&P);

    int sum, m, n, p, A[M][N], B[N][P],C[M][P];
    srand(time(NULL)); //inicializador de numeros aleatorios

    for(m=0;m<M;m++)//Llenado de MxN
        for(n=0;n<N;n++)
            A[m][n]=rand()%10;

    for(n=0;n<N;n++)//Llenado de NxP
        for(p=0;p<P;p++)
            B[n][p]=rand()%10;

    printf("\n   Matriz MxN\n");
    for(m=0;m<M;m++){//Impresion de MxN
        for(n=0;n<N;n++)
            printf("%3d  ",A[m][n]);
        printf("\n");
    }
    printf("\n   Matriz NxP\n");
    for(n=0;n<N;n++){//Impresion de NxP
        for(p=0;p<P;p++)
            printf("%3d  ",B[n][p]);
        printf("\n");
    }

    printf("\n");
    for(m=0;m<M;m++){//Producto de matrices (MxN)x(NxP) = (MxP)
        for(p=0;p<P;p++){
            printf("C%d%d = ",m,p);
            sum=0;
            for(n=0;n<N;n++){
                sum=sum+(A[m][n]*B[n][p]);
                printf("A%d%d*B%d%d %c ",m,n,n,p,(n<N-1)?'+':'=');//Desgloce de operaciones
            }
            for(n=0;n<N;n++)//Desgloce de operaciones
                printf("%d * %d %c ",A[m][n],B[n][p],(n<N-1)?'+':'=');

            for(n=0;n<N;n++)//Desgloce de operaciones
                printf("%3d %c",A[m][n]*B[n][p],(n<N-1)?'+':'=');

            C[m][p]=sum;
            printf(" %d\n",C[m][p]);//Desgloce de operaciones
        }
    }

    printf("\n   Matriz MxP\n");
    for(m=0;m<M;m++){//Impresion de MxP
        for(p=0;p<P;p++)
            printf(" %3d  ",C[m][p]);
        printf("\n");
    }
}
