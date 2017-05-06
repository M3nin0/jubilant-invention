//Utilizando método comum para adicionar elementos ao Struct


#include <stdio.h>
#include <string.h>

int main(void){

    struct meu_carro{

        char marca[20];
        char modelo[20];
        int ano;
    }carro;

    strcpy(carro.marca, "Ford");
    strcpy(carro.modelo,"Camaro");
    carro.ano = 2017;

    printf("Qual seu carro ?\n");
    printf("Marca: %s\n", carro.marca);
    printf("Modelo: %s\n", carro.modelo);
    printf("Ano:  %i\n",carro.ano);


    return 0;
}
