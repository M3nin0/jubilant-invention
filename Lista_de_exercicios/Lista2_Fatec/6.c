//Escreva uma função recursiva que receba, por parâmetro, 
//dois valores X e Z e calcula e retorna X**Z. (sem utilizar funções prontas)

#include <stdio.h>

int eleva(int x,int z){

    if(z > 1){
        return eleva(x,z-1) * x;
    }
}


int main(void){
	int x,z;

	printf("Insira o valor de x:\n");
	scanf("%i",&x);
	printf("Insira o valor de z:\n");
	scanf("%i",&z);

	printf("%i\n",eleva(x,z));

	return 0;
}