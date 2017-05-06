//Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char letra[2];

    printf("Insira seu sexo:\nF - Feminino\nM - Masculino\n");
    fgets(letra, sizeof(letra), stdin);

    if(strcmp(letra,"F") == 0)
        printf("Seu sexo é Feminino\n");
    else
        printf("Seu sexo é Masculino\n");

    return 0;
}
