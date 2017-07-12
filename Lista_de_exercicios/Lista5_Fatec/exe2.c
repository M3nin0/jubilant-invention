#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
Elaborar funções para:
a) Ler a base de dados (código, leite, alim, nasc.mês e nasc.ano), armazenado em um vetor de estruturas.
b) Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso:
tenha mais de 5 anos, ou;
produza menos de 40 litros de leite por semana, ou;
produza entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de
alimento por dia.
c) Crie o menu de opções para:
c1.Devolver a quantidade total de leite produzida por semana na fazenda.
c2. Devolver a quantidade total de alimento consumido por semana na fazenda.
c3.Devolver a quantidade total de leite que vai ser produzido por semana na fazenda, após o abate.
*/

//Definindo variaveis global
int cadastrados = 1;
int choose;

struct datas{
    int mes;
    int ano;
};

struct reg{
    int codigo; //Codigo da cabeça de gado
    int leite; //Litros de leite
    int alim; //Quantidade de alimentos ingeridas por semana
    struct datas nasc; //Data de nascimento
    char abate[2]; //Campo onde vai a definição se será abatido ou nao
};

struct reg registro[2000];

void enter(void){

    while(getchar()!='\n');
        printf("Precione enter para continuar....\n$ ");
    getchar();
}

//Ler a base de dados (código, leite, alim, nasc.mês e nasc.ano), armazenado em um vetor de estruturas.
void cadastro(){

    void menu();

    system("cls");

    printf("CADASTRO\n");

    printf("\nCADASTRADOS = %i\n\n", cadastrados);

    printf("Insira o código do gado: ");
    scanf("%i", &registro[cadastrados].codigo);
    printf("Quantidade de litros de leite produzido: ");
    scanf("%i", &registro[cadastrados].leite);
    printf("Quantidade de alimento ingerida por semana (Em quilos): ");
    scanf("%i", &registro[cadastrados].alim);
    printf("Insira o mês e ano de nascimento (MẼS ANO): ");
    scanf("%i %i", &registro[cadastrados].nasc.mes, &registro[cadastrados].nasc.ano);

    /* OBS:

    Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso:
    tenha mais de 5 anos, ou;
    produza menos de 40 litros de leite por semana, ou;
    produza entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de
    alimento por dia.

    */


    if((registro[cadastrados].nasc.ano - 2017) > 5 || registro[cadastrados].leite < 40)
        strcpy(registro[cadastrados].abate, "S");
    else if(registro[cadastrados].leite > 50 && registro[cadastrados].leite < 70 && registro[cadastrados].alim > 50)
        strcpy(registro[cadastrados].abate,"S");
    else
        strcpy(registro[cadastrados].abate, "N");


    cadastrados++;

    printf("Deseja realizar mais cadastros ?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");

    scanf("%i", &choose);

    switch(choose){
        case 1:
            cadastro();
            break;
        case 2:
            menu();
            break;
        default:
            printf("OPÇÂO INVALIDA\n");
            break;
    }

}


//Devolver a quantidade total de leite produzida por semana na fazenda.
void TLeite(){

    system("cls");

    void menu();

    int total = 0;

    for(size_t i = 0; i < 7; i++)
        total += registro[i].leite;

    printf("Será produzido semanalmente %i litro(s) de leite\n\n", total);

    enter();
    menu();
}

//Devolver a quantidade total de leite que vai ser produzido por semana na fazenda, após o abate.

void TLeiteAbate(){

    system("cls");

    void menu();

    int total = 0;

    for(size_t i = 0; i < 7; i++){
        if(strcmp(registro[i].abate, "N") == 0)
            total += registro[i].leite;
    }

    printf("Será produzido semanalmente %i litro(s) de leite após os abates\n\n", total);

    enter();
    menu();
}

//Devolver a quantidade total de alimento que vai ser consumido por semana na fazenda, após o abate
void consumo(){

    system("cls");

    void menu();

    int total = 0;

    for(size_t i = 0; i < 7; i++){
        if(strcmp(registro[i].abate, "N") == 0)
            total += registro[i].alim;
    }

    printf("Será utilizado %i quilos de alimento por semana após os abates\n\n", total);

    enter();
    menu();
}

//Devolver número de cabeças de gado que iram para o abate.
void qAbate(){

    system("cls");

    void menu();

    int total = 0;

    for(size_t i = 0; i < 7; i++){
        if(strcmp(registro[i].abate, "S") == 0)
            total += 1;
    }

    printf("Serão abatidos %i cabeças de gado\n", total);

    enter();
    menu();
}


void menu(){

    system("cls");

    printf("MENU PRINCIPAL\n");

    printf("1 - Quantidade de leite produzida por semana\n");
    printf("2 - Quantidade de leite produzida por semana apos abates\n");
    printf("3 - Cadastrar gado\n");
    printf("4 - Quantidade de alimento consumido após abate\n");
    printf("5 - Quantidade de gado abatido\n");
    printf("6 - Sair do programa\n\n$ ");

    scanf("%i", &choose);

    switch(choose){
        case 1:
            TLeite();
            break;

        case 2:
            TLeiteAbate();
            break;

        case 3:
            cadastro();
            break;

        case 4:
            consumo();
            break;

        case 5:
            qAbate();
            break;

        case 6:
            printf("Bye\n");
            exit(0);
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
