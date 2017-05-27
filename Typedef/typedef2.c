//Typedef com Struct

#include <stdio.h>
#include <string.h>

int main(void){

  struct pessoa{
    char nome[20];
    int idade;
    float peso;
    float altura;
  };

  //pessoa passa a ser individuo
  typedef struct pessoa individuo;

  individuo menino;

  strcpy(menino.nome,"This");
  menino.idade = 23;

  printf("Nome: %s\nIdade: %i\n",menino.nome, menino.idade);

  return 0;
}
