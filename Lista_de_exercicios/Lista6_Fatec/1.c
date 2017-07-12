/*
 *
 1. Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt”, 
 e escreva neste arquivo em disco uma sequência de números de 1 até 100, com um número em cada linha. 
 Abra este arquivo em um editor de textos, como por exemplo o Bloco de Notas. *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE *p;
	p = fopen("dados.txt", "a");

	if(p == NULL){
		printf("ERRO! NÂO FOI POSSÍVEL ABRIR O ARQUIVO\n");
		exit(1);
	}
	
	for(size_t i = 0; i <= 100; i++){
		fprintf(p,"%i\n", i);
	}

	fclose(p);

	return 0;
}
