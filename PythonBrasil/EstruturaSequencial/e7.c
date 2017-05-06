//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>

int main(void){

    int b;

    printf("Insira o valor do lado do quadrado: \n");
    scanf("%i",&b);

    printf("A área do quadrado é %i e seu dobro é %i\n",(b * b), (b * b) * 2);

    return 0;
}
