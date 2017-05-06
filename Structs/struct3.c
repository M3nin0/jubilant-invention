//Struct dentro de outra

#include <stdio.h>

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
    }ficha = {
        "Felipe", 20, "Avenida Brasil", "Rio de Janeiro", 20
    };

    printf("Nome: %s\nIdade: %i\nRua: %s\nBairro: %s\nNumero: %i\n", ficha.nome, ficha.idade, ficha.local.rua, ficha.local.bairro, ficha.local.numero);

    return 0;
}
