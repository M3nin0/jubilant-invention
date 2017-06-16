#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[]){

	char resp[20];

	if(argc <= 1){
		printf("Falta argumentos!\n");
		exit(1);
	}else{
		printf("Olá %s como vai você ?\n", argv[1]);
		fgets(resp, sizeof(resp), stdin);

		if(strcmp(resp, "bem\n") == 0){
			printf("Então sua nota de %s foi legal =D\n", argv[2]);
			exit(0);
		}else{
			printf("Vejo que teve problemas =(\n");
			printf("Mas não se preocupe, isso passa\n");
			exit(0);
		}
	}


	
}
