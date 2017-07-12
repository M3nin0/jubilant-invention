#include <stdio.h>
#include <stdlib.h>

int main(void){

	int a[] = { 2017, 2020, 2023};

	for(int i = 0; i < 3;i ++){
		printf("%d\n", *a + i);	
	}

	printf("O endereço do array na memória é %p\n", a);

	return 0;
}
