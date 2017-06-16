#include <stdio.h>
#include <stdlib.h>

int main(void){

	int x,y,z;

	FILE *file;

	file = fopen("numero.txt","r");
	
	if(file == NULL){
		printf("Arquivo não pode ser aberto!\n");
		exit(1);
	}


	fscanf(file, "%i %i %i", &x, &y, &z);

	printf("Numero 1 = %i\nNumero 2 = %i\nNumero 3 = %i\n", x,y,z);
	
	fclose(file);

	return 0;
}
