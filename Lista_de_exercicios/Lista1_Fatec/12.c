//Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

#include <stdio.h>

int main(void){

	int num,cont,result;

	printf("Insira um numero: \n");
	scanf("%i", &num);
	
	printf("Os numeros primarios sao: \n");

	cont = 0;
	result = 1;
	while(result <= num){

		if((cont % 2) == 1){
			printf("%i\n", cont);
			result++;	
		}
		cont++;	

	}


	return 0;
}

