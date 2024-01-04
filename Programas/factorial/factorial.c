//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica : 'factorial SIN TERMINAR
{
    int num, res, acum, ban, cont;
    printf("\nFactorial de :\n", num);
    scanf("%d", &num);
    cont=num;

    for(cont=num; acum>0;cont--){
        lim=num-1;
        res= num*acum;
        printf("\n\t%d! = %d",num,res);
    }
    return 0;
}
