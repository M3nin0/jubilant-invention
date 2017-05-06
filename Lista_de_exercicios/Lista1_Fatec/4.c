/* Faca um programa que solicite o ano em que a pessoa nasceu e retorne sua idade */

#include <stdio.h>

int main(void){

	int ano, idade;

	printf("Insira o ano em que voce nasceu: \n");
	scanf("%i", &ano);

	idade = (2017 - ano);

	if (idade == 0){
		printf("Voce tem apenas meses de vida =)\n");
	}

	else if (idade == 1){
		printf("Voce tem 1 ano de idade\n");
	}
	else{
		printf("Voce tem %i anos de vida\n", idade);
	}

	return 0;	
}
