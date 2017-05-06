//Dados um inteiro x e um inteiro não-negativo n, calcular x n.

#include <stdio.h>
#include <math.h>

int main(void){

	int a,b;
	int  total;
	
	printf("Digite um numero inteiro: \n");
	scanf("%i",&a);
	printf("Digite um numero inteiro nao-negativo: \n");
	scanf("%i",&b);

	total = pow(a,b);

	printf("O valor de %i elevado por %i e': %i\n",a,b,total);
	
	return 0;
}
