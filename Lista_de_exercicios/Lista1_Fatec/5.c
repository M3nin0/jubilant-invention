/* Dado um numero inteiro positivo N, verificar se e' par ou impar*/

#include <stdio.h>

int main(void){

	int num;

	printf("Insira um numero: \n");
	scanf("%i", &num);

	if ((num % 2) == 0){
		printf("O numero e' par\n");
	}
	else{
		printf("O numero e' impar\n");
	}


	return 0;
}
