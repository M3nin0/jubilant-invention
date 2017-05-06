/* Dada uma sequência de números inteiros não-nulos, começando por 1,imprimir seus quadrados. */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num;

	do{
	
	printf("Insira uma sequencia de numeros\nCaso deseje sair digite 0\n:");
	scanf("%i", &num);

	if(num == 0){
		printf("Tchau!!!\n");
		exit(0);
	}
	printf("O quadrado de %i e' %i\n\n", num, (num * num));
	
	}while (1);


	return 0;
}
