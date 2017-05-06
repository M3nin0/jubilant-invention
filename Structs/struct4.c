//Copia de struct

#include <stdio.h>
#include <string.h>

int main(void){

    struct endereco{

        char rua[50];
        char bairro[20];
        int numero;
    };

    struct ficha{

        char nome[20];
        int idade;
        struct endereco local;
    }cadastro1 = {
        "Felipe", 20, "Avenida Brasil", "Rio de Janeiro", 21
    };

    struct ficha cadastro2;

    cadastro2 = cadastro1;

    printf("Nome: %s\n", cadastro2.nome);
    printf("Idade: %i\n", cadastro2.idade);
    printf("Rua: %s\n", cadastro2.local.rua);
    printf("Bairro: %s\n", cadastro2.local.bairro);
    printf("Numero: %i\n", cadastro2.local.numero);

    return 0;
}
