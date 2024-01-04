//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>

int main(){//Practica 8: Figuras con asteriscos
    int x, m, y,t;
    printf("Dame el valor del tamaño: \n\t");
    scanf("%d",&t);

    while(m<10){//saldra del programa si el menu es 10
        printf("\n1.Cuadro completo / 2.Contorno del cuadrado / 3.Triangulo superior izquierdo");
        printf("\n4. Triangulo superior derecho / 5. Triangulo inferior izquierdo \n");
        printf ("/ 6.Triangulo inferior derecho / 7. Diagonal de izquierda a derecha \n");
        printf ("/ 8. Diagonal de derecha a izquierda / 9. Cruz X / 10. Salir\n\t");
        scanf("%d",&m);

        switch (m){
        case 0://Cambio de tamaño de la figura
            printf("\nDame el valor del tamaño: \n\t");
            scanf("%d",&t);
            break;

        case 1://Cuadro completo
            for(y=1;y<=t;y++){
                for(x=1;x<=t;x++)
                    printf("* ");
                printf ("\n");
            }
            printf("\n");//salto de renglon
            break;

        case 2://Contorno del cuadrado
            for(y=1;y<=t;y++)
                printf("* ");
            printf("\n");

            for(y=2;y<=t-1;y++){
                printf ("* ");
                for(x=2;x<=t-1;x++)
                    printf("  ");

                printf ("* \n");
            }
            for(y=1;y<=t;y++)
                printf("* ");
            printf("\n");
            break;

        case 3://Triangulo superior izquierdo
            for(y=1;y<=t;y++){
                for(x=t;x>=y;x--)
                    printf("* ");
                printf ("\n");
            }
            printf("\n");//salto de renglon
            break;

        case 4: //Triangulo superior derecho
            for(y=1;y<=t;y++){
                for(x=1;x<=t;x++)
                    printf("%c ",x>=y?'*':' ');
                printf ("\n");
            }
            printf("\n");//salto de renglon
            break;

        case 5: //Triangulo inferior izquierdo
            for(y=1;y<=t;y++){
                for(x=1;x<=y;x++)
                    printf("* ");

                printf ("\n");
            }
            printf("\n");//salto de renglon
            break;

        case 6://Triangulo inferior derecho
            for(y=t;y>=1;y--){
                for(x=1;x<=t;x++)
                    printf("%c ",x>=y?'*':' ');
                printf ("\n");
            }
            printf("\n");//salto de renglon
            break;

        case 7://Diagonal de izquierda a derecha
            for(y=1;y<=t;y++){
                for(x=1;x<=t;x++)
                    printf("%c ",x==y?'*':' ');
                printf ("\n");
            }
            printf("\n");//salto de renglon
            break;

        case 8://Diagonal de derecha a izquierda
            for(y=1;y<=t;y++){
                for(x=t;x>=1;x--)
                    printf("%c ",x==y?'*':' ');
                printf ("\n");
            }
            printf("\n");//salto de renglon
            break;

        case 9://cruz X
            for(y=1;y<=t;y++){
                for(x=1;x<=t;x++)
                    printf("%c ",((x==y)||((x+y)==(t+1)))? '*':' ');

                printf ("\n");
            }
            printf("\n");//salto de renglon
            break;
        }
    }

    printf("\n\tFIN DE PROGRAMA\n");
    return 0;
}
