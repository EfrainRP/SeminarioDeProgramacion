//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100 //100

void main(){
    int i, j, a[N], temp;
    srand(time(NULL)); //inicializador de numeros aleatorios

    for(i=0;i<N;i++){
        a[i]=rand()%1000;
        printf("%4i",a[i]);
    }

    printf("\n\n\n");

    for(j=0;j<N;j++)
        for(i=0;i<N-1;i++)
            if(a[i]<a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }

    for(i=0;i<N;i++)
        printf("%4i",a[i]);
}
