/* Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores, ao final deverá ser exibido o resultado da operação. 
 
 * Opções disponíveis: 
 * 1 – Divisão; 
 * 2 – resto da divisão; 
 * 3 – adição; 
 * 4 – multiplicação. */

#include <stdio.h>
#include <stdlib.h>

int num1, num2;

void divs(int a,int b){
	printf("Voce escolheu: Divisao\n");
	printf("O resultado e' %i\n\n", (a / b));
}

void rest(int a, int b){
	printf("Voce escolheu: Resto da divisao\n");
	printf("O resultado e' %i\n\n", (a % b));
}

void adic(int a, int b){
	printf("Voce escolheu: Adicao\n");
	printf("O resultado e' %i\n\n", (a + b));
}

void mult(int a,int b){
	printf("Voce escolheu: Multiplicacao\n");
	printf("O resultado e' %i\n\n", (a * b));
}

int main(void){

	int op;

	do{
	
		printf("Escolha uma das opcoes: \n");
		printf("1 - Divisao\n2 - Resto da divisao\n3 - Adicao\n4 - Multiplicacao\n5 - Sair\n");
		scanf("%i", &op);
		if (op == 5){
			printf("Ate' mais\n");
			exit(0);
		}
		printf("Insira o primeiro numero: \n");
		scanf("%i", &num1);
		printf("Insira o segundo numero: \n");
		scanf("%i", &num2);

		switch(op){
			case 1:
				divs(num1,num2);
				continue;
			case 2:
				rest(num1,num2);
				continue;

			case 3:
				adic(num1,num2);
				continue;

			case 4:
				mult(num1,num2);
				continue;
			default:
				printf("Opcao invalida!!!\n");
				continue;
		}
	
	
	}while(1);



	return 0; 
}
