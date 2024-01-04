//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
int main(){
    char pal[TAM], palrev[TAM],temp;
    int i=0,x,y=0,cant,ig=0;

    printf("Dame frase que se analizara: ");
    while((i<TAM)&&(pal[i-1]!='\n')){//detectara en el anterior el salto de linea enter
        pal[i]=getchar();
        i++;
    }
    cant=i-2;
    //printf("i=%d",i);

    for(x=cant;x>=0;x--){//pone al reves la palabra
        palrev[y]=pal[x];
        y++;
    }

    for(x=0;x<=cant;x++){//Reacomodo de letras, manda los espacios al final
        for(y=0;y<=cant-1;y++){
            if(pal[y]==' '){
                temp=pal[y];
                pal[y]=pal[y+1];
                pal[y+1]=temp;
            }
            if(palrev[y]==' '){
                temp=palrev[y];
                palrev[y]=palrev[y+1];
                palrev[y+1]=temp;
            }
        }
    }
    /*printf("\n Pal: ");
    for(x=0;x<cant;x++){
        printf("%c",pal[x]);
    }

    printf("\n2Pal: ");
    for(x=esp-1;x<cant;x++){
        printf("%c",palrev[x]);
    }
    */
    for(x=0;x<cant;x++)//comparacion letra por letra con los espacios
        if(pal[x]==palrev[x]){
            ig++;
        }

    if(ig==cant){
        printf("\nEs palindromo :)\n");
    }else{
        printf("\nNo es palindromo :(\n");
    }
        //printf("\n%d",ig);

}

