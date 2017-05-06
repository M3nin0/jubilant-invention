//Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é par e 0 se n é impar

#include <stdio.h>

int verify(int a){

	if((a % 2) == 0){
		printf("1\n");
	}else{
		printf("0\n");
	}

}

int main(void){

	int a;

	printf("Insira um valor para verificacao: \n");
	scanf("%i",&a);

	while(a < 0){
		printf("Invalido!\nO valor deve ser positivo!\n");
		printf("Insira novamente o valor: \n");
		scanf("%i",&a);
	}

	verify(a);

	return 0;
}