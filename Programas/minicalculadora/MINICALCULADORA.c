#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    int p,n;
    float r;
    printf("*** CALCULARO DE POTENCIA ***\n\n");
    printf("Ingrese un numero:\n");
    scanf("%i", &n);
    printf("Ingrese un numero para la potencia\n");
    scanf("%i", &p);
    r=pow(n,p);
    printf("\t%d^%d = %1.4f\n",n,p,r);
}
