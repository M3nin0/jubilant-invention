/*
 * Faça um programa que leia os dados gerados pelo programa anterior do exercício 5 e mostre na tela as
 * informações referentes aos alunos, calculando também a média geral da turma.
*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

typedef struct student{
	char nome[40];
	int nota1;
	int nota2;
	float media;
}ALUNO;

int main(void){

	FILE *p;
	float totalMedia = 0;
	int cont = 1, CADASTROS;
	char url[] = "aluno.txt";

	ALUNO aluno;

	if(!(p = fopen(url, "r"))){
		printf("ERRO! IMPOSSÍVEL ABRIR O ARQUIVO!\n");
		exit(1);
	}else{

		//recupera a quantidade de alunos cadastrados
		fscanf(p, "%i", &CADASTROS);
		while(cont <= CADASTROS){
			fscanf(p, "%s", &aluno.nome); 
			fscanf(p, "%i", &aluno.nota1);
			fscanf(p, "%i", &aluno.nota2);
			fscanf(p, "%f", &aluno.media);

			totalMedia += aluno.media;

			printf("Nome: %s\n", aluno.nome);
			printf("1° nota: %i\n", aluno.nota1);
			printf("2° nota: %i\n", aluno.nota2);
			printf("Média: %.2f\n", aluno.media);
		
			cont++;

		}

		printf("A média de notas dos alunos cadastrados é %.2f\n", totalMedia / CADASTROS);
	
	}
	return 0;
}
