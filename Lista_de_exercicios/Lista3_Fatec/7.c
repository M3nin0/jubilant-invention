/*
Leia um vetor de 10 posições e elimine as posições com valor zero avançando uma posição, 
com os valores subsequentes do vetor. Dessa forma todos “zeros” devem ficar para as posições 
finais do vetor.
*/

#include <stdio.h>


int main(void){

	int vet[10], value, zero = 9, outro = 0;

	for(int ge = 0; ge < 10; ++ge){

		printf("Insira um valor: \n");
		scanf("%i", &value);

		if(value == 0){
			vet[zero] = value;
			--zero;
		}
		else{
			vet[outro] = value;
			++outro;
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%i",vet[i]);
	}

	return 0;
}