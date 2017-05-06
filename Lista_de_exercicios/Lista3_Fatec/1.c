//Dada uma sequência de n números, imprimi-la na ordem inversa a da leitura.

#include <stdio.h>
int main(void){
	int seq, cont;
	cont = 0;

	printf("Insira a quantidade de numeros na sequencia\n");
	scanf("%i", &seq);

	int array[seq];

	while(cont < seq){
		printf("Insira um numero\n");
		scanf("%i", &array[cont]);
		cont++;
	}

	printf("Os numeros inseridos foram\n");
	for (int i = seq - 1; i >= 0; --i)
	{
		printf("%i ", array[i]);
	}
	return 0;
}