//Faça uma função que receba, por parâmetro, um valor inteiro e positivo e retorna o número de 
//divisores desse valor.

#include <stdio.h>

int div(int num){
	int cont = 1;
	int divs = 0;

	while(cont <= num){
		if((num % cont) == 0){
			divs++;
		}
	cont++;
	}

	printf("%i tem %i divisores\n",num,divs);
}

int main(void){

	int a;

	do{
	printf("Insira um valor: \n");
	scanf("%i", &a);
	}while(a < 0);

	div(a);

	return 0;
}