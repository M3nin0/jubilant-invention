/*
 Faça um programa que leia um arquivo texto do disco, lendo linha a linha, e exibindo cada uma das
 linhas numeradas na tela. Pode ser lido um arquivo fonte – arquivo.c e mostre na tela com as linhas numeradas. 
 Exemplo: - As primeiras linhas do arquivo iriam ser exibidas na tela da seguinte forma:
 Sugestão: pesquisar a função fgets -> lê uma linha inteira de uma vez.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	char linha[100];
	int nums = 0;
	
	FILE *file;
	file = fopen("pagina.html", "r");

	if(file == NULL){
		printf("ERRO!\n");
		exit(1);	
	}

	while(!feof(file)){
		fscanf(file,"%s" , linha);
		printf("LINHA %i: %s\n",nums,linha);
		nums++;
	}	

	fclose(file);

	return 0;
}
