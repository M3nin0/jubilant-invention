/*
Faça 3 funções:
ler: - uma função que receba dois número inteiro positivo n;
multiplicar: - que multiplique os números recebidos na função ler;
imprimir: - que imprima o resultado da função multiplicar.
*/

#include <stdio.h>


int print(int c){
	printf("A multiplicacao e' igual a %i\n",c);

}

int mult(int a, int b){
	int c = a * b;

	print(c);

}


int ler(){
	int a,b;

	do{
	printf("Insira o primeiro valor: \n");
	scanf("%i",&a);
	printf("Insira o segundo valor: \n");
	scanf("%i", &b);
	}while(a < 0 || b < 0);

	mult(a,b);

}

int main(void){

	ler();

	return 0;
}