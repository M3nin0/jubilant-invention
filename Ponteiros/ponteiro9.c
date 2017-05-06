//Mostrando a sequencia separa na memoria para Array;

#include <stdio.h>

void main(void){

    int array[10];

    printf("TAMANHO NA MEMORIA DO ARRAY = %i\n", sizeof(array));

    for(size_t i = 0; i < 10; i++)
        printf("%i\n", &array[i]);
}
