#include <stdio.h>

int main(void){

  signed char c;

  //sizeof() --> retorna o tamanho da variavel
  //seu retorno é feit em long unsigned 
  //sizeof não é uma função e sim um operador

  //lu == long unsigned

  printf("O tamanho de c é %lu byte / %lu bits\n", sizeof(char), sizeof c * 8);

  c = 255;
  printf("O valor de c: %i\n", c);

  return 0;
}
