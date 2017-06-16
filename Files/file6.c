#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

  char url[] = "ADL.txt";
  char frase[50];
  FILE *arq;

  if(!(arq = fopen(url,"a"))){
    printf("OPA! ERRO\n");
    exit(1);
  }

  printf("Insira uma frase: ");
  fgets(frase, sizeof(frase), stdin);

  fprintf(arq, frase);

  return 0;
}
