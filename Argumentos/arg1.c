#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){

    if(argc != 2){
        printf("CADE SEU NOME ! ! !\n");
        exit(0);
    }
    printf("Bom Dia %s \n", argv[1]);

}
