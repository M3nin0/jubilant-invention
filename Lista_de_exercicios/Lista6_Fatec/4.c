/*
Faça um programa que imite um editor de textos. Inicialmente você irá ler os dados digitados pelo
usuário (linhas de texto) e criar um vetor em memória onde serão armazenados os textos fornecidos
pelo usuário (texto de 1 até no máximo 50 linhas). O usuário vai escrever o seu texto, 
terminando por
uma linha onde ele irá escrever apenas a palavra ‘FIM’, o que determina que ele não deseja mais
digitar linhas de texto. Sendo assim, o texto final pode ter um número variável de linhas, 
entre 1 e 50.
Salvar o conteúdo armazenado na memória neste vetor, em um arquivo texto em disco. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char url[] = "notepad.txt";
	char texto[250];
	int cont = 0; 

	FILE *arquivo;

	if((arquivo = fopen(url, "w")) == NULL){
		printf("NÂO FOI POSSÍVEL ABRIR O ARQUIVO\n");
		exit(1);
	}
	
	while(cont <= 50 && (strcmp(texto, "fim\n")) != 0){
		fgets(texto, sizeof(texto), stdin);

		if((strcmp(texto,"fim\n") != 0))
			fprintf(arquivo, "%s", texto);
		
		cont++;
	}

	return 0;
}