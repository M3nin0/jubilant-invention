//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
//
#include <stdio.h>

int main(void){

    int n;

    printf("Insira um número: \n");
    scanf("%i", &n);

    if(n >= 0)
        printf("Valor positivo\n");
    else
        printf("Valor negativo\n");

    return 0;
}
