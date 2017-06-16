#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE *file;
	file = fopen("string.txt", "a");

	if(file == NULL){
		printf("NÃO FOI POSSÍVEL CARREGAR O ARQUIVO!\n");
		exit(1);
	}
	else{
		//fprintf(PONTEIRO_DO_ARQUIVO, "CONTEUDO");
		fprintf(file,"OPA! OUTRA LINHA =D\n");
		exit(0);
	}

	return 0;
}
