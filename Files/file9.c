/*
2. Faça um programa que leia o arquivo TEXTO criado no exercício 1.
 Exibir na tela os dados lidos do respectivo arquivo, com um número em cada linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){


  int num = 0;
  char url[] = "file8.txt";
  FILE *p;

  if(!(p = fopen(url, "r"))){
    printf("ERRO\n");
    exit(1);
  }

  while(!feof(p)){
    fscanf(p, "%i", &num);
    printf("%i\n", num);
  }


  fclose(p);
  return 0;
}
