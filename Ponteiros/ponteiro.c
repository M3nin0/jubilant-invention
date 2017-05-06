//Ponteiro
//& --> address
//* --> Dereferencia, (valor)

#include <stdio.h>

int main(void){

	int var = 2;
	int *ponteiro = &var;	

	printf("Endereco = %i\n", ponteiro);
	printf("Valor = %i\n", *ponteiro);

	return 0;
}