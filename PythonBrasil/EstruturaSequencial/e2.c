//Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].

#include <stdio.h>

int main(void){

    int var;

    printf("Insira um numero: \n");
    scanf("%i",&var);

    printf("O numero informado foi %i\n",var);

    return 0;
}
