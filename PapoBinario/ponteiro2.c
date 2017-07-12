#include <stdio.h>

int main(void){

	int i = 2017;
	int *p;

	p = &i;
	
	printf("O endereço da variavel p em memória é %p\n", p);
	printf("O endereço da variavel i em memória é %p\n", &i);
	printf("O valor de i é %d\n", i);
	printf("O conteúdo de p é %d\n", *p);

	return 0;
}
