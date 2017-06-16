#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

	if(argc <= 1){
		printf("Cadê os argumentos ?\n");
		exit(1);
	}if(strcmp(argv[1], "help") == 0)
		printf("Este programa é capaz de:\n1 - Receber argumentos\n2 - Retornar erros =D\n");
	else{
		printf("%s você causou um erro no sistema!!!\n", argv[1]);
		exit(0);
	}
}
