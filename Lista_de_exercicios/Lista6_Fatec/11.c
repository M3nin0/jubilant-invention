/*
Fazer um programa para simular uma agenda de telefones. 
Para cada pessoa deve-se ter os seguintes dados:
• Nome
• E-mail
• Endereço (contendo campos para Rua, numero, complemento, bairro, cep,
cidade, estado, país)
• Telefone (contendo campo para DDD e número)
• Data de aniversário (contendo campo para dia, mês, ano)
• Observações : Uma linha (string) para alguma observações especial.
a) Definir a estrutura acima.
b) Declarar a variável agenda (vetor) com capacidade de agendar até 10 nomes.
c) Gravar os dados desse vetor em um arquivo chamado agenda.txt.
d) Definir um função para buscar por primeiro nome(busca_nome) no arquivo agenda.txt:
Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

#define ER ".*[!-$]"
#define ER2 ".*[:-;]"
#define cadastros 2

struct pessoa{
	char nome[25];
	char email[40];
	char endereco[30];
	char aniversario[30];
	char telefone[15];
}agenda[cadastros];

void cadastra_nome(){

	getchar();

	FILE *p;
	p = fopen("agenda.txt", "a");
	int c = 0;

	printf("CADASTRO DE PESSOAS\n");
	while(c < cadastros){

		printf("Nome: ");
		fgets(agenda[c].nome, sizeof(agenda[c].nome), stdin);
		printf("Email: ");
		fgets(agenda[c].email, sizeof(agenda[c].email), stdin);
		printf("Endereço: ");
		fgets(agenda[c].endereco, sizeof(agenda[c].endereco), stdin);
		printf("Aniversario: ");
		fgets(agenda[c].aniversario, sizeof(agenda[c].aniversario), stdin);
		printf("Telefone: ");
		fgets(agenda[c].telefone, sizeof(agenda[c].telefone), stdin);

		agenda[c].nome[strlen(agenda[c].nome)-1]='\0';

		fprintf(p, "%s%s%s\n",":",agenda[c].nome,";");
		fprintf(p, "%s", agenda[c].email);
		fprintf(p, "%s", agenda[c].endereco);
		fprintf(p, "%s", agenda[c].aniversario);
		fprintf(p, "%s", agenda[c].telefone);

		c++;
	}

	fclose(p);
}

void busca_nome(){

	getchar();

	regex_t reg;
	FILE *p, *l;
	p = fopen("agenda.txt", "r");
	l = fopen("pesquisa.txt", "w");

	char nome[15];	
	char linha[50];
	int c;

	if(regcomp(&reg, ER2, REG_EXTENDED) != 0){
     	printf("Expressão regular invalida!\n");
    	exit(1);
    }

    printf("Insira o nome que deseja procurar:\nInsira : e ;\nExemplo :Jose;\n");
   	fgets(nome, sizeof(nome), stdin);

   	nome[strlen(nome)-1]='\0';

    while(!feof(p)){
    	c = 0;

    	fscanf(p, "%s", linha);

		if((regexec(&reg, linha, 0, (regmatch_t *)NULL, 0)) == 0) {
        	    //fprintf(l, "%s\n", linha);
        		fprintf(l, "%s\n", nome);
        		if(strcmp(nome,linha) == 0){
					while(c < 4){
						fscanf(p, "%s\n", linha);
						fprintf(l, "%s\n", linha);
						c++;
					}      			
     
       			}
       		}
       	}

    fclose(p);
    fclose(l);
  	}	

int main(void){

	int choose;

	printf("MENU\n");
	printf("O que deseja fazer ?\n");
	printf("1 - Cadastrar\n");
	printf("2 - Pesquisar\n");
	printf("3 - Sair\n");
	scanf("%i", &choose);

	switch(choose){
		case 1:
			cadastra_nome();
			break;
		case 2:
			busca_nome();
			break;
		default:
			printf("OPA! Opção invalida!\n");
			exit(1);
	}

	return 0;
}