//Aula 2 - Função scanf
//Case sensitive == Linguagem C

#include <stdio.h>

int main(void){

    //Case sensitive
    //var != VAR

    int numero;

    printf("Insira um número\n");
    scanf("%i" ,&numero);

    printf("O número inserido foi %i\n", numero);

    return 0;

}
