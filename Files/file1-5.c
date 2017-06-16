#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE *p;
	p = fopen("string.txt", "a");

	if(p == NULL){
		printf("ERRO AO CARREGAR O ARQUIVO!\n");
		exit(1);
	}
	
	char nome[20] = "LOL DA INGLATERRA";

	for(size_t i = 0; i < 20; i++){
		fprintf(p,"%c", nome[i]); 
	};

	return 0;
}
