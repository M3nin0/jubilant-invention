/*
Inicialize um vetor de 10 posições e em seguida leia um valor X qualquer. 
Seu programa devera fazer uma busca do valor de X no vetor lido e 
informar a posição em que foi encontrado ou se não foi encontrado.
Exemplo: int vetor[10] = {2,5,4,54,43,22,5,9,30,15};
*/

#include <stdio.h>
#include <stdlib.h>

int buscaValor(int value){

	int array[10] = {2,5,4,54,43,22,5,9,30,15};

	printf("O vetor utilizado foi: array[10] = {2,5,4,54,43,22,5,9,30,15}\n");

	for (int i = 0; i <= 10; ++i){
		if(value == array[i]){
			printf("Valor encontrado na posicao [%i]\n", i);
			exit(0);
		}	
	}
	return 1;
}

int main(void){

	int value;

	printf("Insira um valor\n");
	scanf("%i", &value);

	if(buscaValor(value) == 1)
		printf("Valor nao encontrado\n"); 

	return 0;
}