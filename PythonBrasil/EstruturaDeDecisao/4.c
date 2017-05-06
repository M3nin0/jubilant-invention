//Faça um Programa que verifique se uma letra digitada é vogal ou consoante.


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){

    int cont = 0;
    char letra[2];

    printf("Insira uma letra\n");
    fgets(letra, sizeof(letra), stdin);

    if(strcmp(letra,"a") == 0)
        printf("Vogal\n");

    else if(strcmp(letra,"e") == 0)
        printf("Vogal\n");
    
    else if(strcmp(letra,"i") == 0)
        printf("Vogal\n");
   
    else if(strcmp(letra, "o") == 0)
        printf("Vogal\n");
    
    else if(strcmp(letra, "u") == 0)
        printf("Vogal\n");

    else
        printf("Consoante\n");

    return 0;
;}
