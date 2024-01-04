//Efrain Robles Pulido
#include <stdio.h>
#include <string.h>
/*

*/
int bin_deci(){
    int i,j=0,deci;
    char bin[100];
    printf("Dame un numero binario: ");
    scanf("%s", &bin);
    for(i=strlen(bin)-1;i>=0;i--){
            deci+=pow(2,j)*(bin[i]-'0');
            j++;
            }
    printf("Numero decimal: %d",deci);
    return 0;
}
int hex_dec(){////////////en mantenimiento
    int i,j=0,deci;
    char hex[100];
    printf("Dame un numero hexadecimal: ");
    scanf("%s", &hex);
    for(i=strlen(hex)-1;i>=0;i--){
        if(hex[i]>='0' && hex[i]<='9'){
            deci+=pow(16,j)*(hex[i]-'0');
        }else{
            deci+=pow(16,j)*(hex[i]-'A'+10);
        }
        j++;
    }
    printf("Numero decimal: %d",deci);
    return 0;
}


int main(){
    int opc;
    printf("1)bin-deci 2)hex-deci\n");
    scanf("%d", &opc);
    switch(opc){
    case 1:
        bin_deci();
        break;

    case 2:
        hex_dec();
        break;
    }
}


