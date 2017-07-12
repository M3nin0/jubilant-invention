//Alocação dinâmica

#include <stdio.h>
#include <stdlib.h>

void *malloc_s(size_t size){
	void *p;
	p = malloc(size);
	if(p == NULL){
		fprintf(stderr, "Memória insuficiente\n");
		exit(1);
	}

	return p;
}

int main(int argc, char *argv[]){

	int *p;

	p = malloc_s(sizeof(int));

	*p = 9;

	printf("%d\n", *p);

	free(p);

	return 0;
}
