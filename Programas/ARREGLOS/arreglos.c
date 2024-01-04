//Efrain Robles Pulido
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*void main(){
    int i, a[10],b[10],c[10],acum1,acum2,acum3;
    srand(time(NULL)); //inicializador de numeros aleatorios que utiliza el tiempo en miliseg

    for(i=0;i<10;i++){
        a[i]=rand()%100;//%limita el rango de 100
        b[i]=rand()%100;
        c[i]=rand()%100;
        acum1=acum1+a[i];
        acum2=acum2+b[i];
        acum3=acum3+c[i];
    }
    printf("\ta\tb\tc\n");
    for(i=0;i<10;i++)
        printf("\t%2i\t%2i\t%2i\n",a[i],b[i],c[i]);

    printf("%i\n",acum1/10);
    printf("%i\n",acum2/10);
    printf("%i\n",acum3/10);

}*/
void main(){
    int i, a[10],b[10],c[10],num,mayor, menor=100,mayor2, menor2=100,mayor3, menor3=100;
    srand(time(NULL)); //inicializador de numeros aleatorios que utiliza el tiempo en miliseg

    printf("\ta\tb\tc\n");
    for(i=0;i<10;i++){
        a[i]=rand()%100;
        b[i]=rand()%100;
        c[i]=rand()%100;
        printf("\t%2i\t%2i\t%2i\n",a[i],b[i],c[i]);
    }
    scanf("%d",&num);
    for(i=0;i<10;i++){
        if(a[i]>mayor){
            mayor=a[i];
        }
        if(a[i]<menor){
            menor=a[i];
        }
        if(b[i]>mayor){
            mayor2=a[i];
        }
        if(b[i]<menor){
            menor2=a[i];
        }
        if(c[i]>mayor){
            mayor3=a[i];
        }
        if(c[i]<menor){
            menor3=a[i];
        }

        if(num==a[i]){
            printf("%2i esta en el lugar %2i de a\n",num,i);
        }
        else if(num==b[i]){
            printf("%2i esta en el lugar %2i de b\n",num,i);
        }
        else if(num==c[i]){
            printf("%2i esta en el lugar %2i de c\n\n",num,i);
        }

    }
    printf("El mayor es %2i\n",mayor);
    printf("El menor es %2i\n",menor);
    printf("El mayor es %2i\n",mayor2);
    printf("El menor es %2i\n",menor2);
    printf("El mayor es %2i\n",mayor3);
    printf("El menor es %2i\n",menor3);
}
/*void main(){
    int i, a[10],b[10],c[10],mayor=0,menor=100;
    srand(time(NULL)); //inicializador de numeros aleatorios que utiliza el tiempo en miliseg

    printf("\ta\tb\tc\n");
    for(i=0;i<10;i++){
        a[i]=rand()%100;
        b[i]=rand()%100;
        c[i]=rand()%100;
        printf("\t%2i\t%2i\t%2i\n",a[i],b[i],c[i]);

        if(a[i]>mayor){
            mayor=a[i];
        }
        if(a[i]<menor){
            menor=a[i];
        }
    }
    printf("El mayor es %2i\n",mayor);
    printf("El menor es %2i\n",menor);
}*/
