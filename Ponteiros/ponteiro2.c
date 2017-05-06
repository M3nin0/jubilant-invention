#include <stdio.h>
//size_t = Mais rapido, mais seguro;


int main(void){

	int *array[10];	

	for(int i = 0; i < 10; i++){
		array[i] = NULL;
	}
	for(int i = 0; i < 10; i++){
		printf("%i\n", array[i]);	
	}


	return 0;
}