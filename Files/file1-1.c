#include <stdio.h>

int main(void){

	FILE *file;

	file = fopen("arquivo.txt", "a");

	fprintf(file, "Luiz\n");

	fclose(file);

	return 0;
}
