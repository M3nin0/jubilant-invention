//Ponteiros com Struct

//Refs
//https://www.ime.usp.br/~mms/mac1222s2013/9%20-%20structs%20e%20ponteiros.pdf
//http://www.univasf.edu.br/~criston.souza/algoritmos/arquivos/aula14.pdf


#include <stdio.h>
#include <string.h>

//Definindo struct global

typedef struct{

    char nome[100];
    int idade;
}pessoa;


int main(void){

    pessoa joao;
    pessoa *p = &joao;

    strcpy(joao.nome, "Joao da Silva Sauro");
    joao.idade = 20;
    printf("%s, %d\n", p->nome, p->idade);

    p->idade = 18;

    printf("%s, %d\n", joao.nome, joao.idade);

    return 0;
}
