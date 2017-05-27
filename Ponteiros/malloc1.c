#include <stdio.h>
#include <stdlib.h>

int main(void){

    char *prt;
    prt = malloc(5);
    int num = 1;

    printf("CHAR = %p\n", *prt);
    printf("MALLOC = %p\n", prt);
    printf("NORMAL = %p\n", num);

    return 0;
}
