//Pegando valores da função sem return

#include <stdio.h>

void soma(int *valor){

    int t_;

    printf("INSIRA O VALOR A SER ACRESCIDO NA MEMORIA\n");
    scanf("%i", &t_);

    *valor = *valor + t_;

}


void main(void){

    int value = 100;

    printf("VALOR INICIAL DA VARIAVEL = %i\n", value);

    soma(&value);

    printf("O VALOR PASSOU A SER = %i\n", value);

}
