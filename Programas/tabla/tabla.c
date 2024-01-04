//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(int arg,char*argv[])//Practica : tabla
{
    int num, res,lim=1;
    printf("\ntabla de :\n", num);
    scanf("%d", &num);

    while(lim<=10){
        res=num*lim;
        printf("\n\t%d * %d = %d",num,lim,res);
        lim++;
    }
    return 0;
}
