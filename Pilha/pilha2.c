//Alocando e testando espaço alocado
#include <stdio.h>
#include <stdlib.h>

int main(void){

	char *p;
	p = malloc(1000);


	if(p == NULL){
		printf("Sem memória\n");
		exit(1);
	}

	free(p);

	return 0;
}