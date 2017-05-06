//Faça um Programa que leia três números e mostre-os em ordem decrescente.

#include <stdio.h>

int main(void){

    int n1,n2,n3;

    printf("Insira o valor do primeiro número\n");
    scanf("%i", &n1);
    printf("Insira o valor do segundo número\n");
    scanf("%i", &n2);
    printf("Insira o valor do terceiro número\n");
    scanf("%i", &n3);

    if(n1 > n2 && n1 > n3)
        if(n2 > n3)
            printf("%i %i %i\n",n1,n2,n3);
        else
            printf("%i %i %i\n", n1,n3,n2);

    else if(n2 > n1 && n2 > n3)
        if(n1 > n3)
            printf("%i %i %i\n", n2,n1,n3);
        else
            printf("%i %i %i\n", n2, n3, n1);

    else if(n3 > n1 && n3 > n2)
        if(n2 > n1)
            printf("%i %i %i\n",n3,n2,n1);
        else
            printf("%i %i %i\n", n3, n1,n2);


    return 0;
}
