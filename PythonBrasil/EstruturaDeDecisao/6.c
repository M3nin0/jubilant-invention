//Faça um Programa que leia três números e mostre o maior deles. 

#include <stdio.h>

int main(void){

    int n1,n2,n3;

    printf("Insira o primeiro número\n");
    scanf("%i", &n1);
    printf("Insira o segundo número\n");
    scanf("%i", &n2);
    printf("Insira o terceiro número\n");
    scanf("%i", &n3);

    if(n1 > n2 && n1 > n3)
        printf("O maior número é o %i\n", n1);
    else if(n2 > n1 && n2 > n3)
        printf("O maior número é o %i\n", n2);
    else if(n3 > n1 && n3 > n2)
        printf("O maior número é o %i\n", n3);


    return 0;
}
