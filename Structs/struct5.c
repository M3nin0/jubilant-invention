//Sistema de cadastro simples com struct

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){

    struct cadastro{
        char bairro[30];
        char rua[30];
        int numero;
    };
    struct ficha{
        char nome[20];
        char sobrenome[20];
        int idade;
        char dia_aniver[30];
        struct cadastro local;
    };

    struct ficha funcs [1];


    for(size_t i = 0; i < 1; i++){
        printf("Insira seu nome: \n");
        fgets(funcs[i].nome, sizeof(funcs[i].nome), stdin);

        printf("Insira seu sobrenome: \n");
        fgets(funcs[i].sobrenome, sizeof(funcs[i].sobrenome), stdin);

        printf("Insira o dia de seu aniversário: \n");
        fgets(funcs[i].dia_aniver, sizeof(funcs[i].dia_aniver), stdin);

        printf("Insira sua idade: \n");
        scanf("%i", &funcs[i].idade);

        printf("Insira o nome de seu bairro: \n");
        fgets(funcs[i].local.bairro, sizeof(funcs[i].local.bairro), stdin);
    }

    printf("Suas informações são: \n");
    for(size_t i = 0; i < 1; i++){

        printf("Nome: %s", funcs[i].nome);
        printf("Sobrenome: %s", funcs[i].sobrenome);
        printf("Idade: %i\n", funcs[i].idade);
        printf("Data de aniversário: %s", funcs[i].dia_aniver);
        printf("Bairro: %s\n", funcs[i].local.bairro);
    }

    return 0;
}
