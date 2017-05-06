#include <stdio.h>
#include <stdlib.h>

int main(void){

    char *prt;
    prt = malloc(5);
    int num = 1;

    //printf("CHAR = %c\n", *prt);
    printf("MALLOC = %i\n", prt);
    printf("NORMAL = %i\n", num);

    return 0;
}
