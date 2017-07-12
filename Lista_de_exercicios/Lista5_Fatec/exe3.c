//Seja um algoritmo para controlar os produtos do estoque de um supermercado. Para cada produto

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

//Definindo variaveis global
//a) Escrever a definição da estrutura produto.
struct produtos{
    char nome[15];
    char setor[8];
    int quantidade;
    float preco;
}estoque[100]; //Declarar o vetor estoque do tipo da estrutura definida acima, de tamanho 100 e global.

int choose;
int cadastros = 0;

//Função para pause
void enter(void){

    while(getchar()!='\n');
        printf("Precione enter para continuar....\n");
    getchar();
}


//Criação de funções para menu

//c1. Definir um bloco de instruções para ler o vetor estoque.

void cadastro(){

    system("cls");

	fflush(stdin);

	void menu();
	void cadastroMenu();

	printf("CADASTRO\n");
	printf("Insira o nome do produto: ");
	fgets(estoque[cadastros].nome, sizeof(estoque[cadastros].nome), stdin);
	printf("Insira o nome do setor: ");
	fgets(estoque[cadastros].setor, sizeof(estoque[cadastros].setor), stdin);

	estoque[cadastros].nome[strlen(estoque[cadastros].nome)-1] = '\0';
	estoque[cadastros].setor[strlen(estoque[cadastros].setor)-1] = '\0';


	fflush(stdin);

	printf("Insira a quantidade: ");
	scanf("%i", &estoque[cadastros].quantidade);
	printf("Insira o preço: ");
	scanf("%f", &estoque[cadastros].preco);

	cadastros++;

	system("cls");
	printf("Deseja realizar outro cadastro ?\n");
	printf("1 - Sim\n2 - Não\n3 - Voltar para menu inicial\n$");
	scanf("%i", &choose);

	getchar();

	switch(choose){
		case 1:
			cadastro();
			break;
		case 2:
			cadastroMenu();
			break;
		case 3:
			menu();
			break;
		default:
			printf("OPÇÂO INVALIDA\n");
			break;
	}


}

void cadastroMenu(){

	system("cls");

	void menu();

	printf("MENU DE CADASTRO\n");
	printf("1 - Cadastrar\n");
	printf("2 - Voltar para o menu principal\n$");
	scanf("%i", &choose);

	getchar();

	switch(choose){
		case 1:
			cadastro();
			break;

		case 2:
			menu();
			break;

		default:
			printf("OPÇÂO INVALIDA!!!\n");
			break;
	}

}

//c2.Definir um bloco de instruções que receba um setor e devolva o número de diferentes produtos desse setor

void buscaProd(){

    system("cls");

	getchar();
	void menu();

	char setor[20];
	int total = 0;

	printf("BUSCA DE PRODUTOS - POR SETOR\n");

	printf("Insira o setor a ser encontrado: ");
	fgets(setor, sizeof(setor), stdin);

	setor[strlen(setor)-1] = '\0';

	int ds = 0;

	char prods[cadastros];

	for(size_t i = 0; i < cadastros; i++){
        if(strcmp(setor, estoque[i].setor) == 0){
            for(size_t j = 0; j < cadastros; j++){
                ds++;
            }
        }

    }

    printf("Este setor tem %i produto(s) cadastrados\n");
    enter();
    printf("Deseja fazer uma nova consulta ?\n");
    printf("1 - Sim\n2 - Não\n$");
    scanf("%i", &choose);

    switch(choose){
        case 1:
            buscaProd();
            break;
        case 2:
            menu();
            break;
        default:
            printf("OPÇÂO INVALIDA!!!");
            break;
    }
}

//c3. Definir um bloco de instruções que calcule e devolva o total de capital investido em produtos do supermercado.

void capital(){

	void menu();

	float capital = 0;

	for(size_t i = 0; i < cadastros; i++){
		capital += (estoque[i].quantidade * estoque[i].preco);
	}
	printf("O capital investido no supermercado foi %.2f\n", capital);
	enter();
	menu();

}


void menu(){

	system("cls");

	printf("MENU PRINCIPAL\n");
	printf("1 - Cadastrar produtos\n");
	printf("2 - Busca de produtos por setor\n");
	printf("3 - Calcular total de capital investido\n");
	printf("4 - Sair\n$");
	scanf("%i", &choose);

	switch(choose){
		case 1:
			cadastroMenu(); //c1
			break;
		case 2:
			buscaProd(); //c2
			break;
		case 3:
			capital(); //c3
			break;
		case 4:
			exit(0); //Sair =D
			break;

		default:
			printf("OPÇÂO INVALIDA\n");
			break;
	}


}

int main(void){

	menu();

    return 0;
}
