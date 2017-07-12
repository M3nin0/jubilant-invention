//Sistema de carros com struct
//Compilado com gcc (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Definindo a estrutura de carros - Global
struct carros{
   char marca[15];
   int ano;
   char cor[10];
   float preco;
};

struct carros vetcarros[20];

//Variavel escolha & cadastros - Global
int choose;
int cadastros = 0;

//Função para cadastro de carros
void cadastraCarro(){

  void admin();

  fflush(stdin);

  system("cls");

  do{

    printf("CADASTRO\n");

    printf("Insira a marca do carro: ");
    fgets(vetcarros[cadastros].marca, sizeof(vetcarros[cadastros].marca), stdin);
    printf("Insira a cor do carro:  ");
    fgets(vetcarros[cadastros].cor, sizeof(vetcarros[cadastros].cor), stdin);

    fflush(stdin);

    printf("Insira o ano do carro: ");
    scanf("%i", &vetcarros[cadastros].ano);
    printf("Insira o preço do carro: ");
    scanf("%f", &vetcarros[cadastros].preco);

    vetcarros[cadastros].marca[strlen(vetcarros[cadastros].marca)-1] = '\0';
    vetcarros[cadastros].cor[strlen(vetcarros[cadastros].cor)-1] = '\0';

    cadastros++;

    printf("Você deseja cadastrar outro carro ?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%i", &choose);

    getchar();

    switch(choose){
      case 1:
        continue;
        break;
      case 2:
        admin();
        break;
      default:
        printf("OPÇÂO INVALIDA\n");
        break;
    }

  }while(1);
}

//Função para limpar lista

void limpaCadastro(){

  for(size_t i = 0; i < sizeof(vetcarros[cadastros].marca); i++){
      strcpy(vetcarros[i].marca, "");
      vetcarros[i].ano = 0;
      strcpy(vetcarros[i].cor,"");
      vetcarros[i].preco = 0;
    }
}


//Definir uma função para ler o vetor vetcarros.
void lerCarros(){

  void menu();

  system("cls");

  printf("CARROS CADASTRADOS\n");

  for(size_t i = 0; i < cadastros; i++){
      printf("Marca: %s\n", vetcarros[i].marca);
      printf("Ano: %i\n", vetcarros[i].ano);
      printf("Cor: %s\n",vetcarros[i].cor);
      printf("Valor: %.4f\n",vetcarros[i].preco);
  }

  menu(1);

}
//Definir uma função que receba um preço e imprima os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido.
void buscaValor(){

  void menu();

  system("cls");

  float value;

  printf("BUSCA POR PREÇO\n");
  printf("Insira o valor que deseja buscar: ");
  scanf("%f", &value);

  for(size_t i = 0; i < cadastros; ++i){
    if(vetcarros[i].preco <= value){
      printf("Marca: %s\n", vetcarros[i].marca);
      printf("Ano: %i\n", vetcarros[i].ano);
      printf("Cor: %s\n",vetcarros[i].cor);
      printf("Valor: %.4f\n",vetcarros[i].preco);
    }
  }

  printf("Deseja fazer nova busca ?\n");
  printf("1 - Sim\n");
  printf("2 - Não\n");
  scanf("%i", &choose);

  switch(choose){
    case 1:
      buscaValor();
      break;
    case 2:
      menu(0);
      break;
    default:
      printf("OPÇÂO INVALIDA\n");
      break;
  }

}
//Defina uma função que leia a marca de um carro e imprima as informações de todos os carros dessa marca (preço, ano e cor).
void buscaMarca(){

  void menu();

  system("cls");

  char value[15];

  printf("BUSCA POR MARCA\n");
  printf("Insira a marca que deseja buscar: ");
  fgets(value, sizeof(value), stdin);

  value[strlen(value)-1] = '\0';

  for(size_t i = 0; i < cadastros; ++i){
    if(strcmp(vetcarros[i].marca,value) == 0){
      printf("Marca: %s\n", vetcarros[i].marca);
      printf("Ano: %i\n", vetcarros[i].ano);
      printf("Cor: %s\n",vetcarros[i].cor);
      printf("Valor: %.4f\n\n",vetcarros[i].preco);
    }
  }

  printf("Deseja fazer nova busca ?\n");
  printf("1 - Sim\n");
  printf("2 - Não\n");
  scanf("%i", &choose);

  switch(choose){
    case 1:
      getchar();
      buscaMarca();
      break;
    case 2:
      menu(0);
      break;
    default:
      printf("OPÇÂO INVALIDA\n");
      break;
  }

}

//Defina uma função que leia uma marca, ano e cor e informe se existe ou não um carro com essas características. Se existir, informar o preço.
void buscaInfos(){

  void menu();

  system("cls");

  char mark[30];
  char color[40];
  int year;

  printf("BUSCA ESPECÍFICA\n\n");

  printf("Insira a marca: ");
  fgets(mark, sizeof(mark), stdin);
  printf("Insira a cor: ");
  fgets(color, sizeof(color), stdin);

  mark[strlen(mark)-1] = '\0';
  color[strlen(color)-1] = '\0';

  printf("Insira o ano: ");
  scanf("%i", &year);

  printf("\n");

  for(size_t i = 0; i < cadastros; i++){
    if(strcmp(vetcarros[i].marca, mark) == 0){
      if(strcmp(vetcarros[i].cor, color) == 0){
        if(year == vetcarros[i].ano){
          printf("O carro equivalente a pesquisa é: \n");
          printf("Marca: %s\n", vetcarros[i].marca);
          printf("Cor: %s\n", vetcarros[i].cor);
          printf("Ano: %i\n", vetcarros[i].ano);
          printf("Valor: %.2f\n\n", vetcarros[i].preco);
        }
      }
    }
    else
      printf("Não temos carros com essas características\n");
  }

  printf("Deseja fazer nova busca ?\n");
  printf("1 - Sim\n");
  printf("2 - Não\n");
  scanf("%i", &choose);

  switch(choose){
    case 1:
      getchar();
      buscaInfos();
      break;
    case 2:
      menu(0);
      break;
    default:
      printf("OPÇÂO INVALIDA\n");
      break;
  }


}

void menu(int tst){

  if(tst == 0)
    system("cls");

  //Limpando struct dos carros

  void admin();

  printf("MENU PRINCIPAL\n");
  printf("1 - Mostrar todos os carros e informações\n");
  printf("2 - Buscar carro por preço\n");
  printf("3 - Buscar carro por marca\n");
  printf("4 - Busca especifica\n");
  printf("5 - Funções administrativas\n");
  printf("6 - Sair do programa\n\n$");
  scanf("%i", &choose);
  getchar();

  switch(choose){
    case 1:
      lerCarros();
      break;
    case 2:
      buscaValor();
      break;
    case 3:
      buscaMarca();
      break;
    case 4:
      buscaInfos();
      break;
    case 5:
      admin();
      break;
    case 6:
      printf("Bye\n");
      exit(0);

    default:
      printf("OPÇÂO INVALIDA!");
  }

}

void admin(){
  system("cls");

  printf("MENU ADMINISTRATIVO\n");
  printf("1 - Cadastrar carro\n");
  printf("2 - Limpar carros cadastrados\n");
  printf("3 - Voltar\n\n$");
  scanf("%i", &choose);
  getchar();

  switch(choose){
    case 1:
      cadastraCarro();
      break;
    case 2:
      limpaCadastro();
      admin();
      break;
    case 3:
      menu(0);
      break;
    default:
      printf("OPÇÂO INVALIDA!\n");
  }
}

int main(void){

  menu(0);

  return 0;
}
