/*
 Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o nome, nota1, nota2.
 Calcule a média aritmética simples dos 10 alunos e depois escreva em um arquivo texto os dados de
 cada aluno: nome, nota1, nota2 e média.
 Lembre-se de que as notas e média deverão ser apresentadas como valores que possuem até 2 casas após a vírgula.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//Altere para definir a quantidade de alunos que serão cadastrados
#define CADASTRADOS 2

typedef struct student{
	char nome[20];
	int nota1, nota2;
	float media;
}ALUNO;


int main(void){

	FILE *file;
	file = fopen("aluno.txt", "a");

	ALUNO aluno;

	if(file == NULL){
		printf("NÃO FOI POSSÌVEL ABRIR O ARQUIVO!\n");
		exit(1);	
	}

	//Enviando quantidade de alunos cadastrados
	fprintf(file, "%i\n", CADASTRADOS);
	for(size_t i = 1; i <= CADASTRADOS; i++){
		printf("Insira o nome do aluno: \n");
		fgets(aluno.nome, sizeof(aluno.nome), stdin);
		fflush(stdin);

		printf("Insira a primeira nota: \n");
		scanf("%i", &aluno.nota1);
		printf("Insira a segunda nota: \n");
		scanf("%i", &aluno.nota2);
				
		aluno.media = (float) (aluno.nota1 + aluno.nota2) / 2;

		fprintf(file, "%s", aluno.nome);
		fprintf(file, "%i\n", aluno.nota1);
		fprintf(file, "%i\n", aluno.nota2);
		fprintf(file, "%.2f\n", aluno.media);

		getchar();
	}

	fclose(file);

	return 0;
}
