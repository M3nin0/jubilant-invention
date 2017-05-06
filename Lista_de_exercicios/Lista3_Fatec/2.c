/*
Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e versa.
Escreva ao final o vetor obtido.
*/

#include <stdio.h>

int trocaVetor(int array[]){

	int final = 8;
	int init = 0;
	int var;

	for (int i = 0; i <= 4; ++i)
	{
		var = array[init];
		array[init] = array[final];
		array[final] = var;
		final -= 1;
		init += 1;
	}

	for (int i = 4; i > 0; --i)
	{
		printf("%i ",array[i]);
	}

	for (int e = 8; e >= 5; --e)
	{
		printf("%i ", array[e]);
	}

}


int main(void){

	int array[8];
	int value;

	for (int i = 0; i < 8; ++i)
	{
		printf("Insira um valor\n");
		scanf("%i", &value);
		array[i] = value;
	}

	trocaVetor(array);


	return 0;
}