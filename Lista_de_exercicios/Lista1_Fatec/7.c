/* Calcule o fatorial de um numero fornecido */

#include <stdio.h>

int main(void){

	int num, fat, cont;
	fat = 1;

	printf("Insira um numero: \n");
	scanf("%i", &num);

	for(cont = num;cont > 1; cont--){
		fat *= cont;
	}

	printf("O fatorial de %i e %i\n", num, fat);

	return 0;
}
