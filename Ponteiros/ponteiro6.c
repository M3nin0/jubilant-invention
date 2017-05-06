//Realizando incremento de um ponteiro

#include <stdio.h>

int main(void){

    int je = 45;
    printf("INITIAL VALUE: %i\n", je);

    int *p = &je;

    printf("ENDR IN MEMORY: %p\n",  &p);
    printf("VALUE IN MEMORY: %i\n", *p);

    (*p)++;
    printf("(*p)++\n");

    printf("ENDR IN MEMORY: %p\n", &je);
    printf("VALUE IN MEMORY: %i\n", je);

    return 0;
}
