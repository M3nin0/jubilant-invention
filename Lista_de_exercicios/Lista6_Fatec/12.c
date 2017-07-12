#include <stdio.h>
#include <stdlib.h>

int vetor[10];
int topo = 0;

// Dominio um elemento na pilha
void push(int i){

	printf("TOPO %d\n",topo);

	if(topo >= 10){
		printf("Pilha Cheia\n");
	}
	vetor[topo] = i;
	topo++;
}

//Recupera elemento do topo da pilha
int pop(){

	printf("TOPO %d\n",topo);

	topo--;
	if(topo < 0){
		printf("Pilha vazia\n");
		return 0;
	}
	return vetor[topo];
	
}

void imprimir(){

	int i;
	printf("Pilha: \n");
	for(i = topo - 1; i >= 0; i--){
		printf("%d \n",vetor[i]);
	}
}

void main(){

	int choose, value;

	printf("TOPO %d\n",topo);

	while(1){

		printf("1 - POP\n");
		printf("2 - PUSH\n");
		printf("3 - IMPRIMIR\n");
		scanf("%i", &choose);

		switch(choose){
			case 1:
				pop();
				break;
			case 2:
				printf("Insira o valor a ser inserido na pilha\n");
				scanf("%i", &value);
				push(value);
				break;
			case 3:
				imprimir();
				break;
			default:
				printf("ERRO!\n");
				exit(1);
		}

	}

}