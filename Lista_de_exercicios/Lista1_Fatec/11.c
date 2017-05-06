//Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.

#include <stdio.h>

int main(void){
	
	int num,total,cont;
	
	printf("Insira um numero: \n");
	scanf("%i", &num);

	for(cont = 0;cont<=num;cont++){
		total += cont;
	}
	printf("A soma dos %i primeiros numeros narutais e' %i\n",num,total);

	return 0; 
}
