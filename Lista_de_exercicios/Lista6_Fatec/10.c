#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
void apagar();
void sair();
void abrir();
void editar();

void abrir(){

	getchar();

	FILE *p;

	char url[15];
	char letra[90];
	int choose;

	printf("Insira o caminho do arquivo: \n");
	fgets(url, sizeof(url), stdin);

	url[strlen(url) - 1] = '\0';

	p = fopen(url,"r");

	if(p == NULL){
		printf("Não foi possível abrir o arquivo ! ! !");
		exit(11);
	}

	while(!feof(p)){
		fgets(letra, sizeof(letra), p);
		letra[strlen(letra)-1] = '\0';
		printf("%s\n", letra);
	}

	printf("\n\nDeseja editar este arquivo?\n");
	printf("1 - Sim\n2 - Não\n");
	scanf("%d", &choose);

	if(choose == 1)
		editar(url);
	else
		menu();

}

void apagar(){

	getchar();

	char url[20];

	printf("Insira o diretório do arquivo que será deletado\n");
	fgets(url, sizeof(url), stdin);

	url[strlen(url) - 1] = '\0';

	remove(url);

}

void editar(char url[]){

	getchar();

	FILE *p, *j;

	char temp[] = "novo_arquivo.txt";
	char letra[99];

	p = fopen(url, "r");
	j = fopen(temp, "w");

	int linha, cont = 0;
	char new_linha[150];

	printf("Qual linha deseja editar ?\n");
	scanf("%d", &linha);

	getchar();

	printf("Insira o novo conteúdo da linha: \n");
	fgets(new_linha, sizeof(new_linha), stdin);

	new_linha[strlen(new_linha)-1] = '\0';

	while(!feof(p)){

		fgets(letra, sizeof(letra), p);
		letra[strlen(letra)-1] = '\0';

		if(cont == linha){
			fprintf(j, "%s\n", new_linha);
		}

		fprintf(j, "%s\n", letra);

		cont++;
	}

	remove(url);
	rename(temp, url);

}

void menu(){
	int choose;

	printf("BEM-VINDO AO PADNOTE \n");

	printf("O que deseja fazer ?\n");
	printf("1 - Visualizar arquivo\n");
	printf("2 - Apagar arquivo\n");
	printf("3 - Sair\n");
	scanf("%d", &choose);

	switch(choose){
		case 1:
			abrir();
			break;
		case 2:
			apagar();
			break;
		case 3:
			exit(0);

		default:
			printf("OPÇÂO INVALIDA!");
			exit(1);
	}
}

int main(void){

	menu();

	return 0;
}