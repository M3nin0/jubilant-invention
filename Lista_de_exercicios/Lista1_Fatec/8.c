/* Calcule a tabuada de um numero fornecido pelo usuario*/

#include <stdio.h>

int main(void){

	int num,cont;
	
	printf("Insira um numero: \n");
	scanf("%i", &num);

	cont = 0;

	while (cont <= 10){
		printf("%i X %i == %i\n",num,cont,(num * cont));
		cont++;
	}


	return 0;
}
