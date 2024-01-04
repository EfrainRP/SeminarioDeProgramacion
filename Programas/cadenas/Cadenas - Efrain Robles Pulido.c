//Efrain Robles Pulido
#include <stdio.h>
#include <string.h>
#define TAM 30
/*
gets - Permite leer una cadena, incluyendo espacios en blanco, terminando con el caracter de fin de linea (enter)

strlen - Devuelve la longitud de la cadena "x"

strcpy - Copia n caracteres de la cadena fuente en destino. Devuelve la cadena destino.

strcat - Añade la cadena "fuente" al final de "destino", concatena. Devuelve la cadena destino.

strcmp - Compara alfabéticamente la cadena s1 con s2 y devuelve: 0 si s1 = s2 , < 0 si s1 < s2 , > 0 si s1 > s2

strcmpi - es la misma que la de la función strcmp () pero la única diferencia es que la función strcmpi () no
distingue entre mayúsculas y minúsculas y, por otro lado, la función strcmp () distingue entre mayúsculas y minúsculas.

strrev - Invierte la cadena dada

strlwr - Convierte la cadena en minúsculas

strupr - Convierte cadena a mayúscula
*/
int main(){
    char c1[TAM],c2[TAM],c3[TAM], c4[TAM];

    printf("Introduce un nombre (cadena 1): ");
    gets(c1);//Lee el conjunto de caracteres para nombrarlo c1

    printf("\nLongitud de cadena es (strlen): %d\n",strlen(c1));//Da la longitud de la cadena c1

    printf("\nAgrega tu nombre que no quieras(Cadena 2): ");
    gets(c2);//Lee el conjunto de caracteres para nombrarlo c2
    printf("Nombre original (Cadena 2 ahora es (strcpy)): %s\n",strcpy(c2,c1));//Copia lo que hay en la cadena 1 y lo pasa a la cadena 2

    printf("\nIntroduce un apellido(Cadena 3): ");
    gets(c3);//Lee el conjunto de caracteres para nombrarlo c3
    printf("Tu nombre completo es(Cadena 2 = Cadena 2 + Cadena 3 (strcat)): %s\n",strcat(c2,c3));//Junta la cadena 2 con la cadena 3 en la cadena 2

    printf("\n\nRevision con la base da datos, introduce un ejemplo(Cadena 4): ");
    gets(c4);//Lee el conjunto de caracteres para nombrarlo c4

    printf("\n(Comparacion Cadena 1 y cadena 4 segun su orden de alfabetizacion)\n\n");

    /*Comparara alfabeticamente la cadena 1 con la cadena 4, de acuerdo a su ordenación alfabética,
    distinguiendo las mayusculas y minusculas en donde las minusculas son mayores que las mayusculas
    strcmp(c1,c4,7) -> Es lo mismo pero se compararan los primeros 5 caracteres*/
    if ((strcmp(c2,c4))==0){//si c1 = c4
        printf("Ese nombre esta ocupado, cambia una minuscula a mayuscula o viceversa\n");
        printf("(La cadena 1 es igual que la cadena 4 (strcmp da %d))\n", strcmp(c2,c4));
    }
    else if((strcmp(c2,c4)>0)){//si c1 > c4
        printf("Puedes usar ese nombre\n");
        printf("(La cadena 1 es mayor que la cadena 4 (strcmp da %d))\n", strcmp(c2,c4));
    }
    else{//si c1 < c4
        printf("Puedes usar ese nombre\n");
        printf("(La cadena 1 es menor que la cadena 4 (strcmp da %d))\n", strcmp(c2,c4));
    }

    /*Comparara alfabeticamente la cadena 1 con la cadena 4, de acuerdo a su ordenación alfabética,
    sin distinguir las mayusculas y minusculas, A es lo mismo que a
    strcmpi(c1,c4,7) -> Es lo mismo pero se compararan los primeros 5 caracteres*/
    if ((strcmpi(c2,c4))==0){
        printf("\nEse nombre esta ocupado, cambia una letra\n");
        printf("(La cadena 1 es igual que la cadena 4 (strcmpi da %d))\n", strcmpi(c2,c4));
    }
    else if((strcmpi(c2,c4)>0)){
        printf("\nPuedes usar ese nombre\n");
        printf("(La cadena 1 es mayor que la cadena 4 (strcmpi da %d))\n", strcmpi(c2,c4));
    }
    else{
        printf("\nPuedes usar ese nombre\n");
        printf("(La cadena 1 es menor que la cadena 4 (strcmpi da %d))\n", strcmpi(c2,c4));
    }

    //Se escribira al reves las cadenas
    printf("\n\nNombre al reves:");
    printf("\nCadena 1 es (strrev): %s",strrev(c1));
    printf("\nCadena 2 es (strrev): %s",strrev(c2));
    printf("\nCadena 3 es (strrev): %s\n",strrev(c3));

    //Convertira toda la cadena en mayuscula
    printf("\nNombre al reves en mayusculas:");
    printf("\nCadena 1 es (strupr): %s",strupr(c1));
    printf("\nCadena 2 es (strupr): %s",strupr(c2));
    printf("\nCadena 3 es (strupr): %s\n",strupr(c3));

    //Se escribira al reves las cadenas
    printf("\nCorreccion:");
    printf("\nCadena 1 es (strrev): %s",strrev(c1));
    printf("\nCadena 2 es (strrev): %s",strrev(c2));
    printf("\nCadena 3 es (strrev): %s\n",strrev(c3));

    //Convertira toda la cadena en minuscula
    printf("\nNombre en minusculas:");
    printf("\nCadena 1 es (strlwr): %s",strlwr(c1));
    printf("\nCadena 2 es (strlwr): %s",strlwr(c2));
    printf("\nCadena 3 es (strlwr): %s\n",strlwr(c3));

}

