//Mostrando o valor através de ponteiros

#include <stdio.h>

int main(void){


    int value = 2;
    int *p;
    p = &value;

    printf("VALOR DA VARIAVEL = %i\n", value);

    *p = *p + 2;

    printf("%i\n", value);

    return 0;
}
