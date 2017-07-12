/*
Faça um programa que peça para o usuário entrar um texto que deseja procurar (uma palavra) e que em
seguida leia um arquivo texto do disco e procure por esta palavra no arquivo. 
Caso seja encontrada a
palavra digitada pelo usuário em alguma das linhas do arquivo texto lido do disco, o programa deverá
exibir na tela o número da linha do arquivo onde encontrou esta ocorrência da palavra,
bem como o
conteúdo da linha onde se encontra a palavra procurada. 
Dica: use o comando “strstr” para procurar a palavra.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

	FILE *p;
	char *search;
	char palavra[30];
	char linha[100];

	int cont = 1;

	p = fopen("texto2.txt", "r");

	printf("Insira a palavra que você deseja buscar no texto da Alice\n");
	fgets(palavra, sizeof(palavra), stdin);

	palavra[strlen(palavra)-1] = '\0';

	while(!(feof(p))){
		fscanf(p, "%s\n", linha);

		search = strstr(linha, palavra);
		
		if(search){
			printf("A palavra estava na linha %i\n", cont);
			printf("A palavra procurada foi encontrada na seguinte parte do texto: \n");
			printf("%s\n", search);
		}
		cont++;
		 
	}

	return 0;
}