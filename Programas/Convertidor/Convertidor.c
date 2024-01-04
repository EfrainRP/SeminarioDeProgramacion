//Efrain Robles Pulido
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int i,deci,cant;
int dec_bin(){//
    int bin[8];
    printf("Dame numero decimal:");
    scanf("%d",&deci);
    for(i=0;i<8;i++){
        bin[i]=deci%2;
        deci=deci/2;
    }
    printf("Numero binario es:");
    for(i=7;i>=0;i--){
        printf("%d", bin[i]);
    }

}
//////////////////////////////////////////////
int bin_dec(){//
    int dig[8], bin;
    printf("Dame un numero binario de 8(de izq a der.):");
    scanf("%d",&bin);
    for(i=0;i<8;i++){
        dig[i]=bin%10;
        bin=bin/10;
    }
    for(i=7;i>=0;i--){
        deci=(pow(2,i)*dig[i])+deci;
    }
    printf("Numero decimal es: %d\n",deci);
    return 0;
}
/////////////////////////////////////////////
int dec_hex(){//
    int dig[20],resi,resp,j;
    printf("Dame un numero decimal:");
    scanf("%d",&deci);
    do{
        resi=deci%16;
        resp=deci/16;
        dig[i]=resi;
        deci=resp;
        i++;
    }while(resp>16);
    dig[i]=resp;

    printf("\nNumero hexadecimal es:");
    for(j=i;j>=0;j--){
        switch(dig[j]){
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d",dig[j]);
        }
    }
    return 0;
}
//////////////////////////////////////////
int hex_dec(){//
        char hex[100],dig;
        printf("Dame un numero hexadecimal:");
        scanf("%s",hex);
        cant=strlen(hex);

        for(i=0;i<cant;i++){
            dig=hex[cant-1-i];
            if(dig>='0' && dig<='9'){
                deci+=pow(16,i)*(dig-'0');
            }else
                deci+=pow(16,i)*(dig-'A'+10);
            }
        printf("Numero decimal es: %d\n",deci);
        return 0;
    }
//////////////////////////////////////////////////
int bin_hex(){//
        int hex;
        char bin[100],dig;//NO MAYOR A 4 BITS
        printf("Dame un numero binario de 4(de izq a der.):");
        scanf("%s",bin);
        cant=strlen(bin);

        for(i=0;i<cant;i++){
            dig=bin[cant-1-i];
            if(dig>='0' && dig<='9'){
                hex+=pow(2,i)*(dig-'0');
            }else
                hex+=pow(2,i)*(dig-'A'+10);
            }
            printf("Numero hexadecimal es:");
            switch(hex){
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d",hex);
            }
    /*char bin[100];
    printf("Dame un numero binario:");
    scanf("%s",bin);
    cant=strlen(bin);
    printf("Numero binario es:");
    for(i=0;i<cant;i++){
        switch(bin[i]){
            case '0000':
                printf("0");
                break;
            case '0001':
                printf("1");
                break;
            case '0010':
                printf("2");
                break;
            case '0011':
                printf("3");
                break;
            case '0100':
                printf("4");
                break;
            case '0101':
                printf("5");
                break;
            case '0110':
                printf("6");
                break;
            case '0111':
                printf("7");
                break;
            case '1000':
                printf("8");
                break;
            case '1001':
                printf("9");
                break;
            case '1010':
                printf("A");
                break;
            case '1011':
                printf("B");
                break;
            case '1100':
                printf("C");
                break;
            case '1101':
                printf("D");
                break;
            case '1110':
                printf("E");
                break;
            case '1111':
                printf("F");
                break;
            }
        }*/
        return 0;
    }
///////////////////////////////////////
int hex_bin(){
    char bin[100];
    printf("Dame un numero hexadecimal:");
    scanf("%s",bin);
    cant=strlen(bin);
    printf("Numero binario es:");
    for(i=0;i<cant;i++){
        switch(bin[i]){
            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1001");
                break;
            case 'A':
                printf("1010");
                break;
            case 'B':
                printf("1011");
                break;
            case 'C':
                printf("1100");
                break;
            case 'D':
                printf("1101");
                break;
            case 'E':
                printf("1110");
                break;
            case 'F':
                printf("1111");
                break;
            }
        }
        return 0;
}
int main(){
    int opc;
    while(opc!=7){
        printf("\t\t\tMENU: \n1.Decimal a Binario  2.Binario a Decimal  3.Decimal a Hexadecimal");
        printf("\n4.Hexadecimal a Decimal  5.Binario a Hexadecimal  6.Hexadecimal a Binario\n7.Salir\n");
        scanf("%d",&opc);
        i=deci=0;
        switch(opc){
        case 1:
            dec_bin();
            printf("\n");
            break;
        case 2:
            bin_dec();
            printf("\n");
            break;
        case 3:
            dec_hex();
            printf("\n");
            break;
        case 4:
            hex_dec();
            printf("\n");
            break;
        case 5:
            bin_hex();
            printf("\n");
            break;
        case 6:
            hex_bin();
            printf("\n");
            break;
        default:
            printf("Se acabo\n");
        }
    }
}
