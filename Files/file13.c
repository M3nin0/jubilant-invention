/*
Faça um programa que leia os dados gerados pelo programa anterior do exercício 5
e mostre na tela as
informações referentes aos alunos, calculando também a média geral da turma.
*/

#include <stdio.h>
#include <stdlib.h>

#define true 1

typedef struct aluno{
  char nome[15];
  int nota1;
  int nota2;
  float media;
}ALUNO;

void mostraCadastros(){

  FILE *p;
  float totalMedia = 0;
  int cont = 1, cadastros;
  char url[] = "cadastros.txt";

  ALUNO aluno;

  if(!(p = fopen(url, "r"))){
    printf("ERROR!\n");
    exit(1);
  }else{

      fscanf(p, "%i", &cadastros);
    while(!(feof(p))){
      fscanf(p, "%s", aluno.nome);
      fscanf(p,"%i", &aluno.nota1);
      fscanf(p, "%i", &aluno.nota2);
      fscanf(p, "%f", &aluno.media);

      totalMedia += aluno.media;

      printf("ALUNO %i\n",cont);
      printf("Nome: %s\n", aluno.nome);
      printf("Nota 1: %i\n",aluno.nota1);
      printf("Nota 2: %i\n",aluno.nota2);
      printf("Média: %.2f\n",aluno.media);

      cont++;
      
      if(cont > cadastros)
        break;
    }

    fclose(p);

    printf("A média da sala foi: %.2f\n", totalMedia / cont);

  }
}

int main(void){

  mostraCadastros();

  return 0;
}
