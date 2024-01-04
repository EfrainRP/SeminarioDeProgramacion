//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
int main()//Practica 4: signo zodiacal
{
    int mes, dia;
    printf("Introduce tu dia y mes de nacimiento: \n");
    scanf("%d %d",&dia,&mes);

    switch (mes){
    case 1:
        if (dia<=19)
            printf("Eres CAPRICORNIO \n");
        else {
            printf("Eres ACUARIO \n");
        }
        break;

    case 2:
        if (dia<=18)
            printf("Eres ACUARIO \n");
        else {
            printf("Eres PISCIS \n");
        }
        break;

    case 3:
        if (dia<=20)
            printf("Eres PISCIS \n");
        else {
            printf("Eres ARIES \n");
        }
        break;

    case 4:
        if (dia<=20)
            printf("Eres ARIES \n");
        else {
            printf("Eres TAURO \n");
        }
        break;

    case 5:
        if (dia<=20)
            printf("Eres TAURO \n");
        else {
            printf("Eres GEMINIS \n");
        }
        break;

    case 6:
        if (dia<=20)
            printf("Eres GEMINIS \n");
        else {
            printf("Eres CANCER \n");
        }
        break;

    case 7:
        if (dia<=22)
            printf("Eres CANCER \n");
        else {
            printf("Eres LEO \n");
        }
        break;

    case 8:
        if (dia<=22)
            printf("Eres LEO \n");
        else {
            printf("Eres VIRGO \n");
        }
        break;

    case 9:
        if (dia<=22)
            printf("Eres VIRGO \n");
        else {
            printf("Eres LIBRA \n");
        }
        break;

    case 10:
        if (dia<=23)
            printf("Eres LIBRA \n");
        else {
            printf("Eres ESCORPIO \n");
        }
        break;

    case 11:
        if (dia<=21)
            printf("Eres ESCORPIO \n");
        else {
            printf("Eres SAGITARIO \n");
        }
        break;

    case 12:
        if (dia<=21)
            printf("Eres SAGITARIO \n");
        else {
            printf("Eres CAPRICORNIO \n");
        }
        break;

    default:
        printf("No existe tal mes\n");
    }
    return 0;
}
