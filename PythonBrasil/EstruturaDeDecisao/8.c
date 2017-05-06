//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.


#include <stdio.h>

int main (void){

    int n1,n2,n3, menor;

    printf("Insira o valor do primeiro produto\n");
    scanf("%i", &n1);
    printf("Insira o valor do segundo produto\n");
    scanf("%i", &n2);
    printf("Insira o valor do terceiro produto\n");
    scanf("%i", &n3);


    if(n1 < n2 && n1 < n3)
        menor = n1;
    else if(n2 < n1 && n2 < n3)
        menor = n2;
    else if(n3 < n1 && n3 < n2)
        menor = n3;

    printf("Voce deve comprar o produto de valor %i\n", menor);

    return 0;
}
