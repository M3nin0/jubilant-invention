/*
  O tipedef é um comando utilizado para criar "apelidos", na linguagem C
  Assim sendo possível simplificar algumas estruturas, nomes e tipos
*/

#include <stdio.h>

//Mudando o nome do tipo inteiro
typedef int INTEIRO;

int main(void){

  //Declarando variaveis do tipo "INTEIRO"
  INTEIRO x = 2, y = 3;

  printf("%i + %i = %i\n", x, y, (x+y));

  return 0;
}
