//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
int main(){//Palindromo con funciones
    char pal[TAM], palrev[TAM],temp;
    int cant,i,x;
    do{
        printf("Dame frase que se analizara: ");
        gets(pal);
        cant=strlen(pal);
        for(x=0;x<=cant;x++)//Reacomodo de letras, manda los espacios al final
            for(i=0;i<=cant-1;i++)
                if(pal[i]==' '){
                    temp=pal[i];
                    pal[i]=pal[i+1];
                    pal[i+1]=temp;
                }

        strcpy(palrev,pal);
        strrev(palrev);

        if(strcmpi(pal,palrev)==0){
            printf("\n\tEs palindromo :)\n");
        }
        else{
            printf("\n\tNo es palindromo :(\n");
        }
        /*printf("\n1) %s",pal);
        printf("\n1) %d",strlen(pal));
        printf("\n2) %s",palrev);
        printf("\n2) %d",strlen(palrev));
        printf("\n %d",strcmpi(pal,palrev));*/
        printf("\n");

    }while(strcmpi(pal,palrev)!=0);
}
