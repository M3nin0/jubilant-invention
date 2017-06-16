#include <stdio.h>
#include <stdlib.h>

int main(void){

  char url[] = "file7.txt";
  int numero;
  FILE *p;

  printf("Insira um numero: ");
  scanf("%i", &numero);

  if(!(p = fopen(url, "a"))){
    printf("ERROR!\n");
    exit(1);
  }else{
    fprintf(p,"%i\n",numero);
  }

  return 0;
}
