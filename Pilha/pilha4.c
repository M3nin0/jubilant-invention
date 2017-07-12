//Implementando os modos pop, push e visão geral de uma pilha

#include <stdio.h>

int *p;
int *topo;
int *fim;


void menu(){

	int choose, value;

	p = (int *) malloc(1000);
	fim = p + 1000 - 1;

	printf("O que deseja fazer ?\n");
	printf("1 - Push\n");
	printf("2 - Pop\n");
	printf("3 - Imprimir\n");
	scanf("%d", &value);

	switch(value){
		case 1:
			printf("Obrigado pela dica, se ainda estiver de pé estou on-line\n");
			scanf("%d", &choose);
			break;
		case 2:
			pop();
			break;
		case 3:
			imprimir()
	}


}

void push(int value){


}

void pop(){


}

void imprimir(){

}

int main(void){





	return 0;
}