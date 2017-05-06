//Faça um Programa que leia três números e mostre o maior e o menor deles.


#include <stdio.h>

int main (void){

    int n1,n2,n3, maior, menor;

    printf("Insira o primeiro número\n");
    scanf("%i", &n1);
    printf("Insira o segundo número\n");
    scanf("%i", &n2);
    printf("Insira o terceiro número\n");
    scanf("%i", &n3);

    //Maior
    if(n1 > n2 && n1 > n3)
        maior = n1;
    else if(n2 > n1 && n2 > n3)
        maior = n2;
    else if(n3 > n1 && n3 > n2)
        maior = n3;

    //Menor
    if(n1 < n2 && n1 < n3)
        menor = n1;
    else if(n2 < n1 && n2 < n3)
        menor = n2;
    else if(n3 < n1 && n3 < n2)
        menor = n3;

    printf("O maior número é %i e o menor é %i\n", maior, menor);

    return 0;
}
