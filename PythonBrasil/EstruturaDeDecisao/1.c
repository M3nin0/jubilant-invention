//Faça um Programa que peça dois números e imprima o maior deles.


#include <stdio.h>

int main(void){

    int n1,n2;

    printf("Insira o primeiro número: \n");
    scanf("%i", &n1);
    printf("Insira o segundo número: \n");
    scanf("%i", &n2);

    if(n1 > n2)
        printf("O maior número é %i\n", n1);
    else
        printf("O maior número é %i\n", n2);


    return 0;
}
