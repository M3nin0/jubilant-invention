/* Faça um programa que solicite um número (inteiro/positivo) e imprima-o */

#include <stdio.h>

int main(void){

	int num;

	printf("Insira um numero: \n");
	scanf("%i", &num);
	
	while (num < 0){
		printf("Insira um numero positivo!!!\n");
		scanf("%i", &num);
	}

	printf("O numero inserido foi: %i\n", num);

	return 0;
}
