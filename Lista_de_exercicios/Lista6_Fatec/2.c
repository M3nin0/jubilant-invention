/*
 2. Faça um programa que leia o arquivo TEXTO criado no exercício 1.
 Exibir na tela os dados lidos do respectivo arquivo, com um número em cada linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num;

	FILE *p;
	p = fopen("dados.txt", "r");

	if(p == NULL){
		printf("ERRO! NÂO FOI POSSÌVEL ABRIR O ARQUIVO\n");
		exit(1);
	}

	while(!feof(p)){
		fscanf(p,"%i", &num);
		printf("%i\n", num);
	}

	fclose(p);


	return 0;
}
