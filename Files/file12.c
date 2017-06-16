/*
Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o nome, nota1, nota2.
Calcule a média aritmética simples dos 10 alunos e depois escreva em um arquivo texto os dados de
cada aluno: nome, nota1, nota2 e média. Lembre-se de que as notas e
média deverão ser apresentadas como valores que possuem até 2 casas após a vírgula.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define CADASTRADOS 10

typedef struct student{
  char nome[15];
  int nota1, nota2;
  float media;
}ALUNO;

void cadastro(){

  FILE *p;
  char url[] = "cadastros.txt";
  ALUNO aluno;

  if(!(p = fopen(url, "w"))){
    printf("ERRO!");
    exit(1);
  }

  fprintf(p, "%i\n",CADASTRADOS);

  for(int i = 1; i <= 10; i++){
    printf("ALUNO %i\n",i);
    printf("Insira o nome do aluno: ");
    fgets(aluno.nome,sizeof(aluno.nome),stdin);
    fflush(stdin);
    printf("Insira sua primeira nota: ");
    scanf("%i", &aluno.nota1);
    printf("Insira sua segunda nota: ");
    scanf("%i", &aluno.nota2);

    aluno.media = (float) (aluno.nota1 + aluno.nota2) / 2;

    fprintf(p, "%s",aluno.nome);
    fprintf(p, "%i\n",aluno.nota1);
    fprintf(p, "%i\n",aluno.nota2);
    fprintf(p, "%.2f\n", aluno.media);
    getchar();

  }

  fclose(p);

}

int main(void){

  cadastro();

  return 0;
}
