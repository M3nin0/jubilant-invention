//Dados três números, imprimi-los em ordem crescente.

#include <stdio.h>

int main(void){

	int num1,num2,num3;

	printf("Insira o primeiro numero: \n");
	scanf("%i", &num1);
	printf("Insira o segundo numero: \n");
	scanf("%i",&num2);
	printf("Insira o terceiro numero: \n");
	scanf("%i",&num3);

	if(num1 < num2 && num1 < num3){
		printf("%i\n",num1);
		if(num2 < num3){
			printf("%i\n",num2);
			printf("%i\n",num3);
		}else{
			printf("%i\n",num3);
			printf("%i\n",num2);
		}
	}else if(num2 < num1 && num2 < num3){
		printf("%i\n",num2);
		if(num1 < num3){
			printf("%i\n",num1);
			printf("%i\n",num3);
		}else{
			printf("%i\n",num3);
			printf("%i\n",num1);

		}
	}else if(num3 < num1 && num3 < num2){
		printf("%i\n",num3);
		if(num2 < num1){
			printf("%i\n",num2);
			printf("%i\n",num1);
		}else{
			printf("%i\n",num1);
			printf("%i\n",num2);
		}
	
	}

	return 0;
}
