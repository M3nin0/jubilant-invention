#include <stdio.h>
#include <stdlib.h>

int *p; /*apontará para uma região de memória livre*/
int *topo; /*apontará para o/ topo da pilha*/
int *fim; /*apontará para o final da pilha*
/*Inseri um elemento na pilha.*/

void menu(){

	int choose, value;

	printf("Escolha o que deseja fazer: ");

	printf("1 - Push\n");
	printf("2 - Pop\n");
	printf("3 - Imprime\n");
	scanf("%d", &choose);

	switch(choose){
		case 1:
			printf("Qual número você deseja inserir ?\n");
			scanf("%d", &value);
			push(value);
	}

}

void push (int i)
{
 	if (p > fim){
 		printf ("Pilha Cheia \n");
 		exit(1);
 	}
 	*p=i;
 	p++;
} 
/*Recupera o elemento do topo da pilha */
int pop ( ){
 	p--;
 		if (p < topo){
 			printf ("Pilha Vazia \n");
 		return 0;
 		}
 		return *p;
}

void imprimir(){
	 int i;
	 int *aux=topo;
	 int *aux2=p;
	 printf("Pilha: \n");
	 	while (aux < aux2){
	 	printf ("%d",*(aux++));
	 	printf ("\n");
	 }
}

int main(){
 	
 	p = (int *) malloc (1000); /* memória da pilha – 1000 bytes*/

 	printf("%d", p);
 	
 	if (p==NULL){
 		printf ("Falha de alocação \n");
 		exit(1);
 	}
 	topo = p;
 	fim = p + 1000 - 1;
 	menu();
} 