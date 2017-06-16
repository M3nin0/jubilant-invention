/*
Faça um programa que leia um arquivo texto do disco, lendo linha a linha,
e exibindo cada uma das linhas numeradas na tela.
Pode ser lido um arquivo fonte – arquivo.c e mostre na tela com as linhas numeradas.
 Exemplo: - As primeiras linhas do arquivo iriam ser exibidas na tela da seguinte forma:
Sugestão: pesquisar a função fgets -> lê uma linha inteira de uma vez.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){

  int cont = 1;
  char texto[50];
  char url[] = "code.html";
  FILE *p;

  if(!(p = fopen(url, "r"))){
    printf("ERRO!\n");
    exit(1);
  }

  while(!feof(p)){
    fscanf(p, "%s", texto);
    printf("LINHA %i: %s\n",cont, texto);
    cont++;
  }

  return 0;
}
