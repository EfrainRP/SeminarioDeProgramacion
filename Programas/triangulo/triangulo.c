//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Dame 3 lados del triangulo (A, B, C): \n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a==b)&&(b==c)){//Analisis de tipo de triangulos
        printf("Es un triangulo equilatero \n\n");
    }
    else if(((a==b)||(a==c)||(c==b))&&((a!=c)||(b!=c)||(a!=b))){
        printf("Es un triangulo isosceles \n\n");
    }
    else{
        printf("Es un triangulo escaleno \n\n");
    }
//////////////////////////////////////////////////////////////////////
    if ((a>b)&&(a>c)){//analisis de valores
        printf("El primer lado introducido (A) es el mayor \n\n");
    }
    else if((b>a)&&(b>c)){
        printf("El segundo lado introducido (B) es el mayor \n\n");
    }
    else if((c>a)&&(c>b)){
        printf("El tercer lado introducido (C) es el mayor \n\n");
    }
    else if((a==b)&&(b==c)){
        printf("Son iguales los lados introducidos \n\n");
    }
    else if((a==b)||(b==c)||(a==c)){
        printf("Hay 2 lados introducidos iguales que son mayores \n\n");
    }
///////////////////////////////////////////////////////////////////////////
    if ((a<=b)&&(b<=c)){//Acomodador de valores
        printf("Orden ascendente: %d,%d y %d \n\n", a,b,c);
    }
    else if((a<=c)&&(c<=b)){
        printf("Orden ascendente: %d,%d y %d \n\n", a,c,b);
    }
    else if((b<=a)&&(a<=c)){
        printf("Orden ascendente: %d,%d y %d \n\n", b,a,c);
    }
    else if((b<=c)&&(c<=a)){
        printf("Orden ascendente: %d,%d y %d \n\n", b,c,a);
    }
    else if((c<=b)&&(b<=a)){
        printf("Orden ascendente: %d,%d y %d \n\n", c,b,a);
    }
    else if((c<=a)&&(a<=b)){
        printf("Orden ascendente: %d,%d y %d \n\n", c,a,b);
    }

    printf("Que tenga un buen dia\n");
}
