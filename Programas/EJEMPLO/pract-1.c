#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("*** SUMA DE NUMEROS ***\n\n");
    printf("Ingrese dos numeros enteros\n");
    scanf("%i%i", &a, &b);
    c=a +b;
    printf("\t%i + %i = %i\n",a,b,c);
}
