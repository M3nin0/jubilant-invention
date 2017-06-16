#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	if(argc <= 1){
		printf("Falta os parametros!\n");
		exit(1);
	}else{
		printf("Olá %s, como vai você ?\n", argv[1]);
		exit(0);
	}


	return 0;
}
