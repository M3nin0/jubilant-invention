#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

  char pwd[] = "file5.txt";
  char letra;
  FILE *p;

  printf("Insira a letra: \n");
  letra = getchar();

  p = fopen(pwd, "w");

  if(p == NULL){
    printf("OPA! NÂO CONSEGUI ABRIR O ARQUIVO\n");
    exit(1);
  }else{
    fputc(letra, p);
    fclose(p);
  }



  return 0;
}
