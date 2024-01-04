//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){
    int lado, area, perimetro;
    printf("*** AREA Y PERIMTRO DE UN CUADRADO ***\n\n");
    printf("Ingrese la longitud del lado del cuadrado en cm:\n");
    scanf("%i", &lado);
    area=lado * lado;
    perimetro=4*lado;
    printf("\t%i x %i = %i\n",lado, lado, area);
    printf("\t4 x %i = %i\n\n",lado, perimetro);
    printf("Area del cuadrado es %i cm\n",area);
    printf("Perimetro del cuadrado es %i cm\n",perimetro);
}
